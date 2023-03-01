#include <iostream>
#include <string>

using namespace std;

int dataMax = 5;
string arrayPerpus[5];
int topData = 0;

void pushBuku(string mod){
     if(topData >= dataMax){
        cout << "Buku Sudah Penuh" << endl;
     }else{
        arrayPerpus[topData] = mod;
        topData++;
     }
}

void displayRakBuku(){
    cout << "Array Stack : " << endl;
    for (int i = dataMax-1 ; i >=0; i--){
       if(arrayPerpus[i] != "" ){
            cout << "Data : " << arrayPerpus[i] << endl;
        }
    }
}

int main(){
    pushBuku("GNU BAU");
    displayRakBuku();
}