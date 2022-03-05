/**
 * @file experiment-2.c
 * @author https://atiq-ur-rehaman.netlify.app
 * @brief Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an
element from jth position of ‘a1’.
 * @version 0.1
 * @date 2022-02-04
 *
 * @copyright Copyright (c) 2022
 *
 */

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
    for (int i=0; i<10; i++){
        scanf("%s", &which_operation[i]);
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