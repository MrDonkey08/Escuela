---
title: Conjuntos y lógica matemática - símbolos
author: Alan Yahir Juárez Rubio

aliases: formulario, simbolario
tags: logica matematica/formulario, matematicas discrestas/formulario, formulario

creation date: 14-02-2023
last modification date: 14-02-2023

type: Note
---

### Conjuntos

| Símbolo | Nombre | Significado |
|:-:|:-:|:-|
| $A\cup B$ | Unión | Todos los elementos de $A$ y $B$ |
| $A\cap B$ | Intersección | Elementos en común entre $A$ y $B$ |
| $A^c$, $A\textquoteright$ o $\overline{A}$| Complemento | Elementos que no pertenecen a $A$, pero sí al conjunto universal |
| $A\backslash B$ | Complemento relativo | Elementos que pertenecen a $A$, pero no a $B$ |
| $A-B$  o $AB$ | Diferencia | Elementos en $A$, pero no en $B$ |
| $A\Delta B$  o $A\ominus B$|  Diferencia simétrica | Elementos que no tienen en comun $A$ y $B$ |
| $A\times B$ | Producto cartesiano | Conjunto de pares ordenados de $A$ y $B$ |
| $A=B$ | Igualdad | Ambos conjuntos tienen los mismos elementos |
| $A\subseteq B$ | Subconjunto | Cada elemento de $A$ está en $B$ |
| $A\subset B$ | Subconjunto propio| Cada elemento de $A$ está en $B$, pero $B$ tiene más elementos | 
| $A\not\subset B$ | No es subconjunto | $A$ no es subconjunto de $B$ |
| $A\supseteq B$ | Superconjunto | A tiene los mismos de elementos que $B$, o más |
| $A\supset B$ | Superconjunto propio | $A$ tiene elemetos de $B$ y más |
| $A\not\supset B$ | No es superconjunto | $A$ no es un superconjunto de $B$ |
| $\varnothing$ | Conjunto vacío | Conjunto sin elementos | 
| $\Bbb U$ | Conjunto universal | Todos los valores posibles (en el área de interés) |
| $P(A)$ | Conjunto potencia | Todos los subconjuntos de $A$. Si $\#A = n$, entonces $\#P(A) = 2^n$|
| $\#A$ o $\mid A\mid$ | Cardinalidad | Número de elementos del conjunto $A$ |

### Clasificación de números

| Símbolo | Nombre | Significado |
|:-:|:-:|:-|
|$\Bbb N$ | Números Naturales | $1,2,3\dots$ |
| $\Bbb Z$ | Números Enteros | $\cdots-2,-1,0,1,2\cdots$ |
| $\Bbb R$ | Números Reales | Todos los números: enteros y decimales positivos y negativos |
| $\Bbb Q$ | Números Racionales | $\cfrac{a}{b}$, donde $a$ y $b$ son números enteros |
| $\Bbb I$ | Números Imaginarios | Forma parte de los números complejos y son producto del número real por la unidad imaginaria $i$. Se define como $i=\sqrt{-1}$ | 
| $\Bbb C$ | Números Complejos | Comprende los números reales y los imaginarios | 

### Relaciones

| Símbolo | Nombre | Significado |
|:-:|:-:|:-|
| $x\ R\ y$ | Relación | $(x,y)\in R$ |
| $R^{-1}$ o $R^{\sim}$ | Inversa | Conjunto de pares ordenados que cambian su posición $(a,b)\to (b,a)$ | 
| $R\circ S$ | Composición | Elemento en común en sus extremos | Además $T\circ (S\circ R) = (T\circ S)\circ R$ |
| $a\ R\ a$ | Reflexiva | $R$ es reflexiva $≡ ∀a \left(a\ R\ a\right)$ |
| $a\ \not R\ a$ | No reflexiva | $R$ es reflexiva $≡ ∀a \left(a\ \not R\ a\right)$ |
| - | Simétrica | $R$ es simétrica ≡ $∀a\ ∀b \left(a\ R\ b ⇒ b\ R\ a\right)$ |    
| - | Antisimétrica | R es antisimétrica $≡ ∀a\ ∀b \left(a\ R\ b ∧ b\ R\ a ⇒ a = b\right)$
| - | Transitiva | R es transitiva $≡ ∀a\ ∀b\ ∀c\ (a\ R\ b ∧ b\ R\ c ⇒ a\ R\ c)$ |
| - | Relación de equivalencia | Reflexiva, simétrica y transitiva |
| $\preceq$ | Orden Parcial | Reflexivo, antisimétrico y transitivo |

### Operadores de Conjuntos

| Símbolo | Nombre | Significado |
| :-: | :-: | :- |
| $\mid, \ /, :$| - | Tal que |
| $\forall$ | Cuantificador universal | Para todo |
| $\in$ | - | Pertenece |
| $\notin$ | - | No pertenece |
| $\exists$ | Cuantificador existencial | Existe |
| $\nexists$ | - | No existe | 
| $\nexists !$ | - | Existe un único|
| {} | Conjunto | - |

### Conectores lógicos

|                      Símbolo                       |        Nombre         | Significado                          |
|:--------------------------------------------------:|:---------------------:| ------------------------------------ |
|                $\neg,\sim, !, \:'$                 |       Negación        | no                                   |
|                $\wedge, \&, \cdot$                 |      Conjunción       | y                                    |
|                $\vee, +, \mid\mid$                 |      Disyunción       | o                                    |
|              $\to, \implies, \supset$              |      Condicional      | si..., entonces, implica             |
|     $\leftrightarrow, \equiv, \Leftrightarrow$     |     Bicondicional     | si y solo si                         |
|                    $\downarrow$                    |   Negación conjunta   | ni... ni                             |
| $\nleftrightarrow, \oplus, \not\equiv, W, \veebar$ | Disyunción excluyente | o bien... o bien                     |
|                    $\therefore$                    |      Conclusión       | luego, por lo tanto, en consecuencia |
|                     $\because$                     |        Porque         | -                                    |
|                   $\top,$ T $,1$                   |      Tautología       | siempre verdadero                    |
|                   $\bot,$ F$,0$                    |     Contradicción     | siempre falso                        |

---

## Referencias 
- Wikipedia (s.f.). Conectiva lógica. https://es.wikipedia.org/wiki/Conectiva_l%C3%B3gica
- Wikipedia (s.f.). Símbolos lógicos. https://es.wikipedia.org/wiki/Anexo:S%C3%ADmbolos_l%C3%B3gicos
- Wikipedia (s.f.). [Álgebra de conjuntos]. https://es.wikipedia.org/wiki/Operaciones_con_conjuntos)
- [Rodó, P]. https://economipedia.com/author/P.rodo) (01 de agosto, 2020). [Números imaginarios. https://economipedia.com/definiciones/numeros-imaginarios.html)
<!-- https://es.wikipedia.org/wiki/Teor%C3%ADa_de_conjuntos -->

