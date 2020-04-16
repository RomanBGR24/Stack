typedef struct rbElement {
    int data;
    rbElement* next;
}rbElement;

typedef struct rbStack{
    rbStack* head;
    int count;
}rbStack;

int Push(rbStack* stack,rbElement* elem);
int Pop(rbStack* stack, bool& error);