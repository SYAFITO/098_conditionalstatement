#include <iostream>
using namespace std;

int main(){
    int nMTK, nFIS,nRerata;
    string status;
    
    cout << "Masukkan Nilai Matematikanya = " << endl;
    cin >> nMTK;

    cout << "Masukkan Nilai Fisikanya = "  << endl;
    cin >> nFIS;

    nRerata = nMTK + nFIS /2;


    if(nRerata > 60){
        status = "Lulus";

    }
    else{
        status ="Tidak Lulus";
    }
    cout << "Tampilkan status = "<< status << endl;

    return 0;
}