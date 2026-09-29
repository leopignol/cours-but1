# R1.03
## Bit et octet
Préfixe|Symbole|Puissance|Multiplicateur
:------|:-----:|:-------:|-------------:
Yotta     |Y  |10²⁴ |1.000.000.000.000.000.000.000.000
Zetta     |Z  |10²¹ |    1.000.000.000.000.000.000.000
Exbi      |Ei |2⁶⁰  |        1.152.921.504.606.846.976
Exa       |E  |10¹⁸ |        1.000.000.000.000.000.000
Pebi      |Pi |2⁵⁰  |            1.125.899.906.842.624
Peta      |P  |10¹⁵ |            1.000.000.000.000.000
Tebi      |Ti |2⁴⁰  |                1.099.511.627.776
Tera      |T  |10¹² |                1.000.000.000.000
Gibi      |Gi |2³⁰  |                    1.073.741.824
Giga      |G  |10⁹  |                    1.000.000.000
Mebi      |Mi |2²⁰  |                        1.048.576
Mega      |M  |10⁶  |                        1.000.000
Kibi      |Ki |2¹⁰  |                            1.024
Kilo      |k  |10³  |                            1.000
Référence |   |10⁰  |                                1

## Techniques de compression
- Sans perte (exemple RLE):
  - `SSYYYYYYYYPHHHHHHHERRRRRRRRRR` $\Rightarrow$ `SS@9YP@7HE@10R`
  - $30 \Rightarrow 14 = 53\%$ de compression
- Avec perte (exemple JPEG)
  - Image décomposée en carrés de 8x8 pixels
  - Suppression des fréquences auxquelles l'oeil est peu sensible
  - Suppression des redondances spatiales
  - Compression RLE et Huffman
  - Paramètre: taux de compression (1% à 99%)

## Codage des vidéos
- Nombre d'image par seconde (24, 25, 50, 60, 120, etc.)
- Exemple de 15 minutes 1024x768 vraies
  - Sans compression: 22500 images de de 2.25Mio = 50.625Gio
  - M-JPEG: JPEG sur chaque image de la vidéo
  - Idem avec suppression de redondances temporelles:
    - MPEG-1, MPEG-2, MPEG-4

## Identification des objets
- Code barre
- Code QR
- RFID
  - Ondes radio
  - Visibilité

## Architecture von Neumann

---
## Réseaux
- IETF
  - Internet Engineering Task Force
  - **Organisme de normalisation** des protocoles de l'Internet
  - Elabore et promeut des **standards**
  - https://www.ietf.org
- RFC
  - Request For Comments
  - "Demande de commentaires"
  - **Documents officiels** numérotés
  - Spécifications techniques
  - https://tools.ietf.org/rfc/index

