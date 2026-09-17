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
  - Auto-préservation instrumentale: contrôle *a posteriori*
  - Techniques interdites ou abandonnées pour des raisons éthiques, sanitaires, environnementales ou autres:
    - Amiante, bisphénol A dans les plastiques alimentaires, mines antipersonnel, plomb en peinture, bombes nucléaires pour les travaux, manipulation génétique d'embryons humains, etc.

Involution?
  - Ne pas utiliser l'IA comme une prothèse mais comme une orthèse cognitive

Littératie: capacité de repérer, classer, comprendre, générer et évaluer de l'information, à partir de l'IA de d'internet

## CM2 Introduction
`2026-09-08`

```
Système d'information
Système informatique
Ordinateurs

        [      Couche 8: Métier      ]
       [ Couche 7: Design fonctionnel ]
      [ Couche 6: Architecture système ]
     [        Couche 5: Ergonomie       ]
    [  Couche 4: Architecture logicielle ]
   [        Couche 3: Algorithmique       ]
  [            Couche 2: Système           ]
 [         Couche 1: Microprogramme         ]
[             Couche 0: Matériel             ]

```

Architecture:
- Couches Hautes
  - Couche des applications
  - Couche distribution
- Couche système/réseau
  - Service additionnels
  - Noyau
- Couches basses
  - Couche du microcode et du langage machine
  - Couche du matériel

Programme : séquence d’instructions exécutable par un ordinateur
Processus : programme en cours d'exécution (« chargé » en mémoire vive)
Logiciel : un ou plusieurs programmes avec données et documentation
Système d’exploitation : ensemble de programmes et de logiciels (systèmes)
contrôlant le matériel informatique et orchestrant les applications
Application (logiciel applicatif) : logiciel non-système
Système de fichiers : mécanisme de stockage / d’accession des données sur "disque" (disque dur, clef USB, DVD-ROM, etc.)

Ressoures informatiques:
- Composant de système interne:
- Matérielle
  - Processeur
  - Mémoire vive/virtuelle
  - Disques durs
  - Périphérique externe
  - Bande passante réseau
- Logicielle

### Shell
- `bash` (bourne again `shell`): `shell` original (`sh`) avec des idées de `ksh` et `csh`
- `tcsh` (C `shell`): syntaxe inspirée du C (initialement `csh`)
- `ksh` (Korn `shell`): développé par David Korn
- `zsh` (Z `shell`): reprend le meilleur de `bash`, `ksh` et `tcsh`
- `fish` (friendly interactive `shell`): utilisation interactive
- `yash` (yet another `shell`): `POSIX` + utilisation interactive

CMD online: https://cocalc.com/<br/>
CMD windows: https://mobaxterm.mobatek.net/download-home-edition.html
Coder ensemble en ligne: https://codeshare.io/

### Environnement hostile
Architecture ou OS non choisi<br/>
Editeurs de code source imposé

### Commandes
Code|Description|Exemple
:--|:---------:|:-----
`echo`|Afficher une lighe de texte|`echo Salut ça va ?`
`ls`|Lister les fichiers d'un répertoire|`ls`, `ls -l`, `ls -a`, `ls-al`
`cd`|Chager de répertoir courant|`cd dir`, `cd`, `cd ~`, `cd ..`
`xterm`|Lancer un terminal|`xterm`
`clear`|Effacer l'écran d'un terminal|`clear`
`wc`|Compter les caractères / mots / lignes|`wc -l file`
`sort`|Trier des fichiers|`sort -n nb` (tri numérique)
`<, >, >>, 2>, 2>>, &>, &>>`|Redirections d'entrées, de sorties, de sorties d'erreur et des deux sorties|`ls > file`, `sort < file1 >> file2`
`|`|Canal de communication unidirectionnel entre processus|`ls -l | grep key | less`
`;`|Lancement séquentiel de commandes|`echo "Hello";echo "world"`
`alias`|Lister les alias ou en créer|`alias la='ls-A'`
---|Gestion des activités|---
`ps`|Afficher l'état des processus|`ps`, `ps -e`, `ps -Af`, `ps auxfw`
`bg`|Placer un processus en arrière-plan|`bg %1`
`fg`|Placer un processus d'arrière-plan en premier plan|`fg %1`
`jobs`|Afficher le processus en arrière-plan|`jobs`
`&`|Lancer un programme en arrière-plan|`xterm &`
`kill`|Envoyer un signal à un processus|`kill -9 666`
`top`|Afficher les processus en continu|`top`
---|Données persistantes|---
`pwd`|Afficher le répertoire courant|`pwd`
`touch`|Créer un fichier vide ou modifier les dates d'un fichier|`touch file`
`cp`|Copier des fichiers|`cp file dir`
`mv`|Déplacer ou renommer des fichiers|`mv file1 file2`, `rm -i file`
`rm`|Supprimer un fichier|`rm file`, `rm -i file`
`mkdir`|Créer un répertoire|`mkdir dir`
`rmdir`|Supprimer un répertoire|`rmdir rep`
`cat`|Afficher et concaténer des fichiers|`cat file`, `cat file1 file2`
`head`|Afficher le début d'un fichier|`head -n 20 file` (20 lignes)
`tail`|Afficher la fin d'un fichier|`tail -n 20 file` (20 lignes)
`diff`|Comparer des fichiers/dossiers|`diff file1 file2`, `diff dir1 dir2`
`grep`|Rechercher dans des fichiers|`grep Salut file`
`find`|Rechercher selon des multiples|`find /usr/src -name ".c"`
`sed`|Editer du texte non interactivement|`sed 's/Mr/M./g' file.txt` (remplacement global)
`cut`|Afficher des colonnes ou champs|`cut -c 1-3 file` (3 caractères)
`.`|Répertoire courant|`find . -ls`
`..`|Répertoire parent|`cd ..`
`~`|Répertoire personnel|`cd ~`
---|Globing patterns|---
`'`, `"`, `\`|Echappement des caractères spéciaux|`ls 'a*'`, `ls "x-y"`, `echo -e "x\ty"`
```|Evaluation préalable de la commande|`chown \`id -u \` dir`
---|Gestion de la sécurité|---
`whoami`|Afficher nom / identifiant de l'utilisateur|`whoami`
`chmod`|Changer le sdroits d'accès|`chmod 644 file`
`umask`|Définir les droits par défaut|`umask 0022`
`id`|Afficher les attributs (UID, GID, etc.)|`id`
`finger`|Afficher les données d'un utilisateur|`finger user`
`groups`|Afficher les groupes d'in utilisateur|`groups` `groups user`
`sudo`|Exécuter comme `root`|`sudo apt-get update`


