# TD2

1. Oui, si ces formations ne sont pas faites le même jour
2. Oui puisque chaque pilote a un `numPil` différent et qu'il n'y a pas de restrictions de nombres
3. 
  * CI de relation
  * CI de référence
  * CI de domaine

```
R4.1 = PROJECTION(Avion/numAv, nomAv)
R4.2 = PROJECTION(Pilote/numPil)
R4.3 = DIVISION(R4.1, R4.2/numPil, numPil)
R4.4 = JOINTURE(R4.3, Avion/numAv = numAv)
R4.5 = PROJECTION(R4.4/numAv, nomAv)


R5.1 = PROJECTION(Avion/nomAv, numAv)
R5.2 = PROJECITON(Vol/villArr, numAv)
R5.3 = JOINTURE(R5.1, R5.2/numAv = numAv)
R5.4 = PROJECTION(R5.3/villeArr, nomAv)
R5.5 = PROJECTION(R5.3/nomAv)
R5.6 = DIVISION(R5.4, R5.5/nomAv, nomAv)
R5.7 = PROJECTION(R5.6/villeArr)


R6.1 = SELECTION(Pilote/nomPil = 'Dupont')
R6.2 = JOINTURE(Formation/R6.1, nomPil = nomPil)
R6.3 = PROJECTION(R6.2/nomAv)


R7.1 = PROJECTION(Formation/numPil, typeF)
R7.2 = PROJECTION(Stage/typeF)
R7.3 = DIVISION(R7.1, R7.2)
R7.4 = JOINTURE(R7.3/Pilote, numPil = numPil)
R7.5 = PROJECTION(R7.4/nomPil)


R8.1 = PROJECTION(Vol/villeDep, villeArr)
R8.2 = PROJECTION(Vol/villeDep)
R8.3 = DIVISION(R8.1, R8.2/villeDep, villeDep)


Pilote    [numPil: NUM,    nomPil: NOMPIL ]
Avion     [numAv:  NUM,    nomAv:  NOMAV  ]
Vol       [numVol: NUM,    numPil: NUM,   numAv:        NUM,          villeDep: VILLE, villeArr: VILLE, heureDep: HEURE, heureArr: HEURE]
Formation [numPil: NUM,    date:   DATE,  appreciatoin: APPRECIATION, typeF:    TYPE_F ]
Stage     [typeF:  TYPE_F, nomAv:  NOMAV, categorie:    CATEGORIE ]
```