# R1.06 Mathématiques Discrètes
```
- Tests:
  - Test 1: 14/10 (Chapitre 1-3)
  - Test 2: 10/11 (Chapitre 4-7)
  - Test 3: 18/12
- TD/TP:
  - / Test 1 TD1
  - | TD2
  - \ TD3
  - / Test 2 TD4
  - | TD5
  - | TD6 révisions
  - \ TP1
  - / Test 3 TD7
  - | TD8
  - | TD9
  - | TP2
  - \ TP3 révisions
- Tests contrôle continu:
  1. TCC (A) 22/09
  2. TCC (A) 29/09
  3. TCC (A) 6/10
  4. TCC (A) 20/10
  5. TCC (A) 3/11
  6. TCC (B) 23/11
  7. TCC (B) 1/12
  8. TCC (B) 7/12
```

Les **mathématiques discrètes**, parfois appelées *mathématiques finies*, sont l'atude des structures mathématiques fondamentalement **discrètes**, par opposition aux structures continues.

## Ensembles
### Définition
Un **ensemble** est une collection d'objets deux à deux distincts appelés **éléments**. On peut définir un ensemble de deux manières:
- en *extension*: on donne la liste exhaustive des éléments qui y figurent ;
- en *compréhension*: on donne les propriétés que doivent posséder les éléments de l'ensemble ;

Exemples:
- $\mathbb{N} = \{0,1,2,3,\cdots\}$
- $\mathbb{N}^* = \{1,2,3,\cdots\}$
- $\mathbb{Z} = \{\cdots,-3,-2,-1,0,1,2,3,\cdots\}$
- $\mathbb{Q} = \{\frac{p}{q}:p \in \mathbb{Z} \text{et} q \in \mathbb{Z} \text{avec} q\neq 0\}$
- $\mathbb{R}$
- $\mathbb{C}$
- Le type `bool`: $\{\text{Vrai}, \text{Faux}\}$

### Règles
On admettra l'existence d'ensembles. La notion d'ensemble satisfait un certain nombre de règles de foncitonnement:
- **Relation d'appartenance**. Il faut pouvoir dire si un objet est dans l'ensemble: $x \in A$ l'élément $x$ est dans l'ensemble $A$
- **Objets distincts**. On peut distinguer deux éléments entre eux et un ensemble dne peut pas contnir deux fois le même objet.
- **Ensemble vide**. Il existe un ensemble qui ne contient auxun élément, c'est l'ensemble vide et on le note $\emptyset$ ou $\{\}$
- **Paradoxe de Russell**. Un ensemble peut être élément d'un autre ensemble mais pas de lui-même.

### Sous-ensembles
L'ensemble $A$ est un **sous-ensemble** de B si tous les éléments de $A$ sont des éléments de $B$ ($x \in A \Rightarrow x \in B$). On dit aussi que $A$ est inclus dans $B$, on le note $A \subseteq B$.

Pour tout ensemble $A$ on a $\emptyset \subseteq A$ et $A \subseteq A$

Ensemble égaux:<br/>
Deux ensembles sont **égaux** si et seulement si ils ont les même éléments, autrement dit si $A \subseteq B$ et $B \subseteq A$.

Ensemble des parties:<br/>
Soit $A$ un ensemble, l'ensemble des parties de $A$, noté $P(A)$, est l'ensemble des sous-ensembles de $A$.

Si $A = \{1,2,3\}$ alors<br/>
$P(A)=\{\emptyset,\{1\},\{2\},\{3\},\{1,2\},\{1,3\},\{2,3\},\{1,2,3\}\}$

On a $P(\emptyset)=\{\emptyset\}$ et $P(P(\emptyset))=\{\emptyset,\emptyset\}$

### Opérations sur les ensembles
L'**union** des ensembles $A$ et $B$ est l'ensemble des éléments qui sont éléments de $A$ ou de $B$. On le note $A\cup B$<br/>
L'union admet certaines propriétés:
- Idempotence: $A \cup A = A$
- Commutativité: $A \cup B = B \cup A$
- Associativité: $A \cup (B \cup C) = (A \cup B) \cup C$
- Elément neutre: $A \cup \emptyset = A$