Chemin absolu: Invariant, commence par `/` ou `~`<br/>
Chemin relatif: Variable

Globing patterns (filtres)
- `?`: exactement un caractère quelconque
- `*`: n'importe quel nombre de caractères (y compris 0)
- `[ab...]`: un unique caractère au choix dans la Lister
- `[!ab...]`: un unique caractère au choix absent de la liste

### Données persistantes
- `var`: fichiers variables
  - `log`: journaux systèmes
  - `ldp`: files d'impression
  - `mail`: e-mails
- `bin` (binaries): commandes "externes"
- `sbin` (system binaries): commande d'admin
- `dev` (devices): périphériques
- `etc` (editable text configuration): fic. de conf.
- `home`: répertoires personnels des utilisateurs
- `root`: répertoire personnel de l'admin
- `mnt` (mount): systèmes de fichiers montés
- `usr` (unix system ressources): logiciels installés

### Regex
- Pas de standardisation
- Symboles communs
  - `.`: n'importe quel caractère
  - `\`: échapper (banaliser) un caractère
  - `[]`: un des caractères au choix parmi ceux entre crochets
  - `^`, `$`: début/fin (`^a`,`a$`)
  - Quantifieurs:
    - `?`: zéro ou une fois
    - `*`: zéro, une ou plusieurs fois
    - `+`: une ou plusieurs fois

### Permissions

Tout UNIX utilise un système de droits pour lire (r), écrire (w) ou exécuter (x)

Binaire `r` `w` `x`|Décimal|Droits
:-:|:-:|:-:
`0` `0` `0`|0|Aucun
`0` `0` `1`|1|Aucun
`0` `1` `0`|2|Aucun
`0` `1` `1`|3|Aucun
`1` `0` `0`|4|Aucun
`1` `0` `1`|5|Aucun
`1` `1` `0`|6|Aucun
`1` `1` `1`|7|Aucun

### Variable d'environnement shell
- `HOME`: chemin du répertoire personnel
- `PWD`: répertoire courant
- `PS1`: *prompt*
- `PATH`: liste des répertoires de recherche des commandes

### `.bash_profile`, `.bashrc`, `.bash_logout`
Exécuter au démarrage de session:
- `.bash_profile`: au démarrage d'une nouvelle session
- `.bashrc`: au démarrage d'un nouveau shell
- `.bash_logout`: à l'arrêt d'un `shell`

### Script `bash`
- Exécution:
  - Par défaut: `bash file`
  - Fichier exécutable: `./file` ou `~/file`
  - Script dans `PATH`: `file`
- Code de retour (également avec `exit`)
  - `0`: script a réussi
  - `1` à `255`: erreur
- Commence par: `#!/bin/bash`
- Commentaire: `#`

## CM3-1 Installation et ocnfiguration des OS
### Systèmes de fichiers
- `NFTS`
  - Structure: B-arbre
  - Permissions: `ACL`
  - Compression
  - Windows & Linux
- `ext4`
  - Structure liste chaînée
  - Permissions: `POSIX`
  - Pas de fragmentatoin
  - Linux

### Installation de paquets
`apt-get`
- Gestionnaire de paquets
- Outil à utiliser en ligne de commande
- Utilise des dépôts APT
- Mise à jour de la liste des paquets : `apt-get update`
- Installation : `apt-get install packet`
- Mise à jour OS : `apt-get dist-upgrade`
- Mise à jour des paquets installés : `apt-get upgrade`
- Désinstallation : `apt-get remove packet`
- Effacer les installeurs (pas les paquets) : `apt-get clean`

### Rendre Windows utilisable
- Chocolatey en gestionnaire de paquet
- WSL



---
`mmartin.nevot@gmail.com`
