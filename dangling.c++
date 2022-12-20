#include<iostream>
using namespace std;

int main(){
    int *p = new int; // request memory
    *p = 5; // store value

    delete p; // free up the memory
    // now p is a dangling pointer

    p = new int; // reuse for a new address

    return 0;  
}