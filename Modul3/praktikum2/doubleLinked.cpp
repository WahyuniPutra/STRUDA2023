#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;

struct baru{
    int n;
    baru *next, *prev;
};

baru *front, *rear;

void inisiasi(){
    front = NULL;
    rear  = NULL;
}

void displayAll(){
    baru *print;
    cout << "" << endl;
    cout << "Data Saat Ini : " << endl;
    if(front == NULL){
        cout << "Data Kosong!" << endl;
    }else{
        print = front;
        while(print != NULL){
            cout << print -> n << " -> ";
            print = print -> next;
        }
    }
}

void inputFirst(int data){
    baru *input;
    input = new baru;
    if(front == NULL){
        front = input;
        input -> prev = NULL;
        input -> n = data;
        input -> next = NULL;
        rear = input;
    }else{
        input -> next = front;
        input -> n = data;
        input -> prev = NULL;
        front -> prev = input;
        front = input;
    }

}

void inputLast(int data){
    baru *input;
    input = new baru;
    if(front == NULL){
        front = input;
        input -> prev = NULL;
        input -> next = NULL;
        rear = input;
    }else{
        input -> prev = rear;
        rear  -> next = input;
        rear  -> next = NULL;
        rear = input;
    }
}

void inputAfter(int data, int dataLama){
    baru *input;
    input = new baru;
    baru *temp;
    temp = front;
    if(front == NULL){
        cout << "Data Tidak Dapat Diinput!" << endl;
    }if(front == rear){
        if(front -> n != dataLama){
            cout << "Data Tidak Dapat Diinput" << endl;
        }
        input -> n = data;
        front -> next = input;
        input -> next = NULL;
        front -> prev = NULL;
        input -> prev = front;
        rear = input; 
    }if(rear -> n == data){
        input -> next = NULL;
        input -> prev = rear;
        rear -> next = input;
        rear = input; 
    }while(temp -> n != dataLama){
        temp = temp -> next;
        if(temp == NULL){
            cout << "Data Tidak Dapat Diinput" << endl;
        }
    }
    input -> next = temp -> next;
    input -> prev = temp;
    input -> n = data;
    temp -> next -> prev = input;
    temp -> next = input;
}

void inputBefore(int data, int dataLama){
    baru *input;
    input = new baru;
    baru *temp;
    temp = front;
    if(front == NULL){
        cout << "Data Tidak Dapat Diinput!" << endl;
    }if(front == rear){
        if(front -> n != dataLama){
            cout << "Data Tidak Dapat Diinput" << endl;
        }
        input -> n = data;
        front -> next = input;
        input -> next = NULL;
        front -> prev = NULL;
        input -> prev = front;
        rear = input; 
    }if(rear -> n == data){
        input -> next = NULL;
        input -> prev = rear;
        rear -> next = input;
        rear = input; 
    }while(temp -> n != dataLama){
        temp = temp -> next;
        if(temp == NULL){
            cout << "Data Tidak Dapat Diinput" << endl;
        }
    }
    input -> prev = temp -> prev;
    input -> next = temp;
    input -> n = data;
    temp -> prev -> next = input;
    temp -> prev = input;
}

void hapusFirst(){
    baru *hapus;
    if(front == NULL){
         cout << "Data Kosong!" << endl;
    }if(front == rear){
        hapus = front;
        front = NULL;
        rear = NULL;
        delete hapus;
    }else{
        hapus = front;
        front = front -> next;
        front -> prev = NULL;
        delete hapus;
    }
    cout << "Berhasil Menghapus Data Dari Depan!" << endl;
}

void hapusLast(){
    baru *hapus;
    if(front == NULL){
         cout << "Data Kosong!" << endl;
    }if(front == rear){
        hapus = front;
        front = NULL;
        rear = NULL;
        delete hapus;
    }else{
        hapus = rear;
        rear = rear -> prev;
        rear -> next = NULL;
        delete hapus;
    }
    cout << "Berhasil Menghapus Data Dari Depan!" << endl;
}

void hapusMid(int data){
    baru *hapus;
    hapus = front;
    if(front == rear){
        if(front -> n != data){
        cout << "Data Kosong!" << endl;           
        }
        front = NULL;
        rear = NULL;
        delete hapus;
    }if(front -> n == data){
        front = front -> next;
        front -> prev = NULL;
        delete hapus;
    }else if(rear -> n == data){
        hapus = rear;
        rear = rear -> prev;
        rear -> next = NULL;
        delete hapus;
    }while (hapus -> n != data){
        hapus = hapus -> next;
        if(hapus == NULL){
            cout << "Data Tidak Ditemukan!" << endl;
        }
    }
    hapus -> next -> prev = hapus -> next;
    hapus -> prev -> next = hapus -> prev;
    delete hapus;
}

int main() {
    inisiasi();
    int menu, data, dataLama;
    do {
        system("cls");
        cout << "=========================" << endl;
        cout << "-- DOUBLE  LINKED LIST --" << endl;
        cout << "=========================" << endl;
        cout << "1. Input Front\n2. Input Rear\n3. Edit Rear\n4. Edit Front\n5. Delete Front\n6. Delete Mid\n7. Delete Rear\n8. Exit" << endl;
        cout << "Pilih Menu : ";cin >> menu;
        switch (menu) {
        case 1:
            cout << "Masukkan data: ";
            cin >> data;
            inputFirst(data);
            displayAll();
            getch();
            break;
        case 2:
            cout << "Masukkan data: ";
            cin >> data;
            inputLast(data);
            displayAll();
            getch();
            break;
        case 3:
            cout << "Masukkan data: ";
            cin >> data;
            cout << "Masukkan data lama: ";
            cin >> dataLama;
            inputAfter(data, dataLama);
            displayAll();
            getch();
            break;
        case 4:
            cout << "Masukkan data: ";
            cin >> data;
            cout << "Masukkan data lama: ";
            cin >> dataLama;
            inputBefore(data, dataLama);
            displayAll();
            getch();
            break;
        case 5:
            hapusFirst();
            displayAll();
            getch();
            break;
        case 6:
            cout << "Masukkan data: ";
            cin >> data;
            hapusMid(data);
            displayAll();
            getch();
            break;
        case 7:
            hapusLast();
            displayAll();
            getch();
            break;
        case 8:
            cout << "Terimakasih" << endl;
            return 0;
        default:
            cout << "Input Salah!" << endl;
            cout << "Tekan Enter Untuk Kembali.." << endl;
            getch();
            break;
        }
    } while (menu != 8);
      return 0;
}
