#include "stack.h"
#include <iostream>
using std;

int main ()
{
    //Create stack 
    rbStack myStack = {10,nullptr};
    bool error=false;
    //Create elements
    rbElement a = {1,nullptr};
    rbElement b = {2,nullptr};
    rbElement c = {3,nullptr};

    Push(&myStack,&a);

    Pop(&myStack,error);
    if(error) cout<<"No more elements"<<endl;
}