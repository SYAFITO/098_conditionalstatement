#include <iostream>
using namespace std;

int main(){
    int nBilangan;
    string status;
    srand(time(0));
    
    if (nBilangan % 2 == 0){
        status = "genap";
    }
    else{
        status = "ganjil";
    }

    cout << "Bilangan adalah = " << nBilangan << endl;
    cout << "status bilangannya adalah bilangan = " << status << endl;

    return 0;
}