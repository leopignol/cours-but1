# TD2: Logique
## Exerice 1
1. $\Big[ (N \wedge G) \Rightarrow R \Big] \Leftrightarrow \Big[ \neg(N \wedge G) \vee R \Big] \Leftrightarrow \Big[ (\neg N \vee \neg G) \vee R \Big]$
2. $S \Leftrightarrow \neg R$
3. $R \Rightarrow (C \wedge V)$

## Exercice 2
$$M=\text{"Marc va au concert"}$$
$$L=\text{"Léa  va au concert"}$$
$$E=\text{"Emma va au concert"}$$
1. $(M \wedge L) \Rightarrow E$
2. $L \Rightarrow M$
3. $L \vee E$

## Exercice 3
1. $a \le -2 \text{ ou } a \geq 3 \Leftrightarrow \neg (a \leq -2 \vee a \geq 3) \Leftrightarrow a > -2 \wedge a < 3$

## Exercice 4
$$\boxed{\neg (\neg p \vee \neg (q \Rightarrow (p \wedge r) \vee (r \Rightarrow p)))}$$
$$\neg (\boxed{\neg V} \vee \neg (F \Rightarrow (V \wedge V) \vee (V \Rightarrow V)))$$
$$\neg (F \vee \neg (F \Rightarrow \boxed{(V \wedge V)} \vee (V \Rightarrow V)))$$
$$\neg (F \vee \neg (F \Rightarrow V \vee \boxed{(V \Rightarrow V)}))$$
$$\neg (F \vee \neg (F \Rightarrow \boxed{V \vee V}))$$
$$\neg (F \vee \neg \boxed{(F \Rightarrow V)})$$
$$\neg (F \vee \boxed{\neg V})$$
$$\neg \boxed{(F \vee F)}$$
$$\boxed{\neg F}$$
$$\boxed{V}$$

## Exercice 5
a. $(p \veebar q) \Leftrightarrow (p \vee q) \wedge \neg (p \wedge q)$

## Exercice 6
$p$|$q$|$\neg p$|$\neg q$|$\neg p \wedge \neg q$|$(p \vee q)$|$\neg (p \vee q)$
:-:|:-:|:------:|:------:|:--------------------:|:----------:|:---------------:
$V$|$V$|$F$|$F$|$F$|V|$F$
$V$|$F$|$F$|$V$|$F$|$V$|$F$
$F$|$V$|$V$|$F$|$F$|$V$|$F$
$F$|$F$|$V$|$V$|$V$|$F$|$V$

$p$|$q$|$r$|$p \wedge q$|$(p \wedge q) \vee r$|$p \vee r$|$q \vee r$|$(p \vee r) \wedge (q \vee r)$
:-:|:-:|:-:|:----------:|:-------------------:|:--------:|:--------:|:----------------------------:
$V$|$V$|$V$|$V$|$V$|$V$|$V$|$V$|
$V$|$V$|$F$|$V$|$V$|$V$|$V$|$V$|
$V$|$F$|$V$|$F$|$V$|$V$|$V$|$V$|
$V$|$F$|$F$|$F$|$F$|$V$|$F$|$F$|
$F$|$V$|$V$|$F$|$V$|$V$|$V$|$V$|
$F$|$V$|$F$|$F$|$F$|$F$|$V$|$F$|
$F$|$F$|$V$|$F$|$V$|$V$|$V$|$V$|
$F$|$F$|$F$|$F$|$F$|$F$|$F$|$F$|

## Exercice 9
$$x_1 \Leftrightarrow x_2$$