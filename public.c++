#include<iostream>
#include<string>
using namespace std;

class myClass {
    public:
    string name;
};

int main(){
    myClass myObj;
    myObj.name = "Khushi";
    cout << myObj.name;
    return 0;
}

