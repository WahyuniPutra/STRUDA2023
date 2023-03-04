#include <iostream>
#include <string>
using namespace std;

string arrayBelanja[5];
int maxData = 5;
int topData = 0;


bool isFull(){
    if(topData >= maxData){
        return true;
    } else {
        return false;
    }
}

bool isEmpty(){
    if(topData == 0){
        return true;
    } else {
        return false;
    }
}

void pushTasBelanja(string barang){
    if(isFull() == true){
        cout << "Isi Tas Belanja Penuh!" << endl;
    }else{
        arrayBelanja[topData] = barang;
        topData++; 
    }
}


int main(){
    pushTasBelanja("turu");
    isFull();
}