L'**intersection** des ensembles $A$ et $B$ est l'ensemble des éléments communs à $A$ et à $B$. On le note $A \cap B$. On dit que deux ensembles sont disjoints (ou incompatibles) si $A \cap B = \emptyset$.<br/>
L'intersection admet certaines propriétés:
- Impotence: $A \cap A = A$
- Commutativité: $A \cap B = B \cap A$
- Associativité: $A \cap (B \cap C) = (A \cap B) \cap C$
- Elément neutre: si l'on se place dans un ensemble $\Omega$ appelé **univers** et que $A$ est un sous-ensemble de $\Omega$ alors $A \cap \Omega = A$

La **ditributivité**<br/>
Propriétés de distributivité:
- $\cup$ sur $\cap$: $A \cup (B \cap C) = (A \cup B) \cap (A \cup C)$
- $\cap$ sur $\cup$: $A \cap (B \cup C) = (A \cap B) \cup (A \cap C)$

La **différence** de l'ensemble $A$ par l'ensemble $B$ est l'ensemble des éléments qui sont dans $A$ mais pas dans $B$, on le note $A \backslash B$

La différence symétrique entre les ensembles $A$ et $B$ est l'ensemble des éléments qui sont dans $A$ ou $B$ mais pas dans les deux, on le note $A\Delta B = (A \cup B) \backslash (A \cap B)$

On se fixe un ensemble $\Omega$ appelé univers. Pour $A \subseteq \Omega$, on définit le **complémentaire** de A par rapport à $\Omega$ quine sont pas éléments de A, on le note $\overline{A} = \Omega \backslash A$ lorsqu'il n'y a pas d'ambiguïtés.
La complémentation admet certaines propriétés:
- Involution: $\overline{\overline{A}} = A$
- Loi de De Morgan: $\overline{A \cap B} = \overline{A} \cup \overline{B}$ et $\overline{A \cup B} = \overline{A} \cap \overline{B}$

Le **produit cartésien** des ensembles $A$ et $B$ (dans cet ordre) est l'ensemble des couples $(a,b)$ où $a \in A$ et $b \in B$, on le note $A \times B$

Le **produit cartésien** des ensembles $A_1,A_2,\cdots A_k$ (dans cet ordre) est l'ensemble des $k$-uplets $(a_1,\cdots,a_k)$ où $a_i \in A_i$ pour tout $i \in \{1,..,k\}$, on le note $A_1 \times \cdots \times A_k$<br/>
Si $A_1 = \cdots = A_k$ on note $A^k$ l'ensemble des $k$-uplets formés par les éléments de $A$

## Logique
### Logique booléenne
Une **expression booléenne** correspond a un regroupement d'affirmations. On désigne par le terme **expression booléenne atomiqe** une expression booléenne contenant une seule affirmation.<br/>
*Une affirmation est une phrase, généralement de la forme "sujet-verbe-complément", à laquelle il est possible d'attribuer une valeur de vérité: il est possible de ???.*

Certaines expressions booléenne changent de valeur de vérité dépendamment du contexte. Par exemple:
- "La plus grande ville de ma région est la ville de Marseille"
- "$x \lt 7$"

Nous nous intéressons maintenant à la combinaison d'expressions booléennes atomiques en expressions booléennes pluscomplexes.<br/>
Nous effectuons de telles combinaisons dans ons conversations de tous les jours, notamment a l'aide des mots "et", "ou",et "si ... alors". Par exemple:
- "J'habite à Nice et j'ai les yeux bleus."
- "Si j'habite a Aix-en-Provence, alors la plus grande ville de ma région est la ville de Marseille."

### Opérateurs booléens de base
#### Négation, conjonction et disjonction

Soient $p$ et $q$ des expressions booléennes. Pour chaque combinaison de valeurs de vérité possibles, les tables de vérité ci-dessous indiquent le résultat de l'évaluation de la **négation**, de la **conjonctoin** et de la **disjonction**.

Négation:
$p$|$\neg p$
:-:|:------------:
$V$|$F$
$F$|$V$

Conjonction:
$p$|$q$|$p \wedge q$
:-:|:-:|:----------:
$V$|$V$|$V$
$V$|$F$|$F$
$F$|$V$|$F$
$F$|$F$|$F$

