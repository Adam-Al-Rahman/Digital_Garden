# Matrices

## Linear Independence & Dependence of Vector

### Linearly Dependent

Let `V(F)` be a vector space. A finite set {$\alpha_{1}$, $\alpha_{2}$, $\alpha_{3}$,..., $\alpha_{n}$} of vectors of `V` is said to be linearly dependent if there exist scalar $a_{1}$, $a_{2}$, $a_{3}$,..., $a_{n}$ $\in$ `F` not all of them 0(some of them may be zero) such that

> $a_{1}\alpha_{1}+a_{2}\alpha_{2}+a_{3}\alpha_{3}+...+a_{n}\alpha_{n}=0$

### Linearly Independent

Let `V(F)` be a vector space. A finite set {$\alpha_{1}$, $\alpha_{2}$, $\alpha_{3}$,..., $\alpha_{n}$} of vectors of `V` is said to be linearly independent if every relation of the form

$a_{1}\alpha_{1}+a_{2}\alpha_{2}+a_{3}\alpha_{3}+...+a_{n}\alpha_{n}=0$

> $a_{i} \in F, 1\leq i \leq n \Rightarrow a_{i} = 0 \hspace{2mm} for \hspace{2mm} each \hspace{3mm} 1 \leq i \leq n$

- Here all scalar must be zero i.e $a_{n} = 0$

An **infinite set** of vectors of `V` is said to be linearly independent if its every finite subset is linearly independent, otherwise it is linearly dependent.

## Rank of matrix

1. Row Echelon form.
2. Reduced-Row Echelon form.
3. Normal form.

### Row Echelon Form
### Reduced - Row Echelon Form
### Normal Form

## Consistence of system of linear Eq'n & its Solution

## Eigen Values & Eigen Vector

## Caylay-Hamilton theorem & application to find power of matrix.

## Facts to Remember
- If $|A| \neq 0$ then $a_{1}=a_{2}=a_{3} = 0$ and it is said to be [[~Matrix#Trivial Non-Trivial Solution|Trivial Solution]].
- The system of equation have non-trivial solution if $\Delta (A) = 0$
- Homogeneous system then consider
	- AX = 0.
	- Trivial & Non-Trivial solution
- The number of `Linearly Independent`  solutions of eq'n `AX = 0` is  n-$\rho$
	- Where, `n` : number of unknown.
	- $\rho$ : rank of coefficient matrix A.
	- Case-1 : If n=$\rho$, then the equation AX=0 will have non-linearly independent solutions.
		- X=0 $\Rightarrow$ $x_{1} = x_{2} = ....=X_{n} = 0$. This is called `Trivial Solution`
	- Case-II : If n>$\rho$, then the equation AX=0 will have n-$\rho$ linearly independent solutions.
		- This is called `Non-Trivial Solution`.
		- The equation AX=0 will have infinite solution.