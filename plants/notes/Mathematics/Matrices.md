# Matrices

## Linear Independence & Dependence of Vector

### Linearly Dependent

Let `V(F)` be a vector space. A finite set {$\alpha_{1}$, $\alpha_{2}$, $\alpha_{3}$,..., $\alpha_{n}$} of vectors of `V` is said to be linearly dependent if there exist scalar $a_{1}$, $a_{2}$, $a_{3}$,..., $a_{n}$ $\in$ `F` not all of them 0(some of them may be zero) such that

> $a_{1}\alpha_{1}+a_{2}\alpha_{2}+a_{3}\alpha_{3}+...+a_{n}\alpha_{n}=0$

- If linearly dependent find the relation between the vector.


### Linearly Independent

Let `V(F)` be a vector space. A finite set {$\alpha_{1}$, $\alpha_{2}$, $\alpha_{3}$,..., $\alpha_{n}$} of vectors of `V` is said to be linearly independent if every relation of the form

$a_{1}\alpha_{1}+a_{2}\alpha_{2}+a_{3}\alpha_{3}+...+a_{n}\alpha_{n}=0$

> $a_{i} \in F, 1\leq i \leq n \Rightarrow a_{i} = 0 \hspace{2mm} for \hspace{2mm} each \hspace{3mm} 1 \leq i \leq n$

- Here all scalar must be zero i.e $a_{n} = 0$

An **infinite set** of vectors of `V` is said to be linearly independent if its every finite subset is linearly independent, otherwise it is linearly dependent.

## Rank of matrix ($\rho$)

A matrix is said to be of rank r, when

- There is at least one minor of A of order r which does not vanish.
- Every minor of A of order (r+1) or higher vanishes.

> Rank = Number of non-zero row in upper triangular matrix.

- Linearly Independent rows and columns.
- If $|A|=0$ then $\rho$ < n, n= order of matrix.
- $\rho(AB)\leq\rho(A)$

1. Row Echelon form.
2. Reduced-Row Echelon form.
3. Normal form.

### Row Echelon Form
A matrix is said to be in Echelon form, if
- Every row of A which has all it's entries 0 occurs below every row which has a non-zero entry.
- The number of zero preceding the first non-zero element in a row is less than that the number of such zeros in the succeeding (or  next) row.
- The first non-zero element in every row is unity.


### Reduced - Row Echelon Form
### Normal Form

Every non-zero matrix or rank $\rho$, by a sequence of elementary transformations can be reduced to the form.
$$
\begin{bmatrix}  
l_{r} & 0 &0 \\  
0 & 0 & 0 \\
0 & 0 & 0  
\end{bmatrix}
$$
- Where $l_{r}$ is a rxr unit matrix of order r and 0 represent null matrix.

## Consistence of system of linear Eq'n & its Solution

- Consistence system has at least one solution
	- Unique Solution.
	- Infinite Solution.
- In-consistence system has no solution.

### Non Homogeneous

> Written in the form AX=B, where $B\neq 0$


For the augmented matrix `A:B`

- If $\rho(A:B) = \rho(A)$ then system is `Consistence`
	- `Unique` : When $\rho(A:B) = \rho(A) = n$, `n = number of unknowns`.
	- `Infinite solution` : When $\rho(A:B) = \rho(A) \lt n$
- If $\rho(A:B) \neq \rho(A)$ then system is `Inconsistence` and has `no solution`.

### Homogeneous System.

> Written in the form AX=0. i.e B=0.
> Homogeneous system will always `be Consistence system.`, because, in this system it always happens $\rho(A:B) = \rho(A)$

- Nullity = Order - Rank
- Nullity of identity matrix = 0.

For the augmented matrix `A:B`

- If $\rho(A:B) = \rho(A)$ then system is `Consistence`
	- `Unique` : When $\rho(A:B) = \rho(A) = n$, n = number of unknowns.
	- `Infinite solution` : When $\rho(A:B) = \rho(A) \lt n$

#### [[~Matrix#Trivial Non-Trivial Solution|Trivial Solution]]

> Solution are Zeros.

$X=O$ i.e $x_{1}=0, x_{2}=0, ... , x_{n}=0$ is always a solution of the given system of equations. This solution is called a `Trivial Solution` of zero solution.
- This output only `Unique Solution`.
- Unique solution only if $\rho(A:B) = \rho(A) =n$.

> if $|A| \neq 0$ then it has trivial solution. Which mean all the value of unknowns are zero.

#### [[~Matrix#Trivial Non-Trivial Solution|Non Trivial Solution]]

The system will have non-trivial solution if and only if the rank of the coefficient matrix is less than the number of unknowns(n)


- This output only `Infinite solution`
- Infinite solution only if $\rho(A:B) = \rho(A) \lt n$

> Solutions are Non-Zero
- In this case $n - \rho$ variables are assigned arbitrary values.

> if $|A| = 0$ then the system has `Non-Trivial Solution`.



## Eigen Values & Eigen Vector

### Eigen Values

Let $A = [a_{ij}]_{m\times n}$ be a square matrix of order n.
Consider the homogeneous system of equation.
$AX = \lambda X$ or $(A-\lambda I)X=0$ ....(1)

Where `I` is an identity matrix and `n` order and $\lambda$ is a scalar.

- Homogeneous system of equation (1) always has a `Trivial Solution`.
- Here our concern is to find the values of $\lambda$, for which `non-trivial (non-zero) solutions` of the homogeneous system exist.
> - $|A-\lambda I|$ is a `Characteristic polynomial`.
> - <code>$|A-\lambda I| = 0$</code> is a `Characteristic Equation`.

## Caylay-Hamilton theorem & application to find power of matrix.

## Facts to Remember
- If $|A| \neq 0$ then $a_{1}=a_{2}=a_{3} = 0$ and it is said to be [[~Matrix#Trivial Non-Trivial Solution|Trivial Solution]] then it is linearly dependent.
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