Disjonction:
$p$|$q$|$p \vee q$
:-:|:-:|:--------:
$V$|$V$|$V$
$V$|$F$|$V$
$F$|$V$|$V$
$F$|$F$|$F$

#### L'opérateur d'implication
Soient p et q des expressions booléennes, alors:
$$p \Rightarrow q \overset{\mathrm{def}}{=\mathrel{\mkern-3mu}=} \neg p \vee q$$

L'expression $p \Rightarrow q$ se traduit en français par "$p$ implique $q$" ou "si $p$ alors $q$."

Parfous, nous utilisonsle symbole $\Leftarrow$ pour désigner l'**implication inverse**:
$$p \Leftarrow q \overset{\mathrm{def}}{=\mathrel{\mkern-3mu}=} q \Rightarrow p$$

L'expression $p \Rightarrow q$ est évaluée ???

Exemple:
$p$|$q$|$p \Rightarrow q$
:-:|:-:|:---------------:

La règle $p \Rightarrow q$ ???

#### L'opérateur "si et seulement si"
L'opérateur "si et seulement si" est défini par la conjonction de deux implications:<br/>
Soient $p$ et $q$ des expressions booléennes, alors:
$$p \Longleftrightarrow q \overset{\mathrm{def}}{=\mathrel{\mkern-3mu}=} (p \Rightarrow q)\wedge(q \Rightarrow p)$$
$p$|$q$|$p \Longleftrightarrow q$
:-:|:-:|:-----------------------:
$V$|$V$|$V$
$V$|$F$|$F$
$F$|$V$|$F$
$F$|$F$|$V$

On constate que l'expression $p \Longleftrightarrow q$ est vraie lorsque les variables $p$ et $q$ ont la même valeur ???

#### Evaluation d'une expression booléenne
On évalue une expression booléenne de manière similaire à la plupart des expressions arithmétiques communes. Ainsi, il faut d'abord donner priorité aux expressions en parenthèses. Ensuite, on évalue l'expression selon l'ordre de priorité des opérateurs:
???

Loi de De Morgan:
$$\neg(p \wedge q) \Longleftrightarrow \neg p \vee \neg q$$
$$\neg(p \vee q) \Longleftrightarrow \neg p \wedge \neg q$$
$p$|$q$|$p \wedge q$|$\neg(p \wedge q)$|$\neg p$|$\neg q$|$\neg p \vee \neg q$|$\neg(p \wedge q) \Longleftrightarrow \neg p \wedge \neg q$
:-:|:-:|:----------:|:----------------:|:------:|:------:|:------------------:|:---------------------------------------------------------:
$V$|$V$|$V$|$F$|$F$|$F$|$F$|$V$
$V$|$F$|$F$|$V$|$F$|$V$|$V$|$V$
$F$|$V$|$F$|$V$|$V$|$F$|$V$|$V$
$F$|$F$|$F$|$V$|$V$|$V$|$V$|$V$

#### Propriétés de $\neg$, $\wedge$ et $\vee$
Soit $p$ une expressoin booléenne, alors:
- $(\neg(\neg p)) \Longleftrightarrow p$
- $p \vee \neg p \Longleftrightarrow \text{vrai}$
- $p \wedge \neg p \Longleftrightarrow \text{faux}$

Soient $p$, $q$ et $r$ des expressions booléennes, alors:
- $p \wedge \text{vrai} \Longleftrightarrow p$ Elément neutre
- $p \wedge \text{faux} \Longleftrightarrow \text{faux}$ Elément absorbant
- $p \wedge p \Longleftrightarrow p$ Idempotence
- $p \wedge q \Longleftrightarrow q \wedge p$ Commutativité
- $(p \wedge q) \vee r \Longleftrightarrow p \vee (q \wedge r)$ Associativité
- $(p \wedge q) \vee r \Longleftrightarrow (p \vee r) \wedge (q \vee r)$ ???

Soient $p$, $q$, $r$ des expressions booléennes, alors:
$$(p \Longleftrightarrow q) \wedge (q \Longleftrightarrow r) \Rightarrow (p \Longleftrightarrow r)$$

### Contraposition
Soient $p$ et $q$ des expressions booléennes, alors:
$$p \Rightarrow q \Longleftrightarrow \neg q \Rightarrow \neg p$$

