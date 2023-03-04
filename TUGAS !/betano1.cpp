#include <iostream>                    
#include <conio.h>
#include <stdio.h>
using namespace std;

struct buku{
	char kodeBuku[10];
	char namaBuku[50];                          
	char pengarang[20];
	char tahunTerbit[20];
	char hargaBuku[20];
};


int main () {
	buku perpus[5];
	for(int i=0; i<5; i++){
		cout << "===============================" << endl;
        cout << "Masukkan Data Detail Buku ke - " << i+1 << endl;
		cout << " " << endl;
		cout << "Masukkan Kode Buku    : "; cin >> perpus[i].kodeBuku;
		cout << "Masukkan Judul Buku   : "; cin >> perpus[i].namaBuku;
		cout << "Masukkan Nama Penulis : "; cin >> perpus[i].pengarang;
		cout << "Masukkan Tahun Terbit : "; cin >> perpus[i].tahunTerbit;
		cout << "Masukkan Harga Buku   : "; cin >> perpus[i].hargaBuku;
		cout << " " << endl;
	}
	cout << "Kode\tJudul\tPenulis\tTerbit\tHarga" << endl;
	for(int i=0; i<5; i++){
			cout << perpus[i].kodeBuku << "\t" << perpus[i].namaBuku << "\t" << perpus[i].pengarang << "\t" << perpus[i].tahunTerbit << "\t" << perpus[i].hargaBuku << endl;
	}

}
