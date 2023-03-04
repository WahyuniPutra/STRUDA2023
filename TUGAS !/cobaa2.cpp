#include <iostream>

using namespace std;

int buku1 = 5;
int buku2 = 0;
bool buku3 = false;

struct perpus{
	char kodeBuku[10];
	char namaBuku[50];                          
	char pengarang[20];
    char  tahunTerbit[20];
	char  hargaBuku[20];
};

bool cekKodeBuku(perpus xp[], char kodeBuku){

  for (int i = 0; i < buku2; i++)
  {
    if (xp[i].kodeBuku == kodeBuku)
    {
      return true;
    }
  }
  return false;
}

void inputdetail(perpus xp[], char xxp){
	cout << "KODE BUKU    : "; getline(cin >> ws, xp[xxp].kodeBuku);
	cout << "JUDUL BUKU   : "; getline(cin >> ws, xp[xxp].namaBuku);
	cout << "NAMA PENULIS : "; getline(cin >> ws, xp[xxp].pengarang);
	cout << "TAHUN TERBIT : "; getline(cin >> ws, xp[xxp].tahunTerbit);
	cout << "HARGA        : "; getline(cin >> ws, xp[xxp].hargaBuku);
}

int main(){
	inputdetail();
}
