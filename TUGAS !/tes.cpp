#include <iostream>
#include <conio.h>
using namespace std;

void perpustakaanbuku() {
	struct perpustakaan{
	char kodeBuku[10];
	char namaBuku[50];                          
	char pengarang[20];
	char tahunTerbit[20];
	char hargaBuku[20];
	};
	
	perpustakaan buku;
	cout << "Masukkan Kode Buku    : "; cin >> buku.kodeBuku;
	cout << "Masukkan Judul Buku   : "; cin >> buku.namaBuku;
	cout << "Masukkan Penulis Buku : "; cin >> buku.pengarang;
	cout << "Masukkan Tahun Terbit : "; cin >> buku.tahunTerbit;
	cout << "Masukkan Harga Buku   : "; cin >> buku.hargaBuku;
	cout << "===============================================" << endl;
	
	
}

int main (){
	int x,y;
	system ("cls");
	cout << "Masukkan Jumlah Buku : "; cin >> y;
	cout << endl;
	
	if (y<=2){
		cout << "Input Minimal 3 Buku!";
	}else{
		system ("cls");
		for (int i=1; i<=y; i++) {
			cout << "Data Buku Ke - " << i << endl;
			perpustakaanbuku();
		}
		return 0;
	}
	
	
}
