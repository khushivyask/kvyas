#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int *p = &x;

    x = x + 4;
    x = *p + 4;
    *p = *p + 4;

    return 0;
}