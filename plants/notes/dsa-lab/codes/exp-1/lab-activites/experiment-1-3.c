/**
 * @file experiment-1-3.c
 * @author https://atiq-ur-rehaman.netlify.app
 * @brief  Convert uppercase string to lowercase using for loop.
 * @version 0.1
 * @date 2022-02-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <ctype.h>

void UConvertioL();
int StrLen();

int main(){
    char string[25];

    printf("Enter a string: ");
    int length = 0;
    while(string[length]!='\0'){
        scanf("%c", &string[length]);
        length++;
    }


    UConvertioL(string);
}


void UConvertioL(char string[]){
    char lower_string[StrLen(string)];

    printf("Lower Case String: ");
    for(int i=0; i<StrLen(string); i++){
        lower_string[i]=tolower(string[i]);
        printf("%c", lower_string[i]);
    }

};

int StrLen(char string[]){

    int length = 0;
    while(string[length]!='\0'){
        length++;
    }

    return length;
}