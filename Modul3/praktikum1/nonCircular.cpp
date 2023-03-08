#include <iostream>
#include <conio.h>
#include <limits>

using namespace std;

struct baru{
    string nama, nim;
    baru *next;
};

baru *front, *rear;

void displayAll(){
    baru *data;
    if(front == NULL){
        cout << "Data Masih Kosong!" << endl;
    }else{
        data = front;
        while(data != NULL){
            cout << "Nama : " << data -> nama << endl;
            cout << "NIM  : " << data -> nim << endl;
            data = data -> next;
        }
    }
}

void inputFront(){
    baru *input;
    input = new baru;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "==========================" << endl;
    cout << "------ Masukkan Data -----" << endl;
    cout << "==========================" << endl;
    cout << "Masukkan Nama : "; getline(cin, input -> nama);
    cout << "Masukkan NIM  : "; getline(cin, input -> nim);
    input -> next = NULL;
    if(front == NULL){
        front = rear = input;
        front -> next = NULL;
    }else{
        input -> next = front;
        front = input;
    }
    system("cls");
    cout << "==========================" << endl;
    cout << "Data Berhasil Di Masukkan!" << endl;
    cout << "==========================" << endl;
    displayAll();
}

void inputRear(){
    baru *input;
    input = new baru;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "==========================" << endl;
    cout << "------ Masukkan Data -----" << endl;
    cout << "==========================" << endl;
    cout << "Masukkan Nama : "; getline(cin, input -> nama);
    cout << "Masukkan NIM  : "; getline(cin, input -> nim);
    input -> next = NULL;
    if(front == NULL){
        front = input;
    }else{
        rear -> next = input;
    }
    rear = input;
    rear -> next = NULL;
    system("cls");
    cout << "==========================" << endl;
    cout << "Data Berhasil Di Masukkan!" << endl;
    cout << "==========================" << endl;
    displayAll();
}

void hapusFront(){
    baru *hapus;
    if(front == NULL){
        cout << "Data Kosong!" << endl;
    }else{
        system("cls");
        cout << "==========================" << endl;
        cout << "----- Data Terhapus! -----" << endl;
        cout << "==========================" << endl;
        hapus = front;
        front = front -> next;
        delete hapus;
    }
    displayAll();
}

void hapusRear(){
    baru *bantu, *hapus;
    if(front == NULL){
        cout << "Data Kosong!" << endl;
    }else if(front == rear){
        cout << "Data Terhapus!" << endl;
        front = front;
        front = front -> next;
        delete hapus;
    }else{
        cout << "Data Terhapus!" << endl;
        bantu = front;
        hapus = rear;
        while(bantu -> next != rear){
            bantu = bantu -> next;
        }
        rear = bantu;
        rear -> next = NULL;
        delete hapus;
    }
    cout << "==========================" << endl;
    cout << "----- Data Saat Ini ------" << endl;
    cout << "==========================" << endl;
    displayAll();
}

int main(){
    int menu;
    do
    {
        system("cls");
        cout << "==========================" << endl;
        cout << " Linked List Non Circular " << endl;
        cout << "==========================" << endl;
        cout << "1. Input Front\n2. Input Rear\n3. Delete Front\n4. Delete Rear\n5. Display All\n6. Exit" << endl;
        cout << "Pilih Menu : "; cin >> menu;
        switch (menu)
        {
        case 1 :
            inputFront();
            cout << "Tekan Enter Untuk Kembali.." << endl;
            getch();
            break;
        case 2 :
            inputRear();
            cout << "Tekan Enter Untuk Kembali.." << endl;
            getch();
            break;
        case 3 :
            hapusFront();
            cout << "Tekan Enter Untuk Kembali.." << endl;
            getch();
            break;
        case 4 :
            hapusRear();
            cout << "Tekan Enter Untuk Kembali.." << endl;
            getch();
            break;
        case 5 :
            displayAll();
            cout << "Tekan Enter Untuk Kembali.." << endl;
            getch();
            break;
        case 6 :
        cout << " " << endl;
        break;
        default:
            cout << "Input Salah!" << endl;
            cout << "Tekan Enter Untuk Kembali.." << endl;
            getch();
            break;
            break;
        }
    } while (menu != 6);
      return 0;
}