### Affaiblissement et renforcement
Soient $p$ et $q$ des expressions booléennes, alors:
$$p \wedge q \Rightarrow p\;\;\text{Affaiblissement de la conjonction}$$
$$p \Rightarrow p \vee q\;\;\text{Renforcement de la disjonction}$$

### Contraposition:
Soient $p$ et $q$ deux expressions booléennes, démontrons $p \Rightarrow q \Longleftrightarrow \neg q \Rightarrow q$
$$p \Rightarrow q \Longleftrightarrow \neg p \vee q\;\;\text{par définition}$$
$$p \Rightarrow q \Longleftrightarrow \neg p \vee \neg(\neg q)\;\;\text{double négation}$$
$$p \Rightarrow q \Longleftrightarrow \neg(\neg q) \vee \neg p\;\;\text{commutativité de la disjonction}$$
???

### Problème SAT
Une **instance du problème SAT** consiste en une équation booléenne contenant des variables libres. Une telle instance est dite **satisfiable** lorqu'il existe une assignation de ???

### Démonstration
#### Démonstrations avec $\forall$ ou $\exists$
Supposons que nous devons démontrer une propriété de la forme suivante:
$$\forall x \in X | P(x)$$

Démonstration de 
Soit $x \in X$, montrons quue P(x) est vrai.
Alors pour telle raison [...]. Ce qui implique [...]. Et on peut en conclure que P(x)

Supposons que nous voulons démontrer une expression de la forme suivante
$$\exists x \in X | P(x)$$

Cela demande de trouver un élément $x$ de l’ensemble $X$ dont on est sûr de l’existence,
de plus il faut aussi choisir ce $x$ de telle sorte que ce $x$ satisfasse aussi la propriété $P$.

La démonstration d’un énoncé commençant par un quantificateur existentiel $\exists$ sera
toujours structurée comme suit :

Démonstration de $\exists x \in X | P(x)$. Prenons $x$, choisi de telle façon. Un tel $x$ existe et appartient a $X$ car [...]<br>
Montrons que P(x) est vrai.<br>
Alors pour telles et telles raisons, on a donc [...]<br>
Ce qui nous permet de conclure que P(x) est vrai.

C.Q.F.D.

#### Démonstrations utilisant l'arithmétique
$$(\forall n \in N | (\exists m \in N | m \gt n))$$
Soit $n \in N$. Montrons $\exists m \in N$ tel que $m \gt n$. Prenons $m = n + 1$.<br>
Par les propriétés de l’arithmétique, un tel $m$ existe et $m \in N$.<br>
Alors bien sûr, on a que $m = n + 1 \gt n$.

**C.Q.F.D.**

#### Démonstrations avec $\neg \forall$ ou $\neg \exists$
$$\neg(\exists m \in \N^* | m \gt m^2)$$
Par la loi de De Morgan, on peut transformer l’énoncé en
$\forall m \in \N^* | \neg(m \gt m^2)$, c’est-à-dire
$\forall m \in \N^∗ | (m \leq m^2)$. Démontrons donc ceci.<br>
Soit $m \in \N^*$. Alors on a $m \geq 1$. En multipliant par $m$
des deux côtes, on obtient $m \cdot m \leq 1 \cdot m$.
Ce qui est équivalent à $m \leq m^2$.

**C.Q.F.D.**

#### Démonstration avec implication
$$\text{Pour tout ensemble } S \text{ et } T\text{, on a } S \subseteq T \cup S.$$
Soient $S$ et $T$ des ensembles. On veut démontrer que $(\forall e | e \in S \Rightarrow e \in T \cup S)$ par
définition d’inclusion. Soit $e$ un element quelconque. Supposons $e \in S$.
Comme $e \in S$, alors "$e \in T \text{ ou } e \in S$" est vrai.<br>
Donc on a $e \in T \cup S$ par définition de l’union.

**C.Q.F.D.**

#### Démonstration avec ssi


#### Démonstration par cas

### Suites
Une **suite** est une séquence d’éléments d’un ensemble.
Un élément de cette suite est appelé un **terme** de la suite.

---

