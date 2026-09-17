#include <bits/stdc++.h>
#include <cstdint>
#include <iostream>
#include <regex>

#include "./magic_enum.hpp"

enum NOTES { C, D, E, F, G, A, B };

struct note_t {
  NOTES note;
  int8_t modifier;
};

struct chord_t {
  note_t root;
  note_t third;
  note_t fifth;
  note_t seventh;
};

NOTES next_raw_note(NOTES);
NOTES previous_raw_note(NOTES);

note_t next_chromatic_note(note_t, bool forceSameNote = false);
note_t previous_chromatic_note(note_t, bool forceSameNote = false);

note_t next_diatonic_note(note_t);
note_t previous_diatonic_note(note_t);

const std::string lower(const std::string &);
const std::string modifier(int8_t, bool forceNatural = true);

int8_t get_degree(const std::string &);
int8_t get_bass(const std::string &);

bool has_seventh(const std::string &str);

std::ostream &operator<<(std::ostream &os, note_t const &arg) {
  os << magic_enum::enum_name<NOTES>(arg.note) << modifier(arg.modifier);
  return os;
}

std::string to_string(note_t const &arg) {
  std::ostringstream ss;
  ss << arg;
  return std::move(ss).str();
}

int main() {
  std::cout << "Input: ";
  std::string in;
  std::cin >> in;

  std::regex r("(b|#)?(VII|vii|VI|vi|V|v|IV|iv|III|iii|II|ii|I|i)(\\+|o|°|"
               "sus4)?(6-5|6-4|4-3|4-2|7|6)?(sus4|sus2|sus)?(?:\\/"
               "(VII|vii|VI|vi|V|v|IV|iv|III|iii|II|ii|I|i))?");

  std::smatch m;
  std::regex_search(in, m, r);

  std::string results[m.size()];
  for (int i = 0; i < m.size(); ++i)
    results[i] = m[i];

  for (int i = 0; i < sizeof(results) / sizeof(std::string); ++i)
    std::cout << i << ": " << results[i] << std::endl;

  int degree = get_degree(results[2]);
  int8_t degreeModifier =
      results[1].empty()
          ? 0
          : (results[1] == "b" ? -1 : (results[1] == "#" ? 1 : 0));

  int secondaryDegree = get_degree(results[6]);
  if (secondaryDegree < 0)
    secondaryDegree = 1;

  int8_t thirdModifier = isupper(results[2][0]) ? 0 : -1;
  int8_t fifthModifier =
      results[3].empty()
          ? 0
          : (results[3] == "°" ? -1 : (results[3] == "+" ? 1 : 0));

  bool seventh = has_seventh(results[4]);

  bool replaceThirdWithSecond = (results[5] == "sus2");
  bool replaceThirdWithFourth = (results[5] == "sus") || (results[5] == "sus4");

  int bass = get_bass(results[4]);

  std::cout << degree << "° degree"
            << (degreeModifier == 1 ? " ↑" : (degreeModifier == -1 ? " ↓" : ""))
            << (secondaryDegree > 1
                    ? (" from " + std::to_string(secondaryDegree) + "° degree")
                    : "")
            << std::endl;
  chord_t chord = {note_t{C, 0}, note_t{E, 0}, note_t{G, 0}, note_t{B, 0}};

  if (replaceThirdWithSecond) {
    chord.third = note_t{D, 0};
    std::cout << "With a ♮2" << std::endl;
  } else if (replaceThirdWithFourth) {
    chord.third = note_t{F, 0};
    std::cout << "With a ♮4" << std::endl;
  } else
    std::cout << "With a " << modifier(thirdModifier, true) << "3" << std::endl;
  std::cout << "With a " << modifier(fifthModifier, true) << "5" << std::endl;
  std::cout << "With" << (seventh ? "" : "out") << " a seventh" << std::endl;
  std::cout << bass << "° note is bass" << std::endl;

  std::cout << "1: " << "C" << std::endl;
  std::cout << "2: " << previous_chromatic_note({E, 0}) << std::endl;
  std::cout << "3: " << "G" << std::endl;
  std::cout << "4: " << "(B)" << std::endl;

  return 0;
  // biv°6-5sus2/II
}

NOTES next_raw_note(NOTES from) {
  int out = (int)from + 1;
  if (out > (int)B)
    out = 0;
  return (NOTES)out;
}
NOTES previous_raw_note(NOTES from) {
  int out = (int)from - 1;
  if (out < 0)
    out = (int)B;
  return (NOTES)out;
}

note_t next_chromatic_note(note_t from, bool forceSameNote) {
  note_t out = from;
  if (forceSameNote) {
    out.modifier += 1;
    return out;
  }

  if (from.note == B || from.note == E) {
    out.note = next_raw_note(out.note);
    return out;
  }

  out.modifier += 1;
  return out;
}
note_t previous_chromatic_note(note_t from, bool forceSameNote) {
  note_t out = from;
  if (forceSameNote) {
    out.modifier -= 1;
    return out;
  }

  if (from.note == C || from.note == F) {
    out.note = previous_raw_note(out.note);
    return out;
  }

  out.modifier -= 1;
  return out;
}

note_t next_diatonic_note(note_t from) {
  note_t to;
  to.modifier = 0;
  to.note = next_raw_note(from.note);
  return to;
}
note_t previous_diatonic_note(note_t from) {
  note_t to;
  to.modifier = 0;
  to.note = previous_raw_note(from.note);
  return to;
}

const std::string lower(const std::string &str) {
  std::string out;

  for (char c : str)
    out += tolower(c);

  return out;
}

const std::string modifier(int8_t n, bool forceNatural) {
  std::string out;
  switch (n) {
  case -2:
    out = "♭♭";
    break;
  case -1:
    out = "♭";
    break;
  case 0:
    out = forceNatural ? "♮" : "";
    break;
  case 1:
    out = "♯";
    break;
  case 2:
    out = "♯♯";
    break;
  default:
    out = "ERR";
    break;
  }
  return out;
}

int8_t get_degree(const std::string &str) {
  std::string s = lower(str);
  if (s == "i")
    return 1;
  if (s == "ii")
    return 2;
  if (s == "iii")
    return 3;
  if (s == "iv")
    return 4;
  if (s == "v")
    return 5;
  if (s == "vi")
    return 6;
  if (s == "vii")
    return 7;

  return -1;
}

int8_t get_bass(const std::string &str) {
  if (str == "6")
    return 2;
  if (str == "6-4")
    return 3;

  if (str == "7")
    return 1;
  if (str == "6-5")
    return 2;
  if (str == "4-3")
    return 3;
  if (str == "4-2")
    return 4;

  return 1;
}

bool has_seventh(const std::string &str) {
  if (str == "7")
    return true;
  if (str == "6-5")
    return true;
  if (str == "4-3")
    return true;
  if (str == "4-2")
    return true;

  return false;
}
