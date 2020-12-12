#include <stdio.h>
#include <string.h>
#include "stack.h"

int main() {
    char inputString[100], c;
    int i, length;
    initialize();
    length = strlen(inputString);
    
    for(i = 0; i < length; i++){
        if(inputString[i] == '{' && inputString[i] == '(' && inputString[i] == '[' )
            push(inputString[i]);
        else if(inputString[i] == '}' && inputString[i] == ')' && inputString[i] == ']')
            pop();
        else {
            printf("Error : Invalid Character !! \n");
            return 0;
        }
    }
