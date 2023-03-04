#include <iostream>
#include <cstring>

using namespace std;

typedef struct
{
  int tgl;
  int bln;
  int th;
} Tanggal;

typedef struct
{
  char noID[5];
  char nama[30];
  char jenis_kelamin[1]; // ’L’ atau ‘P’
  Tanggal tl;
} KTP;
typedef struct
{
  KTP ktp;
} Data_KTP;

// boleh diubah
const int jumlah_Data = 50;

// tidak boleh diubah!
int jumlahData = 0;

Data_KTP data_ktp;
Data_KTP *p = &data_ktp;
Data_KTP list_ktp[jumlah_Data];

void getData()
{
  cout << "=============================================" << endl;
  cout << "--------------- DATA KTP ANDA ---------------" << endl;
  cout << "=============================================" << endl;
  cout << "No ID             : " << p->ktp.noID << endl;
  cout << "Nama              : " << p->ktp.nama << endl;
  cout << "Jenis Kelamin[L/P]: " << p->ktp.jenis_kelamin << endl;
  cout << "Tanggal Lahir     : " << p->ktp.tl.tgl << endl;
  cout << "Bulan Lahir       : " << p->ktp.tl.bln << endl;
  cout << "Tahun Lahir       : " << p->ktp.tl.th << endl;
}

void setData()
{
  cout << "Nama              : "; cin >> p->ktp.nama;
  cout << "Jenis Kelamin[L/P]: "; cin >> p->ktp.jenis_kelamin;
  cout << "Tanggal Lahir     : "; cin >> p->ktp.tl.tgl;
  cout << "Bulan Lahir       : "; cin >> p->ktp.tl.bln;
  cout << "Tahun Lahir       : "; cin >> p->ktp.tl.th;
}

bool checkID(char id[5])
{
  for (Data_KTP i : list_ktp)
  {
    Data_KTP *pp = &i;
    if (strcmp(pp->ktp.noID, id) == 0)
    {
      return true;
    }
  }
  return false;
}

void tampilkanData(int idx = -1)
{
  if (jumlahData < 1)
  {
    cout << "Data KTP Tidak Tersedia!" << endl;
  }
  else if (idx > -1 && idx <= jumlahData)
  {
    *p = list_ktp[idx];
    getData();
  }
  else
  {
    for (int i = 0; i < jumlahData; i++)
    {
      *p = list_ktp[i];
      getData();
    }
  }
}

void tambah()
{
  if (jumlahData == jumlah_Data)
  {
    cout << "Data KTP Sudah Penuh!" << endl;
    return;
  }
  while (true)
  {
    cout << "No ID : ";
    cin >> p->ktp.noID;
    if (checkID(p->ktp.noID))
    {
      cout << "ID Sudah Digunakan!" << endl;
    }
    else
    {
      break;
    }
  }

  setData();

  list_ktp[jumlahData] = *p;
  jumlahData++;
}

void kelahiran()
{
  int tahunLahir;
  cout << "Masukkan Tahun Lahir : ";
  cin >> tahunLahir;
  for (int i = 0; i < jumlahData; i++)
  {
    *p = list_ktp[i];

    if (p->ktp.tl.th == tahunLahir)
    {
      tampilkanData(i);
    }
  }
}
void kelamin()
{
  char jenisKelamin[1];
  cout << "Masukkan Jenis Kelamin[L/P] : ";
  cin >> jenisKelamin;
  for (int i = 0; i < jumlahData; i++)
  {
    *p = list_ktp[i];
    if (p->ktp.jenis_kelamin[0] == jenisKelamin[0])
    {
      tampilkanData(i);
    }
  }
}

void editData()
{
  char noID[5];
  cout << "Masukkan ID : ";
  cin >> noID;
  if (!checkID(noID))
  {
    cout << "ID Belum Ada!" << endl;
  }
  for (int i = 0; i < jumlahData; i++)
  {

    *p = list_ktp[i];
    if (!strcmp(p->ktp.noID, noID))
    {
      setData();
      list_ktp[i] = *p;
      cout << "Berhasil Memperbarui Data Dengan ID: " << noID << endl;
      break;
    }
  }
}

void hapus()
{
  char noID[5];
  cout << "Masukkan ID : ";
  cin >> noID;
  if (!checkID(noID))
  {
    cout << "ID Belum Ada!" << endl;
  }

  for (int i = 0; i < jumlahData; i++)
  {

    *p = list_ktp[i];
    if (!strcmp(p->ktp.noID, noID))
    {
      for (int j = i; j < jumlahData; j++)
      {
        list_ktp[i] = list_ktp[i + 1];
      }
      cout << "Data ID " << noID << " Berhasil dihapus!" << endl;
      jumlahData--;
      break;
    }
  }
}

int main()
{
  int pilihan;
  bool keluar = false;
  while (!keluar)
  {
    cout << "----------------------------------------" << endl;
    cout << "================= Menu =================" << endl;
    cout << "----------------------------------------" << endl;
    cout << "1. Tambah Data KTP" << endl;
    cout << "2. Tampilkan Semua Data KTP" << endl;
    cout << "3. Cari KTP Berdasarkan Jenis Kelamin" << endl;
    cout << "4. Cari KTP Berdasarkan Tahun Lahir" << endl;
    cout << "5. Perbarui Data KTP" << endl;
    cout << "6. Hapus Data KTP" << endl;
    cout << "7. Keluar" << endl;
    cout << "========================================" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
      tambah();
      break;
    case 2:
      tampilkanData();
      break;
    case 3:
      kelamin();
      break;
    case 4:
      kelahiran();
      break;
    case 5:
      editData();
      break;
    case 6:
      hapus();
      break;
    default:
      keluar = true;
      cout << "Terima Kasih!" << endl;
      break;
    }
  }
  return 0;
}