#include <iostream>
#include <conio.h>
#include <limits>
#define MAX 50

using namespace std;

int top = -1;
int ukuran = 0;

struct listMusik{
    string lagu, album, penyanyi;
};

listMusik data[MAX];

int isEmpty(){
    return (top == -1) ? 1:0;
}

int isFull(){
    return (top == MAX -1) ? 1:0;
}

void input(){
	if (!isFull()){
		ukuran++;
		top++;
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
		cout << "\n ======= Input Data Playlist ======= \n";
		cout << "\n Masukkan Judul Lagu    \t: ";getline(cin, data[top].lagu);
		cout << "\n Masukkan Nama Album    \t: ";getline(cin, data[top].album);
		cout << "\n Masukkan Nama Penyanyi \t: ";getline(cin, data[top].penyanyi);
	}else{
		cout << " Data Sudah Penuh!";
	}
}

void pop(){
    if (isEmpty()){
        cout << "Data Kosong!" << endl;
    }else{
        cout << "\n Data Yang Dikeluarkan : " << endl;
        cout << "Judul Lagu : " << data[top].lagu << endl;
        cout << "Nama Album : " << data[top].album << endl;
        cout << "Penyanyi   : " << data[top].penyanyi << endl;
        ukuran--;
        top--;
    }
}

void dequeue(){
    if(isEmpty()){
        cout << "Data Kosong!" << endl;
    }else{
        cout << "\n Data Yang Dikeluarkan : " << endl;
        cout << "Judul Lagu : " << data[0].lagu << endl;
        cout << "Nama Album : " << data[0].album << endl;
        cout << "Penyanyi   : " << data[0].penyanyi << endl;
        for(int i = 0; i < ukuran; i++){
            data[i].lagu = data[i + 1].lagu;
            data[i].album = data[i + 1].album;
            data[i].penyanyi = data[i + 1].penyanyi;
        }
        ukuran--;
        top--;
    }
}

void tampil(){
    if(isEmpty()){
        cout << "Data Kosong!" << endl;
    }else{
        cout << "\n Isi Antrian : " << endl;
        for(int i = top; i >= 0; i--){
        cout << "Data Ke - " << i+1 << endl; 
        cout << "Judul Lagu : " << data[i].lagu << endl;
        cout << "Nama Album : " << data[i].album << endl;
        cout << "Penyanyi   : " << data[i].penyanyi << endl;
        cout << " " << endl;
        }
    }
}

void clear(){
    top = -1;
    cout << "Berhasil Melakukan Clear!" << endl;
}

int main(){
    int a;
    do{
        system("cls");
        cout << "=============================" << endl;
        cout << "------------ Menu -----------" << endl;
        cout << "=============================" << endl;
        cout << "1. PUSH\n2. POP\n3. DEQUEUE\n4. PRINT\n5. CLEAR\n6. TERMINATE" << endl;
        cout << "=============================" << endl;
        cout << "Pilih Menu : "; cin >> a;
        switch (a)
        {
        case 1 :
            input();
            break;
        case 2 :
            pop();
            cout << "Press Any Key To Continue..." << endl;
            getch();
            break;
        case 3 :
            dequeue();
            cout << "Press Any Key To Continue..." << endl;
            getch();
            break; 
        case 4 :
            tampil();
            cout << "Press Any Key To Continue..." << endl;
            getch();
            break; 
        case 5 :
            clear();
            cout << "Press Any Key To Continue..." << endl;
            getch();
            break; 
        case 6 :
            cout << " ";
            break;   
        default:
            cout << "Input Dengan Benar!" << endl;
            cout << "Press Any Key To Continue..." << endl;
            getch();
            break;
        }
    }while(a != 6);
    return 0;
}