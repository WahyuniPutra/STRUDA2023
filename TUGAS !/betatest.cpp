#include <iostream>
using namespace std;

struct perpus{
	char kodeBuku[10];
	char namaBuku[50];                          
	char pengarang[20];
    char  tahunTerbit[20];
	char  hargaBuku[20];
};

int main(){
	int inputan;
	cout << "============================" << endl;
	cout << "----- Data Detail Buku -----" << endl;
	cout << "============================" << endl;
	cout << "Masukkan Jumlah Buku : "; cin >> inputan;
	
	
	perpus *baca = new perpus[inputan];
	
	
	for (int i = 0; i < inputan; i++){
		cout << "================================" << endl;
		cout << "Data Detail Buku ke - " << i+1 << endl;
		cout << "Kode Buku    : "; cin >> baca[i].kodeBuku;
		cout << "Judul Buku   : "; cin >> baca[i].namaBuku;
		cout << "Nama Penulis : "; cin >> baca[i].pengarang;
		cout << "Tahun Terbit : "; cin >> baca[i].tahunTerbit;
		cout << "Harga        : "; cin >> baca[i].hargaBuku;
		cout << "================================" << endl;
	}
	cout << "KODE\tJUDUL\tPENULIS\tHARGA" << endl;
	
	for (int i = 0; i < inputan; i++){
		cout << baca[i].kodeBuku << "\t" << baca[i].namaBuku << "\t" << baca[i].pengarang << "\t" << baca[i].tahunTerbit << "\t" << baca[i].hargaBuku << endl;
	}
}
