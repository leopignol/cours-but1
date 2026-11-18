# TD1

```
R1.1 = SELECTION(Avion/capacite > 350)

R2.1 = SELECTION(Avion/localisation = 'NICE')
R2.2 = PROJECTION(R2.1/numAv, nomAv)

R3.1 = PROJECTION(Vol/numPil, villeDep)

R4.1 = SELECTION(Pilote/adresse = 'PARIS')
R4.2 = SELECTION(R4.1/salaire ≥ 5000)
R4.3 = PROJECTION(R4.2/nomPil)

R5.1 = SELECTION(Avion/localisation = 'NICE')
R5.2 = SELECTION(Avion/capacite < 350)
R5.3 = UNION(R5.1, R.2)
R5.4 = PROJECTION(R5.3/numAv, nomAv)

R6.1 = SELECTION(Vol/villeDep = 'NICE')
R6.2 = SELECTION(Vol/villeArr = 'PARIS')
R6.3 = SELECTION(Vol/heureDep ≥ 18:00)
R6.4 = INTERSECTION(R6.1, R6.2)
R6.5 = INTERSECTION(R6.3, R6.4)

R7.1 = PROJECTION(Pilote/numPil)
R7.2 = PROJECTION(Vol/numPil)
R7.3 = DIFFERENCE(R7.1, R7.2)

R8.1 = SELECTION(Vol/numPil = 100)
R8.2 = SELECTION(Vol/numPil = 204)
R8.3 = UNION(R8.1, R8.2)
R8.4 = PROJECTION(R8.3/numVol, villeDep)

R9.1 = SELECTION (Vol/villeDep = 'NICE')
R9.2 = SELECTION (Pilote/adresse = 'PARIS')
R9.3 = JOINTURE (R9.1, R9.2/numPil = numPil)
R9.4 = PROJECTION (R9.3/numVol)

R10.1 = SELECTION( Avion/localisation <> 'NICE')
R10.2 = PROJECTION(R10.1/numAv)
R10.3 = JOINTURE(R10.2, Vol/numAv = numAv)
R10.4 = PROJECTION(R10.3/numVol, villeDep, villeArr)

R11.1 = SELECTION(Vol/villeDep = 'NICE')
R11.2 = SELECTION(Avion/capacite > 300)
R11.3 = JOINTURE(R11.1, R11.2/numAv = numAv)
R11.4 = PROJECTION(R11.3/numPil)
R11.5 = JOINTURE(R11.4, Pilote/numPilote = numPilote)
R11.6 = PROJECTION(R11.5/nomPil, adresse)

R12.1 = SELECTION(Pilote/adresse = 'PARIS') 
R12.2 = SELECTION(Vol/villeDep = 'NICE')
R12.3 = SELECTION(Avion/nomAv = 'A320')
R12.4 = JOINTURE(R12.2, R12.3/numAv = numAv)
R12.5 = JOINTURE(R12.1, R12.4/numPil = numPil)
R12.6 = PROJECTION(R12.5/nomPil)

R13.1 = SELECTION(Vol/villeDep = 'NICE')
R13.2 = SELECTION(Vol/villeArr = 'NICE')
R13.3 = UNION(R13.1, R13.2)
R13.4 = JOINTURE(R13.3, Pilote/numPil = numPil)
R13.5 = SELECTION(R13.4/adresse = 'NICE')
R13.6 = JOINTURE(R13.5, Avion/numAv = numAv)
R13.7 = SELECTION(R13.6/localisation = 'PARIS')
R13.8 = PROJECTION(R13.7/numVol) 

R14.1 = SELECTION(Pilote/nomPil <> 'DURAND')
R14.2 = JOINTURE(R14.1, Vol/numPil = numPil)
R14.3 = PROJECTION(R14.2/nomPil)

R15.1 = SELECTION(Vol/villeDep = 'PARIS')
R15.2 = PROJECTION(R15.1/villeArr)
R15.3 = JOINTURE(R15.2, Vol/villeArr = villeDep)
R15.4 = PROJECTION(R15.3/heureDep)

R16.1 = SELECTION(Pilote/nomPil = 'MARTIN')
R16.2 = PROJECTION(R16.1/adresse)
R16.3 = SELECTION(Pilote/nomPil <> 'MARTIN')
R16.4 = JOINTURE(R16.2, R16.3/adresse = adresse)
R16.5 = PROJECTION(R16.4/nomPil, numPil)
```