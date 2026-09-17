# R1.06 Mathématiques Discrètes
- Tests:
  - Test 1: 14/10 (Chapitre 1-3)
  - Test 2: 10/11 (Chapitre 4-7)
  - Test 3: 18/12
- TD/TP:
  - ┌ Test 1 TD1
  - │ TD2
  - └ TD3
  - ┌ Test 2 TD4
  - │ TD5
  - │ TD6 révisions
  - └ TP1
  - ┌ Test 3 TD7
  - │ TD8
  - │ TD9
  - │ TP2
  - └ TP3 révisions
- Tests contrôle continu:
  1. TCC (A) 22/09
  2. TCC (A) 29/09
  3. TCC (A) 6/10
  4. TCC (A) 20/10
  5. TCC (A) 3/11
  6. TCC (B) 23/11
  7. TCC (B) 1/12
  8. TCC (B) 7/12

## Mathématiques discrètes
Les **mathématiques discrètes**, parfois appelées *mathématiques finies*, sont l'atude des structures mathématiques fondamentalement **discrètes**, par opposition aux structures continues

### Ensembles
#### Définition
Un **ensemble** est une collection d'objets deux à deux distincts appelés **éléments**. On peut définir un ensemble de deux manières:
- en *extension*: on donne la liste exhaustive des éléments qui y figurent ;
- en *compréhension*: on donne les propriétés que doivent posséder les éléments de l'ensemble ;

Exemples:
- $\mathbb{N} = \{0,1,2,3,...\}$
- $\mathbb{N}^* = \{1,2,3,...\}$
- $\mathbb{Z} = \{...,-3,-2,-1,0,1,2,3,...\}$
- $\mathbb{Q} = \{\frac{p}{q}:p \in \mathbb{Z} \text{et} q \in \mathbb{Z} \text{avec} q\neq 0\}$
- $\mathbb{R}$
- $\mathbb{C}$
- Le type `bool`: $\{\text{Vrai}, \text{Faux}\}$

#### Règles
On admettra l'existence d'ensembles. La notion d'ensemble satisfait un certain nombre de règles de foncitonnement:
- **Relation d'appartenance**. Il faut pouvoir dire si un objet est dans l'ensemble: $x \in A$ l'élément $x$ est dans l'ensemble $A$
- **Objets distincts**. On peut distinguer deux éléments entre eux et un ensemble dne peut pas contnir deux fois le même objet.
- **Ensemble vide**. Il existe un ensemble qui ne contient auxun élément, c'est l'ensemble vide et on le note $\emptyset$ ou $\{\}$
- **Paradoxe de Russell**. Un ensemble peut être élément d'un autre ensemble mais pas de lui-même.

#### Sous-ensembles
L'ensemble $A$ est un **sous-ensemble** de B si tous les éléments de $A$ sont des éléments de $B$ ($x \in A \Rightarrow x \in B$). On dit aussi que $A£ est inclus dans $B$, on le note $A \subseteq B$.

Pour tout ensemble $A$ on a $\emptyset \subseteq$ et $A \subseteq A$

Ensemble égaux:<br/>
Deux ensembles sont **égaux** si et seulement si ils ont les même éléments, autrement dit si $A \subseteq B$ et $B \subseteq A$.

Ensemble de sparties:<br/>
Soit $A$ un ensemble, l'ensemble des parties de $A$, noté $P(A)$, est l'ensemble des sous-ensembles de $A$.

Si $A = \{1,2,3\}$ alors<br/>
$P(A)=\{\emptyset,\{1\},\{2\},\{3\},\{1,2\},\{1,3\},\{2,3\},\{1,2,3\}\}$

On a $P(\emptyset)=\{\emptyset\}$ et $P(P(\emptyset))=\{\emptyset,\emptyset\}$

#### Opérations sur les ensembles
L'**union** des ensembles $A$ et $B$ est l'ensemble des éléments qui sont éléments de $A$ ou de $B$. On le note $A\cup B$<br/>
L'union admet certaines propriétés:
- Idempotence: $A \cup A = A$
- Commutativité: $A \cup B = B \cup A$
- Associativité: $A \cup (B \cup C) = (A \cup B) \cup C$
- ???

L'**intersection** des ensembles $A$ et $B$ est l'ensemble des éléments communs à $A$ et à $B$. On le note $A \cap B$. On dit que deux ensembles sont disjoints (ou incompatibles) si $A \cap B = \emptyset$.<br/>
L'intersection admet certaines propriétés:
- Impotence: $A \cap A = A$
- Commutativité: $A \cap B = B \cap A$
- Associativité: $A \cap (B \cap C) = (A \cap B) \cap C$
- Elément neutre: si l'on se place dans un ensemble $\Omega$ appelé univers, ???

La **ditributivité**<br/>
Propriétés de distributivité:
- $\cup$ sur $\cap$: $A \cup (B \cap C) = (A \cup B) \cap (A \cup C)$
- $\cap$ sur $\cup$: $A \cap (B \cup C) = (A \cap B) \cup (A \cap C)$

La **différence** de l'ensemble $A$ par l'ensemble $B$ est l'ensemble des éléments qui sont dans $A$ mais pas dans $B$, on le note $A \backslash B$

La différence symétrique entre les ensembles $A$ et $B$ est l'ensemble des éléments qui sont dans $A$ ou $B$ mais pas dans les deux, on le note $A\Delta B = (A \cup B) \backslash (A \cap B)$

On se fixe un ensemble $\Omega$ appelé univers. Pour $A \subseteq \Omega$, on définit le **complémentaire** de A par rapport à $\Omega$ quine sont pas éléments de A, on le note $\overline{A} = \Omega \backslash A$ lorsqu'il n'y a pas d'ambiguïtés.
La complémentation admet certaines propriétés:
- Involution: $\overline{\overline{A}} = A$
- Loi de De Morgan: $\overline{A \cap B}- = \overline{A} \cup \overline{B}$ et $\overline{A \cup B}- = \overline{A} \cap \overline{B}$

Le **produit cartésien** des ensembles $A$ et $B$ (dans cet ordre) est l'ensemble des couples $(a,b)$ où $a \in A$ et $b \in B$, on le note $A \times B$

Le **produit cartésien** des ensembles $A_1,A_2,...A_k$ (dans cet ordre) est l'ensemble des $k$-uplets $(a_1,...,a_k)$ où $a_i \in $???

### Logique: Opérateurs booléens