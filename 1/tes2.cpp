#include <iostream>
#include <string>

#define maxData [50];
#define true 1;
#define false 0;

using namespace std;

string tumpukan [maxData];
int topData1, topData2;

void stack(){
    topData1 = 0;
    topData2 = maxData+1;
}

int cekStack(){
    if(topData1 + 1 >= topData2 ){
        return true;
    }else{
        return false;
    }
}

int cekKuota(int cek){
    switch(cek){
        case 1:
        if(topData1 == 0){
            return true;
        }else{
            return false;
        }
        break;
        case 2:
        if(topData2 == maxData+1){
            return true;
        }else{
            return false;
        }
        break;
        default: cout << "Top Data Stack Tidak Terdaftar!" << endl;
        break;
    }
}

void clearValueStack(int cek){
    switch(cek){
        case 1:
        topData1 = 0;
        break;
        case 2:
        topData2 = 0;
        break;
        default: cout << "Top Data Stack Tidak Terdaftar!" << endl;
        break;
    }
}

void pushBuku(std::string Buku, int cek){
    if(!cekStack()){
        switch(cek){
            case 1:
            if(topData1 >= maxData){
                cout << "Data Sudah Penuh" << endl;
            }else{
                tumpukan[topData1] = Buku;
                topData1++;
            }
            break;
            case 2:
            if(topData2 >= maxData){
                cout << "Data Sudah Penuh" << endl;
            }else{
                tumpukan[topData2] = Buku;
                topData2--;
            }
            break;
            default : cout << "Top Data Stack Tidak Terdaftar!" << endl;
            break;
        }
    }
}

void popRakBuku(int cek){
    string Buku;
    if(!cekKuota(cek)){
        switch (cek){
        case 1:
            Buku = tumpukan[topData1];
            topData1--;
            return topData1;
            break;
        case 2:
            Buku = tumpukan[topData2];
            topData2++;
            return topData2;
            break;
        default: cout << "Top Data Struck Tidak Terdaftar" << endl;
            break;
        }
    }
}

void displayIsiRak(){
    for(int i = maxData-1; i>=0;i--){
        if(tumpukan[topData1,topData2] != "" ){
            cout << "Data : " << tumpukan[topData1, topData2];
        }
    }
}

int main(){

    stack();
    pushBuku("MTK",1);
    pushBuku("RTR",1);
    displayIsiRak();
}