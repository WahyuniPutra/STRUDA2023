#include <iostream>

using namespace std;

int main (){

    int x, fibo1 = 0, fibo2 = 1, next = 0;

    cout << "================================" << endl;
    cout << "------- DERET FIBONACCI --------" << endl;
    cout << "================================" << endl;
    cout << "Masukkan Angka : "; cin >> x;
    cout << ""<< endl;

    system("cls");
    cout << "================================" << endl;
    cout << "------- DERET FIBONACCI --------" << endl;
    cout << "================================" << endl;
    cout << "Deret Fibonacci : ";

    for(int i = 1; i<=x; ++i){
        if (i == 1){
            cout << " " << fibo1 << " ";
            continue;
        }if (i == 2){
            cout << fibo2 << " ";
            continue;
        }
        next = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = next;
        cout << next << " ";
    }
    return 0;
}