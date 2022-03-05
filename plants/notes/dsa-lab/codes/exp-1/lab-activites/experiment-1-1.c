/**
 * @file experiment-1.cpp
 * @author Atiq Urrehaman
 * @brief Find the sum of array element using recursion
 * @version 0.1
 * @date 2022-02-04
 *
 * @copyright Copyright (c) 2022
 *
 */


#include <stdio.h>

int AddArrayElement();

int main(){
    int array_size;
    int array[array_size];
    printf("Enter the size of array: ");
    scanf("%d", &array_size);

    if (array_size==0)
        printf("Please Enter the size of array greater than 0.");
    else{
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



/**
 * @Question arises while writting
 * - How to count the number of input integer?
 *  - if we know this we can use to create a changing
 *
 *
 */