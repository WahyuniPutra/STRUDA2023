#include <iostream>
#include <string>

using namespace std;

int jumlah_buku = 5;
int jumlah_buku_saat_ini = 0;
bool sudah_penuh = false;

struct Buku
{
  string kode;
  string nama;
  int tahun;
  string pengarang;
  int harga;
};

bool cek_kode_buku(Buku lb[], string kode)
{

  for (int i = 0; i < jumlah_buku_saat_ini; i++)
  {
    if (lb[i].kode == kode)
    {
      return true;
    }
  }
  return false;
}

void isi_buku(Buku lb[], int idx)
{
  cout << "NAMA     : ";
  getline(cin >> ws, lb[idx].nama);
  cout << "TAHUN    : ";
  cin >> lb[idx].tahun;
  cout << "PENGARANG: ";
  getline(cin >> ws, lb[idx].pengarang);
  cout << "HARGA    : ";
  cin >> lb[idx].harga;
}

void display(Buku lb[])
{
  cout << "KODE\tNAMA\tTAHUN\tPENGARANG\tHARGA" << endl;
  for (int i = 0; i < jumlah_buku_saat_ini; i++)
  {
    cout << lb[i].kode << '\t' << lb[i].nama << '\t' << lb[i].tahun << '\t' << lb[i].pengarang << '\t' << lb[i].harga << endl;
  }
  if (jumlah_buku_saat_ini < 1)
  {
    cout << "BUKU SEDANG KOSONG!" << endl;
  }
}

void add(Buku lb[])
{
  string kode;
  if (sudah_penuh)
  {
    cout << "TIDAK BISA MENAMBAHKAN BUKU KARENA SUDAH PENUH!" << endl;
  }
  else
  {
    cout << "KODE     : ";
    getline(cin >> ws, kode);
    if (!cek_kode_buku(lb, kode))
    {
      lb[jumlah_buku_saat_ini].kode = kode;
      isi_buku(lb, jumlah_buku_saat_ini);
      jumlah_buku_saat_ini++;
      if (jumlah_buku_saat_ini == jumlah_buku)
      {
        sudah_penuh = true;
      }
    }
    else
    {
      cout << "BUKU SUDAH ADA!" << endl;
    }
  }
}

void update(Buku lb[])
{
  string kode;
  display(lb);
  cout << "KODE BUKU YANG INGIN DI PERBARUI: ";
  getline(cin >> ws, kode);
  if (cek_kode_buku(lb, kode))
  {
    if (jumlah_buku_saat_ini < 1)
    {
      cout << "BUKU KOSONG!" << endl;
    }
    else
    {
      for (int i = 0; i < jumlah_buku_saat_ini; i++)
      {
        if (lb[i].kode == kode)
        {
          isi_buku(lb, i);
          break;
        }
      }
    }
  }
  else
  {
    cout << "BUKU YANG INGIN DIPERBARUI TIDAK ADA!" << endl;
  }
}

void remove(Buku lb[])
{
  string kode;
  display(lb);
  cout << "KODE BUKU YANG INGIN DI HAPUS: ";
  getline(cin >> ws, kode);
  if (cek_kode_buku(lb, kode))
  {
    if (jumlah_buku_saat_ini < 1)
    {
      cout << "BUKU KOSONG!" << endl;
    }
    else
    {
      for (int i = 0; i < jumlah_buku_saat_ini; i++)
      {
        if (lb[i].kode == kode)
        {
          for (int j = i + 1; j < jumlah_buku_saat_ini; j++)
          {
            lb[i] = lb[j];
          }
          jumlah_buku_saat_ini--;
          sudah_penuh = false;
          break;
        }
      }
    }
  }
  else
  {
    cout << "BUKU YANG INGIN DIHAPUS TIDAK ADA!" << endl;
  }
}

int main()
{
  system("cls || clear");
  Buku list_buku[jumlah_buku];
  bool keluar = false;
  int n;
  while (!keluar)
  {
    cout << endl
         << "MENU MANAJEMEN BUKU" << endl;
    cout << " 1) Lihat" << endl;
    cout << " 2) Tambah" << endl;
    cout << " 3) Perbarui" << endl;
    cout << " 4) Hapus" << endl;
    cout << " 5) Keluar" << endl
         << endl;
    cout << "PILIH MENU: ";
    cin >> n;
    system("cls || clear");
    switch (n)
    {
    case 1:
      display(list_buku);
      break;
    case 2:
      add(list_buku);
      break;
    case 3:
      update(list_buku);
      break;
    case 4:
      remove(list_buku);
      break;
    case 5:
      keluar = true;
      break;
    default:
      cout << "MENU YANG DIPILIH TIDAK ADA!" << endl;
    }
  }
}
