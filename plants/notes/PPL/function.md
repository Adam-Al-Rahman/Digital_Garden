# Function


## Different between $Procedure$ vs. $Functions$

### Procedure

- Does not deal with an expression.
- Is a set of commands which are executed in a order.
- Cannot be called by a $procedure$
- Inside procedure we can use `DML` command.
- Cannot be called through `SQL` queries.
- Procedure are compiled once can be called again & again.
- Support try catch block.
- Support explicit transaction handler.

#### Pros & Cons of Procedure

### Functions

#### Pros & Cons of Functions

## Functional Side-effect

When a function changes a two-way parameter or a non-local variable. It occurs when the function changes either one of its parameter or a global variables


### Solution of functional side-effect

- Referencing Environment
	- Shallow binding
	- deep binding
	- Ad hoc binding.
- Overloaded subprograms
	- Should be same actual param and declare var.
- Overloaded functions
	- Same name functions but used for different parameter
	- Generic Subprograms
	- Coroutines
		- A subprograms that has multiple entries ad controls them itself.

- General semantics of subprogram calls
	- Pass parameters
	- ...
- Implementing simple subprograms
- All local variable are static
- Activation records
	- local variable
	- 
	- Return address

- Linker and loader?