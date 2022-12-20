#include<iostream>
using namespace std;

int main(){
    int *p = NULL; // Pointer intialized with null
    p = new int[20]; // Request memory
    delete [] p; // Delete array pointed to by p

    return 0;
}