#include <stdio.h>
#include <string.h>
#include "stack.h"

#Initially have top index set to -1

void initialize() {
 st.top = -1;
}

#To check if stack is Full or not

int isFull() {   
    if(st.top >= MAXSIZE-1)
        return TRUE;
    else
        return FALSE;
}
 
#To check if stack is empty or not

int isEmpty() {
 if(st.top == -1)
     return TRUE;
 else
     return FALSE;
}

#To Push items to stack

void push(int num) {
    if (isFull())
        printf("Stack is Full...\n");
    else {
        st.array[st.top + 1] = num;
        st.top++;
    }
}

#To pop items from stack if we have ("}", ")", "]")

int pop() {
    if (isEmpty())
        printf("Stack is Empty...\n");
    else {
     st.top = st.top - 1;
        return st.array[st.top+1];
    }
}
