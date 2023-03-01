#include <iostream>
#define MAX 10
using namespace std;

struct antrian{
    int head, tail, data[MAX];
} queue;

bool isFull(){
    if (queue.tail >= MAX){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(){
    if (queue.tail == 0 ){
        return true;
    }else{
        return false;
    }
}

void displayQueue(){
    if(isEmpty()){
        cout << "Antrian Kosong!" << endl;
    }else{
        cout << "Queue : " ;
        for(int i=queue.head; i<queue.tail;i++){
             cout << queue.data[i] << ((queue.tail-1 == i) ? "" : ",");
        }
        cout << "" << endl;
    }
}

void enqueue(){
    if(isFull()){
        cout << "Antrian Penuh!" << endl;
    }else{
        int in;
        cout << "Masukkan Data : "; cin >> in;
        queue.data[queue.tail] = in;
        queue.tail++;
        cout << "Berhasil Memasukan Data!\n" << endl;
        displayQueue();
    }
}

// void peekQueue(int posisi){
//     if(isEmpty()){
//         cout << "Antrian Kosong!" << endl;
//     }else{
//         int posisiAntrian = queue.data;
//         for(int i=0; i < posisi;i++){
//             posisiAntrian--;
//         }
//         cout << "Antrian Ke - "; cin >> posisiAntrian;
//         cout << "Isi Antrian : " << queue.data[posisiAntrian];
//     }
// }

void dequeue(){
    if(isEmpty()){
        cout << "Antrian Kosong!" << endl;
    }else{
        cout << "Mengambil Data : " << queue.data[queue.head] << "...." << endl;
        for (int i = queue.head; i<queue.tail;i++){
            queue.data[i] = queue.data[i + 1];
            queue.tail--;
            displayQueue();
        }
    }
}

void exit(){
    cout << "Terimakasih, Have A Nice Day!" << endl;
}

int main(){
    MainMenu:
    int posisi;
    system("cls");
    cout << "1. Enqueue\n2. Dequeue\n3. Keluar" << endl;
    int x,y;
    cout << "pilih bang : "; cin >> x;
    switch (x)
    {
    case 1 :
        enqueue();
        cout << "1.Menu Utama\n2.Keluar" << endl;
        cout << "Pilih lagi bang : "; cin >> menu;
        aa:
        if(menu == 1){
            goto MainMenu;
        }else if(menu == 2);{
            goto exit();
        }else{
            goto aa;
        }
        break;
    case 2 :
        dequeue();
        cout << "1.Menu Utama\n2.Keluar" << endl;
        cout << "Pilih lagi bang : "; cin >> menu;
        bb:
        if(menu == 1){
            goto MainMenu;
        }else if(menu == 2);{
            goto exit();
        }else{
            goto bb;
        }
        break;  
    default:
        cout << "Babi" << endl;
        break;
    }
}

