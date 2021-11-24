****## Q1. 

System and Application Software

- System Software :
	- `OS` and programming tools(compiler, linker,...) of a computer system are together called `System Software`.
	- Maximum system software are written in low-level language like `C/C++`.
	- Present or programmed BIOS (Basic Input/Output).
	- Example,
		- Operating System(OS):
			- Windows
			- Ubuntu (Free and Open source)
				- terminal.


- Application Software : 
	- These are the external software that we install and it is used to do a particular work.
	- These are not included with the OS software.
	- Like `VScode`, it is a code editor software used for coding.
	- Example,
		- VScode (Code Editor)
		- Obsidian (markdown editor for note-taking)

## Q2. 

The `sizeof` operator
- It is a pre-defined function.
- It return the size of
	- Variable.
	- Data type
	- Expression.
	- Pointer.
- It return in the form of integer.

## Q3. 

C program to display the ASCII value of a given character

```c
// pre-processor directive (#include)
#include <stdio.h>

int main(){
	// declaring variable character
	char character;
	
	printf("Enter a keyboard character : ");
	scanf("%c", &character);
	
	printf(
		"Character : %c \n ASCII [American Standard Code For Information Interchange] : %d",
		character,
		// type casting
		(int)character
	);
	
	return 0;
}
```


## Q4. 

The output of the given statements in C

### a. It output error. Because,
	
- There is no data type `Int` in `C` language.
- We cannot use `,`(comma) between the number in `C` language.

### b. Due to same reason as above(4.a) it through an same error.
	
 If statements are corrected, i.e,
```c
int count = 1275;
float amt = -23574;
char city[10] = "chennai";
```
	
then,

#### <u>a</u>:
	
```c
#include <stdio.h>

int main(){
	int count = 1275;
	float amt = -23574;
	char city[10] = "Chennai";

	printf("%-10d%-15f", count, amt);
}
```
	

<u>Output</u>:
```sh
1275-23574.000000
```
	
The six floating zero due to the default float datatype precision is six.

#### <u>b</u>:

```c
#include <stdio.h>

int main(){
	int count = 1275;
	float amt = -23574;
	char city[10] = "Chennai";

	printf("%-10d%-15s", count, city);
}
```

<u>Output</u>

```sh
1275      Chennai        
```

due to,

> %-10d = 1275\_\_\_\_\_\_ that is 6 space after digit 5.


## Q5. Program to convert a decimal number into its equivalent binary number.

```c
/**
 * Considering for 8 bit.
 */

//pre-processor directive
#include <stdio.h>

//Declaring function DecToBin()
int DecToBin(int dec);

//main function
int main(){

	int decimal;

	printf("Enter the decimal number of range(0, 255): ");
	scanf("%d",&decimal);

    printf("\nDecimal : %d",decimal);

	//invoking function DecToBin
	DecToBin(decimal);

  return 0;
}

// Defining the function DecToBin
int DecToBin(int dec){

	// considering for 8 bit
    int bin_array[8]={0,0,0,0,0,0,0,0};

    if (dec>=0 && dec<=255){
        for (int j=7;j>=0;j--){
        bin_array[j]=dec%2;
        dec=dec/2;
        }

        printf("\nBinary : 0b");
        for (int i=0;i<8;i++){
        printf("%d",bin_array[i]);
        }
    }
    else{
        printf("\nPlease enter number in range(0, 255)\n");
    }

	return 0;
}


/**
 * How can we improve above code?
 * We let user decide the bit instead of 8 bit.
 * By taking input from user.
 *
 * How to optimize time complexity[O]?
 * How to optimize storage complexity[0]?
 */

```

## Q6.  Variable `a` defined and declared,

```c
#include <stdio.h>

int main(){
	// global variable a
	extern int a;
	
	printf("%d", a);
}

int a=20;
```

From above we can clearly say that

- Variable `a` is a global variable.
- Variable `a` is declared in the scope of `main()` function.
- Variable `a` is defined out of the scope of `main()` function (globally).

## Q7.  Program

```c
#include <stdio.h>

// x out of the scope of main function
int x=40;

int main(){
	// x in the scope of main function
	int x=20;
	printf("\n %d",x);
}
```

<u>Terminal Output</u>

![[7.png]]


## Q8. Program

```c
#include <stdio.h>

int main(){
	int x=40;
	{
		int x=20;
		printf("\n %d",x);
	}
	
	printf("\n%d",x);
}
```

<u>Terminal Output</u>

![[8.png]]

