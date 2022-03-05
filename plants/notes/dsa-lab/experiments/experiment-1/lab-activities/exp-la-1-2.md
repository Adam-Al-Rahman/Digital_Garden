<h5 align="right">December 6th, 2021<br/>SAP ID : <code style="-webkit-user-select: none; -khtml-user-select: none; -moz-user-select: none; -ms-user-select: none; -o-user-select: none; user-select: none;"><a href="https://atiq-ur-rehaman.netlify.app/#about" >500097175</a></code> </h5>

## <u>Experiment_1_1</u> : Array & Structure. 

### <u>Objective</u>: To apply the concept of array, structure and experiment on nested array and array of structures.

### <u>Activity</u> : Write algorithm and C program, compile, execute and test the code using Linux C compiler with suitable test cases.

<h4 style="border: 3px; border-color: #6f6fc8; border-style: dashed; padding:10px;">2. Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’</h4>


**<u>Aim</u>** : Insert and Delete element in an array

**<u>Algorithm</u>**

```algo
Step-1 : Start
Step-2 : Declaring varialbes array_size and array
Step-3 : Read array_size and array
Step-4 :
	
	Insertion
	- For (int i=array_size-1; i>=ith_element; i--) 
	  array[i] = array[i-1];

	Deletion
	- FOR (int i=0; i<array_size; i++){ printf("%d ", array[i]); }
	
Step-5 : Display function RETURN
Step-6 : Stop
```



**<u>Program</u>**

```c
#include <stdio.h>

void InsertDelArray(int array[], int array_size);
int StrCmp(char string_1[], char string_2[]);
int StrLen(char *string);

int main(){
    int array_size;
    int array[array_size];
    printf("Enter the size of array: ");
    scanf("%d", &array_size);

    printf("Enter any %d integer(space-separated): ", array_size-1);
    for (int i=0; i<array_size-1; i++){
        scanf("%d", &array[i]);
    }

    InsertDelArray(array, array_size);
}

void InsertDelArray(int array[], int array_size){
    char which_operation[10];
    printf("Which operation (Insertion|[Deletion]): ");
    for (int i=0; i<=0; i++){
        scanf("%s", &which_operation);
    }

    int ith_element;
    int ith_element_value;

    if (StrCmp(which_operation, "Insertion") == 0){
        printf(" ------------------\n|-----Insertion-----|\n ------------------\n");
        printf("Insert element at position: ");
        scanf("%d", &ith_element);
        printf("Enter integer element: ");
        scanf("%d", &ith_element_value);

        printf("New Array: ");

        for (int i=array_size-1; i>=ith_element; i--)
            array[i] = array[i-1];

        array[ith_element-1] = ith_element_value;
        printf("[");
        for (int i=0; i<array_size; i++){
            printf("%d ", array[i]);
        }
        printf("]");
    }
    else{
        printf(" ------------------\n|-----Deletion-----|\n ------------------\n");
        printf("Delete element at position: ");
        scanf("%d", &ith_element);

        printf("New Array: ");

        for (int i=ith_element-1; i<array_size; i++)
            array[i] = array[i+1];

        printf("[");
        for (int i=0; i<array_size; i++){
            printf("%d ", array[i]);
        }
        printf("]");



    }

}

int StrCmp(char string_1[], char string_2[]){
    for (int i=0;i<=StrLen(string_1);i++){
        if (string_1[i] == string_2[i])
            return 0;
        return 1;
    }
}

int StrLen(char *string){

    int length = 0;
    while(string[length]!='\0'){
        length++;
    }

    return length;
}
```
