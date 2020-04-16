#include "stack.h"
#include <iostream>
using std::cout; using std::endl;

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
    cout<<"Add first element: "<<a.data<<endl;

    Pop(&myStack,error);
    if(error) cout<<"No more elements"<<endl;
}