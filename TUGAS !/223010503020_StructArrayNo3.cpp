#include <iostream>
#include <string>

using namespace std;

struct telegram{
	string namaDepan;
	string namaBelakang;
	int kodeAktif;
	string emailUSer;
	int nomor;
};

struct bpjs{
	string namaDepan;
	string namaBelakang;
	int ttl;
	string alamat;
};

void inputtelegram(){
	telegram user;{
		system("cls");
		cout << "==========================================================" << endl;
		cout << "-------------------- TELEGRAM LOGIN ----------------------" << endl;
		cout << "==========================================================" << endl;
		cout << "NAMA DEPAN     \t\t: "; getline(cin >> ws, user.namaDepan);
		cout << "NAMA BELAKANG  \t\t: "; getline(cin >> ws, user.namaBelakang);
		cout << "MASUKKAN NO HP \t\t: "; cin >> user.nomor;
		cout << "MASUKKAN EMAIL \t\t: "; cin >> user.emailUSer;
		cout << "MASUKKAN KODE  \t\t: "; cin >> user.kodeAktif;
	}
	cout << "NAMA DEPAN\tNAMA BELAKANG\tNO HP\tEMAIL\tKODE" << endl;
	cout << user.namaDepan << "\t" << user.namaBelakang << "\t" << user.nomor << "\t" << user.emailUSer << "\t" << user.kodeAktif << endl;
}

void pasien(){
	bpjs sakit;{
		system("cls");
	    cout << "==========================================================" << endl;
		cout << "------------------------- BPJS LOGIN ---------------------" << endl;
		cout << "==========================================================" << endl;
		cout << "NAMA DEPAN   \t\t: "; getline(cin >> ws, sakit.namaDepan);
		cout << "NAMA BELAKANG \t\t: "; getline(cin >> ws, sakit.namaBelakang);
		cout << "TTL           \t\t: "; cin >> sakit.ttl;
		cout << "ALAMAT        \t\t: "; getline(cin >> ws, sakit.alamat);
	}
	cout << "NAMA DEPAN\tNAMA BELAKANG\tTTL\tALAMAT" << endl;
	cout << sakit.namaDepan << "\t" << sakit.namaBelakang << "\t" << sakit.ttl << "\t" << sakit.alamat << endl;
}

int main (){
	int x;
	cout << "=======================" << endl;
	cout << "---- CONTOH STRUCT ----" << endl;
	cout << "=======================" << endl;
	cout << "1. TELEGRAM" << endl;
	cout << "2. BPJS" << endl;
	cout << "PILIH APLIKASI : "; cin >> x;
	if (x<=1){
	inputtelegram();	
	} else {
		{
	pasien();
		}
	}
	return 0;
}
