# TD5
## Exercice 5
$$f:\Z \rightarrow \Z \\ x \rightarrow x+3$$
$$g:\R \rightarrow \R \\ x \rightarrow -x+5$$

1. 
$$f(x_1) = f(x_2) \Rightarrow x_1=x_2 \\
x_1+3 = x_2+3 \Rightarrow x_1 = x_2 \\
f \text{ est injective}$$

$$g(x_1) = g(x_2) \Rightarrow x_1=x_2 \\
-x_1+5 = -x_2+5 \Rightarrow x_1 = x_2 \\
g \text{ est injective}$$

$$\forall y \in \Z,\, \exists x \in \Z \mid f(x)=y\ ? \\
\text{Si} f(x)=y,\, x+y=y \text{ donc } x=y-3 \\
f(x)=f(y-3)=(y-3)+3=y \\
f \text{ est subjective}$$

$$\forall y \in \R,\, \exists x \in \R \mid G(x)=y\ ? \\
\text{Si} g(x)=y,\,-x+5=y,\,-x=y-5,\,x=5-y \\
g(x)=g(5-y)=(5-y)+5=y \\
g \text{ est subjective}$$

2. $f$ est injective donc on a $f^{-1}$
$$f(x)=x+3$$
$$f o f^{-1}(y)=y\\
f^{-1} o f(x)=x$$
$$f^{-1}(f(x))=x \\
f^{-1}(x+3)=x \\
t=x+3\ \ \ \ \ \ x=t-3$$
$$f^{-1}: \Z \rightarrow \Z \\
t \longmapsto t-3$$
$$\large f^{-1}(t)=t-3$$
