# R1.07: Mathématiques fondamentales
### Notes
$$\Delta = b^2-4ac$$
$$\text{Si }\Delta > 0\text{, alors:}$$
$$x_1=\dfrac{-b-\sqrt{\Delta}}{2a}\;\;\;x_2=\dfrac{-b+\sqrt{\Delta}}{2a}$$
$$\text{Si }\Delta = 0\text{, alors:}$$
$$x=\dfrac{-b}{2a}$$
$$\text{Dans tous les cas:}$$
$$x_S=\dfrac{-b}{2a}\;\;\;y_S=\dfrac{-\Delta}{4a}$$
---
$$f(x)=\sum_{i=0}^{d} a_ix^i$$

## Chapitre 0: Remise à niveau
Exercice 6.3:
$$\dfrac{1}{2}x+\dfrac{3}{4}=\dfrac{x+1}{\dfrac{1}{2}+\dfrac{1}{3}}$$
$$\dfrac{5}{12}x+\dfrac{5}{8}=x+1$$
$$\dfrac{5}{12}x+\dfrac{5}{8}-x=1$$
$$\dfrac{5}{12}x-x=\dfrac{3}{8}$$
$$x\bigg(\dfrac{5}{12}-1\bigg)=\dfrac{3}{8}$$
$$x\bigg(\dfrac{5}{12}-\dfrac{12}{12}\bigg)=\dfrac{3}{8}$$
$$-\dfrac{7}{12}x=\dfrac{3}{8}$$
$$x=-\dfrac{12}{7}\cdot\dfrac{3}{8}$$
$$x=-\dfrac{36}{56}$$
$$x=-\dfrac{9}{14}$$

Exercice 8:
$$x+10=3(x-16)$$
$$x+10=3x-48$$
$$3x-48-x=10$$
$$3x-x=58$$
$$2x=58$$
$$x=29$$

Exercice 9.1:
$$a=\dfrac{y_2-y_1}{x_2-x_1}=\dfrac{5-3}{1-0} = 2$$
$$b=y_1-ax_1=3-2\cdot0=3$$
$$f(x) = 2x + 3$$

Exercice 11.1:
$$y=3-x\;|\;2x-4(3-x)=-6$$
$$2x-12-4x=-6$$
$$-2x-12=-6$$
$$-2x=6$$
$$x=-3$$

Exercice 11.2:
$$\dfrac{1}{2}x+\dfrac{1}{2}y-y=0$$
$$\dfrac{1}{2}x-\dfrac{1}{2}y=0$$
$$x-y=0$$
$$x=y$$
$$\dfrac{3}{4}x+\dfrac{1}{3}y=\dfrac{13}{12}$$
$$\dfrac{3}{4}x+\dfrac{1}{3}x=\dfrac{13}{12}$$
$$\dfrac{9}{12}x+\dfrac{4}{12}x=\dfrac{13}{12}$$
$$\dfrac{13}{12}x=\dfrac{13}{12}$$
$$x=1\;\;\;y=1$$

Exercice 13.1:
$$a=1\;\;\;b=-2\;\;\;c=-3$$
$$\Delta=b^2-4ac=(-2)^2-4\cdot1\cdot(-3)=16$$
$$x_1=\dfrac{-b-\sqrt{\Delta}}{2a}=\dfrac{-(-2)-\sqrt{16}}{2\cdot1}=-1$$
$$x_2=\dfrac{-b+\sqrt{\Delta}}{2a}=\dfrac{-(-2)+\sqrt{16}}{2\cdot1}=3$$

Exercice 13.2:
$$3x^2-1=6x-4$$
$$3x^2-6x+3=0$$
$$a=3\;\;\;b=-6\;\;\;c=3$$
$$\Delta=b^2-4ac=(-6)^2-4\cdot 3\cdot 3=0$$
$$x=\dfrac{-b}{2a}=\dfrac{-(-6)}{2\cdot 3}=1$$

Exercice 13.3:
$$2x^2-3x+2\leq 0$$
$$a=2\;\;\;b=-3\;\;\;c=3$$
$$\Delta=b^2-4ac=(-3)^2-4\cdot 2\cdot 3=-15$$
$$\cancel{x}$$

Exercice 13.4:
$$x^2+x+1 \leq 2x^2-2x+1$$
$$-x^2+3x \leq 0$$
$$a=-1\;\;\;b=3\;\;\;c=0$$
$$\Delta=b^2-4ac=3^2-4\cdot (-1)\cdot 0=9$$
$$x_1=\dfrac{-b-\sqrt{\Delta}}{2a}=\dfrac{-3-\sqrt{9}}{2\cdot (-1)}=3$$
$$x_2=\dfrac{-b-\sqrt{\Delta}}{2a}=\dfrac{-3+\sqrt{9}}{2\cdot (-1)}=0$$

Exercice 14:
$$\left\{\begin{array}{l}
  2x+2y=8 \\
  xy=3
\end{array} \right.$$
$$x+y=4$$
$$x^2+xy=4x$$
$$x^2+3=4x$$
$$x^2-4x+3=0$$
$$a=1\;\;\;b=-4\;\;\;c=3$$
$$\Delta=b^2-4ac=(-4)^2-4\cdot 1\cdot 3=4$$
$$x_1=\dfrac{-b-\sqrt{\Delta}}{2a}=\dfrac{-(-4)-\sqrt{4}}{2\cdot (1)}=1$$
$$x_1=\dfrac{-b-\sqrt{\Delta}}{2a}=\dfrac{-(-4)+\sqrt{4}}{2\cdot (1)}=3$$
$$y_1=\dfrac{3}{x_1}=\dfrac{3}{1}=3$$
$$y_1=\dfrac{3}{x_2}=\dfrac{3}{3}=1$$
$$\text{Un seul rectangle possible: }3 \text{ par } 1$$

## Chapitre 1: Systèmes linéaires
Soient $x_1, \cdots, x_p$ des réels, On appelle *combinaison linéaire* de $x_1, \cdots, x_p$ à coefficients dans $\mathbb{R}$, une expression de la forme
$$a_1x_1 + a_2x_2 + \cdots + a_px_p$$
où $a_1, a_2, \cdots, a_p$ sont des *coefficients* réels.

Exercice 1.a:
$$\left\{\begin{array}{l}
  2x_1 + 3x_2 = 6 \qquad L_1 \times (-3) \\
  -3x_1 - 6x_2 = -4 \qquad L_2 \times (2)
\end{array} \right.$$
$$\left\{\begin{array}{l}
  -6x_1 - 9x_2 = -18 \\
  -6x_1 - 14x_2 = -8
\end{array} \right.$$
$$\left\{\begin{array}{l}
  -6x_1 - 9x_2 = -18 \\
  3x_2 = -10 \qquad (L_1 - L_2)
\end{array} \right.$$

Exercice 1.b:
$$\left\{\begin{array}{l}
  2x_1 + 3x_2 = 6 \qquad L_1 \times (-3) \\
  -3x_1 - 6x_2 = -4 \qquad L_2 \times (2)
\end{array} \right.$$