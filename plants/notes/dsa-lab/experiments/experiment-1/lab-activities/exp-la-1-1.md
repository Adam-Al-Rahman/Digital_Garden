<h5 align="right">December 6th, 2021<br/>SAP ID : <code style="-webkit-user-select: none; -khtml-user-select: none; -moz-user-select: none; -ms-user-select: none; -o-user-select: none; user-select: none;"><a href="https://atiq-ur-rehaman.netlify.app/#about" >500097175</a></code> </h5>

## <u>Experiment_1_1</u> : Array & Structure. 

### <u>Objective</u>: To apply the concept of array, structure and experiment on nested array and array of structures.

### <u>Activity</u> : Write algorithm and C program, compile, execute and test the code using Linux C compiler with suitable test cases.

<h4 style="border: 3px; border-color: #6f6fc8; border-style: dashed; padding:10px;">1. Find sum of all array elements using recursion.</h4>


**<u>Aim</u>** : Find sum of all array elements

**<u>Theory</u>** :

- Variable Array
- Recursion

**<u>Algorithm</u>**

```algo
Step-1 : Start
Step-2 : Declaring varialbes array_size and array
Step-3 : Read array_size and array
Step-4 :
	- Declare a function `AddArrayElement`
	- Give int array[] and int array_size as parameter to AddArrayElement
	- In AddArrayElement
		IF arrya_size is equal to zero
			RETURN zero
		RETURN array[array_size-1]+AddArrayElement(array,array_size-1 )
	
Step-5 : Display function RETURN
Step-6 : Stop
```



**<u>Program</u>**

```c
#include <stdio.h>

int AddArrayElement();

int main(){
    int array_size;
    printf("Enter the size of array: ");
    scanf("%d", &array_size);

    if (array_size==0)
        printf("Please Enter the size of array greater than 0.");
    else{
        int array[array_size];
            printf("Enter the %d integer: ", array_size);

            for (int i=0; i<array_size; i++){
                scanf("%d", &array[i]);
            }
        printf("Sum of Element: %d", AddArrayElement(array, array_size));
    }
}

int AddArrayElement(int array[], int array_size){
    if (array_size==0)
        return 0;
    return (array[array_size-1]+AddArrayElement(array, array_size-1));
}
```