## Révision
$$4x^2 = 4x-1$$
$$4x^2-4x-1 = 0$$
$$(2x+1)^2 = 0$$
$$2x+1 = 0$$
$$2x = 1$$
$$x = \dfrac{1}{2}$$
$$
\text{Or } x \in \R \\
\text{Donc } \cancel{x}
$$

## Arithmétique
* $\N = \{0,1,2,3,\cdots\}$
* $\Z = \{\cdots,-2,-1,0,1,2,\cdots\}$
* $\N^* = \{1,2,3,\cdots\} = \N\backslash\{0\}$
* $\Z^* = \{\cdots,-2,-1,1,2,\cdots\} = \Z\backslash\{0\}$
* $\mathbb{Q} = \bigg\{\dfrac{p}{q},\ p \in \Z,\ q\in\N^*\bigg\}$
* $\R \text{ est l'ensemble des nombres réels}$

Pour $a \in \R$ sur note par $|a|$ la **valeur absolue** de $a$. Elle possède les propriétés suivantes:
* $|a \cdot b| = |a| \cdot |b| \text{ quel que soit le signe de } a \text{ et de } b$
* $|a + b| \leq |a| + |b|\text{}$
* $|a| \lt b \text{ est équivalent à } -b \lt a \lt b$<br>
  Donc:
$$|a| = a \cdot sign(a)$$

### La division entière et l'algorithme d'Euclide
Soit $a \in Z^*$ et $b \in \Z$, alors il existe $q \in \Z$ et $q \in \N$ uniques tels que
$$b = a \cdot q + r,\;\;\;\;0 \leq r \le |a|,$$
$q$ et $r$ sont appelés respectivement le **quotient** et le **reste** de la **division entière** ou **division euclidienne** de $b$ par $a$.<br>
On appelle $b$ le **dividende** et $a$ le **diviseur**.

#### Démonstration:
Considérons l'ensemble des entiers de la forme $b - a \cdot k$, où $k \in \Z$. Cet ensemble contient des nombres non négatifs, par exemple $b + |a| \cdot 1$. Soit $r = b - a \cdot q$ le plus petit parmi ces nombres, donc $r \geq 0$ et
$$r - |a| = r - a \cdot sign(a) = b-a \cdot (q + sign(a)) \lt 0$$
donc $b = a \cdot q + r$ et $0 \leq r \lt |a|$.

Soient $q'$ et $r'$ deux autres entiers vérifiant les hypothèses ci-dessus, donc $b = a \cdot q+r = a \cdot q'+r'$. Par soustraction on a $0 = a \cdot (q-q') + (r-r')$, donc
$$a \cdot (q-q') = (r-r') \text{ et } |a| \cdot |q-q'| = |r-r'| < |a|$$

Diviser $b$ par $a$ signifie donc écrire $b = a \cdot q+r$:
* Diviser $7$ par $5$:   on a $ 7 = 5 \cdot 1+2$
* Diviser $7$ par $-5$:  on a $ 7 = (-5) \cdot (-1)+2$
* Diviser $-7$ par $5$:  on a $-7 = 5 \cdot (-2)+3$
* Diviser $-7$ par $-5$: on a $-7 = (-5) \cdot (+2)+3$

### Divisibilité
Soient $a \neq b$ et $b$ deux entiers. On dit que $a$ **divise** $b$ s'il existe $q \in \Z$ tel que $b = a \cdot q$. Dans ce cas $a$ est dit **diviseur** de $b$, et $b$ est **multiple** de $a$. Notation: $a \mid b$

Remarque:
* Nous avons $\forall a \in \Z, a \neq 0$ alors $a \mid 0$ et $\forall b \in \Z, 1 \mid b$
* Si $b \neq 0$ l'égalité $|b| = |a| \cdot |q|$ implique que $|a| \leq |b|$, donc les diiviseurs de $b$ sont en nombre infini

Soit $n = c_m \cdots c_1c_0$ un entier positif dont les ci sont les chiffres de $n$ en base $10$. On a
* $n$ est divisible par $2$ si et seulement si son dernier chiffre est $0$, $2$, $4$, $6$ ou $8$.
* $n$ est divisible par $3$ si et seulement si la somme de ses chiffres est divisible par $3$.
* $n$ est divisible par $4$ si et seulement si le nombre formé par ses deux derniers chiffres est divisible par $4$.
* $n$ est divisible par $5$ si et seulement si son dernier chiffre est 0 ou 5.
* $n$ est divisible par $7$ si et seulement si $(c_m \cdots c_1) − 2c_0$ est divisible par $7$.
* $n$ est divisible par $9$ si et seulement si la somme de ses chiffres est divisible par $9$.
* Soit $A$ la somme des chiffres $c_i$ avec $i$ impair et $B$ la somme des chiffres $c_i$ avec $i$ pair. Alors $n$ est divisible par $11$ si et seulement si $A-B$ est divisible par $11$.
* $n$ est divisible par $13$ si et seulement si $(c_m \cdots c_1) + 4c_0$ l’est.

#### Divisibilité par $13$
Soit $n = c_m \cdots c_1c_0$ un entier positif, $n$ est divisible par $13$ si et seulement si $(c_m \cdots c_1) + 4c_0$ l'est.

$$n=2431,\,(c_m \cdots c_1) + 4c_0 = 243 + 4 \cdot 1 = 247$$
$$n=247,\,(c_m \cdots c_1) + 4c_0 = 24 + 4 \cdot 7 = 52$$
$$n=52,\,(c_m \cdots c_1) + 4c_0 = 5 + 4 \cdot 2 = 13$$

### PGCD et PPCM
Soient $a_1, a_2,\cdots$ des entiers qui ne sont pas tous nuls.
* Un entier $d$ est un **comun diviseur** des $a_i$ si $\forall i, d \mid a_i$.<br>
  L'ensemble des communs diviseurs de $a_i$ est noté par $\mathbb{D}(a_1, a_2, \cdots)$
* Le **plus grand** des **communs diviseurs** des $a_i$ est noté $\text{PGCD}(a_1, a_2, \cdots)$
* Deux entiers $a$ et $b$ sont dits **premiers entre eux** si $\text{PGCD}(a,b) = 1$
* Si aucun parmi $a_1, a_2, \cdots$ est nul, on note par $M(a_1, a_2, \cdots)$ l’ensemble des **communs multiples** des $a_i$, et par $\text{PPCM}(a_1, a_2, \cdots)$ son **plus petit** élément positif.

* $\mathbb{D}(33) = \{\pm1, \pm3, \pm11, \pm33\}$
* $\mathbb{D}(15) = \{\pm1, \pm3, \pm5, \pm15\}$
* $\mathbb{D}(15, 33) = \{\pm1, \pm3\} = \mathbb{D}(15) \cap \mathbb{D}(33)$
* $\text{PGCD}(15, 33) = \text{PGCD}(33, 15) = 3$
* $M(15, 33) = \{\pm165, \pm330, \cdots\} \text{ et PPCM}(15, 33) = \text{PPCM}(33, 15) = 165$

### Algorithme d'Euclide
On veut une méthode algorithmique pour calculer $\text{PGCD}(a, b)$ pour $a, b \in \Z$.
L’Algorithme d’Euclide accomplit cette tâche en utilisant des divisions euclidiennes successives: le $\text{PGCD}(a, b)$ sera le dernier reste non nul.

Soient $a$ et $b$ deux entiers positifs tels que $a \geq b$.
Le processus suivant calcule le $\text{PGCD}(a, b)$.

Soit $r_0 = b$ et $r_1 = a$<br>

* Si $r_1 \gt 0$, on calcule le reste $r_2$ de la division de $r_0$ par $r_1$:
  $$r_0 = r_1 \cdot q_1+r_2$$
* Si $r_2 \gt 0$, on calcule le reste $r_3$ de la division de $r_0$ par $r_2$:
  $$r_0 = r_2 \cdot q_2+r_3$$
* Si $r_2 \gt 0$, on calcule le reste $r_4$ de la division de $r_0$ par $r_3$:
  $$r_0 = r_3 \cdot q_3+r_4$$
  $$\dots$$
* Si $r_t \gt 0$, on calcule le reste $r_{t+1}$ de la division de $r_{t-1}$ par $r_t$:
  $$r_{t-1} = r_t \cdot q_t+r_{t+1}$$
* Si $r_{t+1} = 0$, on a terminé et $\text{PGCD}(a, b) = r_t$
