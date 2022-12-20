#include<iostream>
using namespace std;

int timesTwo(int x){
    return x*2;
}

int main() {
    cout << timesTwo(8);
    cout << timesTwo(5);
    cout << timesTwo(42);

    return 0;
}