#include <iostream>

typedef struct rbElement {
    int data;
    rbElement* next;
}rbElement;

typedef struct rbStack{
    rbElement* head;
    int count;
}rbStack;

//Add element to stack
int Push(rbStack* stack,rbElement* elem)
{

    elem->next=stack->head;
    stack->count++;
    stack->head=elem;

    return 0;
}

//Remove element from stack, error=true if no more elements
int Pop(rbStack* stack, bool& error)
{
    if(stack->count){
        int buf=stack->head->data;

        stack->head=stack->head->next;
        stack->count--;
    }
    else 
    {
        buf=0;
        error=true;
    }


    return buf;
}