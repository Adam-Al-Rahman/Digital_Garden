# Binding Time in language

## Program entities
- Variables.
- Routines.
- Statements.

## Attributes

Program entities have certain properties, called as `attributes`.

- Example:

	- Variable have attributes (Name, type, storage area)
	- Routine (Name, formal parameter of a certain type, certain parameter passing conventions)
	- Statement ( Associated actions )


## Descriptor

For each entity, attribute information is contained in a `repository` (memory area) is called as `Descriptor`.


## Binding

Specifying the exact nature of an attribute is known as `binding`.

### Binding Time

The time at which binding to execution and translation phase.

- Phases
	1. Execution phase (Run time)
		1. Also called `Late Binding`, `Dynamic Binding`.
	2. Translation phase ( Compile time)
		1. Also called `Early Binding`, `Static Binding`.

#### Execution Phase (Run time)


### Stability of the Binding

Whether an established binding is fixed or modifiable, is called as `Stability of the Binding`.


#### Static Binding

A binding that can not be modified, is called as `Static Binding`.

- Binding remain same through out `Execution Phase (Run time)`

#### Dynamic Binding

A modifiable binding is called `Dynamic binding`.

- Binding change at the time of  `Execution Phase (Run time)`


## Program Entities : Variables

- Attribute : name, scope, type, l_value and r_value
	- Name : the string of characters used by program statement to denote the variable.
	- Scope : The range of program instructions over which the name is known.
	- Type : Variable type.
	- l_value : the memory location associated with the variable.
	- r_value: the encoded value stored in the variable's location.

## Program Entities : Routines

What is Routine?

- Functions
- Procedure
- Attributes : name, scope, type l_value, r_value
	- name : name of function
	- scope : scope of function i.e, global or local
	- type : function type
	- l_value : the memory location associated with the function.
	- r_value: the actual statement saved in the memory value.