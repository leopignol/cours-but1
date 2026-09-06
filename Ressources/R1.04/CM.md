# R1.04

`2026-09-02`

## CM 1-0 Introduction aux systèmes d'exploitation
- Utilisation des systèmes info
- Généralités d'OS
- Shell
- Gestion de processus
- Installation et config. d'un système info

---

### Définitions
- Représentation: rendre sensible un concept ou un objet absent "au moyen d'une image, d'une figure ou d'un signe".
- Système: ensemble d'éléments interagissant entre eux selon des règles
- Modélisation:
  - Représentation abstraite d'un système qui facilite son étude et permet de le simuler
  - Vue subjective, décomposée mais pertinente de la réalité
  - Représentation d'un système dans un autre monde que celui du système
- Paradigme: représentation du monde selon un modèle cohérent
- Prédicat: ce qui est affirmé à propos d'un autre terme
- Logique: représentation virtuelle, à opposer à une description physique
- Logique (ou code source):
  - Technique: non spécifique, utilitaire (communication, persistance, etc.)
  - Métier: spécifique au "métier" ou domaine du système
- Idempotence: opération ayant le même effet qu'on l'applique une ou plusieurs fois
- Sémantique: traite de l'interprétation et de la signification des systèmes
- Discrétisation: représentation finie discontinue d'un ensemble continu
- Atomique: opérations qui s'exécutent enti_rement sans pouvoir être interrompues avant la fin de leur déroulement
- Transaction: suite d'opération vue et manipulée de manière atomique
- Service composant logiciel permettant la communication et l'échange de données entre applications et systèmes hétérogènes
- Protocole: conventions qui facilitent une communication sans faire directement partie
du sujet de la communication elle-même
- Application: programme ou ensemble logiciel réalisant une tâche élémentaire ou un ensemble de tâches d'un même domaine ou formant un tout
- Open source: possibilités de libre redistribution, daccès au code source et de création de travaux dérivés
- Logiciel libre: utilisation étude modification et duplication par autrui en vue de diffusion permises, techniquement et légalement
- Creative commons (CC): licenses permettant de libérer les oeuvres des droits de propriété intellectuelle standard de leur pays, jugés trop restrictifs

## CM 1-1 Généralités
### Histoire

- Al-Khwârizmî
  - Algorithme
  - Algèbre
- Charles Babbage
  - .
- Ada Lovelace
  - Programmation
- George Boole
  - .
- Alan Turing
  - .
- Claude Shannon
  - Théorie de l'information
- John von Neumann
  - Architecture von Neumann
  - Singularité technologique
- Edsger Dijkstra
  - Algol
  - THE OS
  - Prix Dijkstra
- Grace Hopper
  - COBOL
  - Bugs
- Donald Knuth
  - The Art of Computer Programming
  - TeX
- Margaret Hamilton
  - Apollo
- Ken Thompson
  - Unix
  - B, C, Go (Google)
- Dennis Ritchie
  - Unix
  - C
- Brian Kernighan
  - C
- Ray Tomlinson
  - ARPANET
  - Adresse e-mail
- Vint Cerf
  - Internet
  - TCP-IP
- Radia Perlman
  - Internet
- Edgar Frank Codd
  - Base de données
  - OLAP
  - 12 règles de Codd
- Jim Gray
  - Base de données
  - Transactions informatiques
- Ronald Rivest
  - Cryptologie
  - RSA
  - MD5
- Bill Gates
  - Microsoft
  - Windows
  - BASIC
- Steve Jobs
  - Apple
  - Macintosh
- Steve Wozniak
  - Apple
- Kevin Mitnick
  - Piratage informatique
- Richard Stallman
  - GNU
  - Emacs
  - FSF
- Andrew Tanenbaum
  - MINIX
- Linus Torvalds
  - Linux
  - Git
- Barbara Liskov
  - POO
- Bertrand Meyer
  - POO
  - Eifel
- Bjarne Stroustrup
  - C++
- James Gosling
  - Java
- Tim Berners-Lee
  - WWW
  - HTML
  - W3C
- Guido van Rossum
  - Python
- Rasmus Lerdorf
  - PHP
-  Brendan Eich
  - JavaScript
- Bram Moolenaar
  - Vim
- Fabrice Bellard
  - FFmpeg
  - QEMU
- Larry Page
  - Google
  - Alphabet
- Sergey Brin
  - Google
  - Alphabet
  - Google X Lab
- Aaron Swartz
  - RSS
  - Creative Commons
- Julian Assange
  - WikiLeaks
- Edward Snowden
  - .

## CM1-2 IA
- Systèmes algorithmiques d'aide à la décision (SAAD)
- Systèmes résultant d'apprentissage stochastique (SRAS)

`2026-09-03`

- Méfaits:
  - Réduction de l'engagement cognitif / connectivité neuronale
  - Déchargement cognitif
  - Réduit le sentiment de propriété
  - Diminution de la pensée critique
  - On ne délèque pas à l'IA une compétence qu'on ne maîtrise pas

- Intelligence
  - Fluidité != intelligence
  - Effet ELIZA: considérer un comportement comme humain
  - La formation des intelligences est toujours artificielle, conditionnée par un milieu, notamment technique
  - Attachement possible, et possiblement sain, à une "IA"
  - "Là où croît le danger, là aussi croît ce qui sauve"

La mémoire n'est pas une capacité innée, la pensée humaine pas que mentale: elle présume utilisation d'outils

Évolution?
  - Un outil sert à renforcer les choses qu'on fait sans y penser
  - Auto-préservation instrumentale: contrôle <em>a posteriori</em>
  - Techniques interdites ou abandonnées pour des raisons éthiques, sanitaires, environnementales ou autres:
    - Amiante, bisphénol A dans les plastiques alimentaires, mines antipersonnel, plomb en peinture, bombes nucléaires pour les travaux, manipulation génétique d'embryons humains, etc.

Involution?
  - Ne pas utiliser l'IA comme une prothèse mais comme une orthèse cognitive

Littératie: capacité de repérer, classer, comprendre, générer et évaluer de l'information, à partir de l'IA de d'internet

---
`mmartin.nevot@gmail.com`