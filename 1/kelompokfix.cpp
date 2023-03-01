#include <iostream>
#include <string>
using namespace std;
 
struct struda{
string arrayBelanja[7];
int maxData = 7;
int topData = 0;
}isi;

 
bool isFull(){
    if(isi.topData >= isi.maxData){
        return true;
    } else {
        return false;
    }
}
 
bool isEmpty(){
    if(isi.topData == 0 ){
        return true;
    } else {
        return false;
    }
}
 
int countSize(){
    if(isEmpty()){
        return 0;
    }else{
        return isi.topData;
    }
}

void pushTasBelanja(string barang){
    if(isFull() == true){
        cout << "Isi Tas Belanja Penuh!" << endl;
    }else{
        cout << "Masukkan Barang : "; getline (cin >> ws, barang);
        isi.arrayBelanja[isi.topData] = barang;
        isi.topData++; 
    }
}
 
void popTasBelanja(){
 if(isEmpty()){
        cout << "Isi Tas Belanja Kosong!" << endl;
    }else{
        isi.arrayBelanja[isi.topData-1] = "";
        isi.topData--;
    }
    cout << "" << endl;
    cout << "Berhasil Melakukan Pop!" << endl;
    for(int i = isi.maxData-1; i >=0;i--){
        if (isi.arrayBelanja[i] != ""){
            cout << "Isi Tas Belanja : " << isi.arrayBelanja[i]<< endl;
        }
    }
    cout << "" << endl;
    cout << "Jumlah Isi Tas : " << countSize() << endl;
} 
 
void displayTasBelanja(){
    for(int i = isi.maxData-1; i >=0;i--){
        if (isi.arrayBelanja[i] != ""){
            cout << "Isi Tas Belanja : " << isi.arrayBelanja[i]<< endl;
        }
    }
    cout << "" << endl;
    cout << "Jumlah Isi Tas : " << countSize() << endl;
}
 
void peekIsiTas(int posisi){
    if(isEmpty()){
        cout << "Isi Tas Kosong!" << endl;
    }else{
        int posisiIndex = isi.topData;
        for(int i = 0; i < posisi; i++){
            posisiIndex--;
        }
        cout << "Isi Barang Posisi Ke - ";cin >> posisiIndex; 
        cout << "Isi Index Adalah : " << isi.arrayBelanja[posisiIndex];
    }
}
 

void clearIsiTasBelanja(){
    for(int i = 0; i < isi.topData; i++){
        isi.arrayBelanja[i] = "";
    }
    cout << "" << endl;
    cout << "Berhasil Melakukan Clear!" << endl;
}

void ganti(string belanja, int posisi){
    if(isEmpty()){
        cout << "Isi Tas Belanja Kosong!" << endl;
    }else{
        int posisiIndex = isi.topData;
        cout << "Masukkan Posisi Index : ";cin >> posisiIndex;
        cout << "Masukkan Nama Barang  : "; getline (cin >> ws, belanja);
        for(int i = 0; i < posisi; i++){
            posisiIndex--;
        }
        isi.arrayBelanja[posisiIndex] = belanja;
    }
}
 
void exit(){
    cout << "Terimakasih" << endl;
}
 
int main(){
	string belanja;
	int posisi;
	string barang;
MainMenu:
system("cls");
cout << "==========================" << endl;
cout << "------ Tas Belanja -------" << endl;
cout << "==========================" << endl;
cout << "Menu : " << endl;
cout << "\n1. Push \n2. Pop \n3. Change \n4. Peek \n5. Display\n6. Clear \n7. Exit" << endl;
int x;
cout << endl;
cout << "Masukkan Pilihan : ";
cin >> x;
switch (x){
case 1 :
   pushTasBelanja(barang);
   aa:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl;
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
    exit();
   }else{
    goto aa;
   }
    break;
case 2 :
   popTasBelanja();
   bb:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl;
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
   exit();
   }else{
    goto bb;
   }
   break;
case 3 :
   ganti(belanja, posisi);
   cc:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl;
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
   exit();
   }else{
    goto cc;
   }
   break;
case 4 :
   peekIsiTas(posisi);
   dd:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl;
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
    exit();
   }else{
    goto dd;
   }
   break;
case 5 :
displayTasBelanja();
ee:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl;
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
     exit();
   }else{
    goto ee;
   }
break;
case 6 :
clearIsiTasBelanja();
ff:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl; 
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
    exit();
   }else{
    goto ff;
   }
   break;
default:
  exit();
    break;
}
}
 
//223010503020
//223010503019
//223