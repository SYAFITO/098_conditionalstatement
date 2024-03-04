#include <iostream>
using namespace std;

int main(){
    string status;
    int nBILA,nBILB;
    srand(time(0));

    nBILA = rand() % 10;
    nBILB = rand() % 10;

    cout << "Tampilkan bilangan A =" << nBILA << endl;
    cout << "Tampilkan bilangan B =" << nBILB << endl;

    if(nBILA == nBILB){
        status = "bilangan A dan bilangan B sama besar";
    }
    else if(nBILA > nBILB){
        status = "bilangan A lebih besar dari bilangan B";
    }
    else{
        status = "bilangan A lebih kecil dari bilangan B";
    }
    cout << "Tampilkan status = " << status << endl;

    return 0;
        
    }
    