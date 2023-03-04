/*KELOMPOK STRUKTUR DATA KELAS A: 
 1. Atong Nazarius   223010503019
 2. Ferry Saputra    223010503025
 3. Rifky Mustaqim H 223010503028
 4. Ryan Delon P     223020503059
 5. Wahyuni Putra    223010503020 */

#include <iostream> //memanggil library iostream
#include <string> //memanggil library string
using namespace std; //namespace std

/*struct data yang digunakan pada program*/
struct struda{
string arrayBelanja[7];
int maxData = 7;
int topData = 0;
}isi;

/*Fungsi Cek 1 digunakan untuk mengecek apakah fungsi push masih bisa digunakan atau tidak,
Jika topData >= maxData maka fungsi akan mengembalikan nilai true yg berarti array sudah penuh*/
bool isFull(){
    if(isi.topData >= isi.maxData){
        return true;
    } else {
        return false;
    }
}
 /*Fungsi Cek 2 menggunakan boolean (true dan false), jika nilai didalam topData = 0, maka
 fungsi akan mengembalikan nilai true dan jika tidak maka akan mengembalikan nilai false*/
bool isEmpty(){
    if(isi.topData == 0 ){
        return true;
    } else {
        return false;
    }
}

/* mnghitung size array yg berhasil dibuat, jika array belum dibuat maka fungsi mengembalikan nilai 0
dan jika array sudah dibuat maka nilai yg dikembalikan adalah total dari topData */
int countSize(){
    if(isEmpty()){
        return 0;
    }else{
        return isi.topData;
    }
}

//fungsi push digunakan untuk menambah data didalam array
void pushTasBelanja(string barang){
    if(isFull() == true){ //sebelum melakukan push, fungsi akan mengecek apakah array masih tersedia
        cout << "Isi Tas Belanja Penuh!" << endl; //Jika array penuh (max data 7) maka fungsi dijalankan
    }else{
        cout << "Masukkan Barang : "; getline (cin >> ws, barang); // mengambil inputan user
        isi.arrayBelanja[isi.topData] = barang; //nilai yang diterima parameter akan disimpan oleh topdata
        isi.topData++; //penambahan data (+1) setiap inputan user
    }
}

/*fungsi pop digunakan untuk mengeluarkan data yang terakhir kali diinput user (Last In First Out)
setelah berhasil di pop maka sisa data akan ditampilkan, jika user belum mengisi data melalui push
maka statement pertama akan dijalankan*/
void popTasBelanja(){
 if(isEmpty()){ //fungsi 2 mengecek keadaan array
        cout << "Isi Tas Belanja Kosong!" << endl; //jika data belum dimasukan maka statement dijalankan
    }else{
        isi.arrayBelanja[isi.topData-1] = ""; //jika data sudah ada, maka data yang terakhir kali masuk dikurangi
        isi.topData--; //data akan dikurangi 1
    }
    cout << "" << endl; // enter
    cout << "Berhasil Melakukan Pop!" << endl; //statement yang dijalankan ketika berhasil pop
    for(int i = isi.maxData-1; i >=0;i--){ // digunakan untuk menampilkan sisa data setelah pop
        if (isi.arrayBelanja[i] != ""){
            cout << "Isi Tas Belanja : " << isi.arrayBelanja[i]<< endl;
        }
    }
    cout << "" << endl;
    cout << "Jumlah Isi Tas : " << countSize() << endl; //menghitung jumlah array yang tersisa
} 
 
/*fungsi display digunakan untuk menampilkan semua data didalam array*/
void displayTasBelanja(){
    for(int i = isi.maxData-1; i >=0;i--){ //fungsi pengulangan for untuk membaca data dari array dan mengulang fungsi if
        if (isi.arrayBelanja[i] != ""){ //fungsi if untuk menampilkan data dari array
            cout << "Isi Tas Belanja : " << isi.arrayBelanja[i]<< endl;
        }
    }
    cout << "" << endl;
    cout << "Jumlah Isi Tas : " << countSize() << endl; //menghitung jumlah array yang tersisa
}

/*fungsi peek digunakan untuk mencari/menampilkan data sesuai index, misalnya user menginput 1 maka
data didalam index 1 akan ditampilkan*/
void peekIsiTas(int posisi){
    if(isEmpty()){ //fungsi 2 mengecek keadaan array
        cout << "Isi Tas Kosong!" << endl; //Jika array kosong maka statement akan dijalankan
    }else{
        int posisiIndex = isi.topData; //inisiasi variabel untuk mencari index
        for(int i = 0; i < posisi; i++){ //fungsi pengulangan for untuk membaca data dari array
            posisiIndex--; //merupakan posisi dari data pada array
        }
        cout << "Isi Barang Posisi Ke - ";cin >> posisiIndex; //inputan nomor indeks data
        cout << "Isi Index Adalah : " << isi.arrayBelanja[posisiIndex]; //inisiasi menampilkan data dari array menurut inputan nomor indeks
    }
}
 
/*fungsi clear akan menghapus isi data didalam array*/
void clearIsiTasBelanja(){
    for(int i = 0; i < isi.topData; i++){ //fungsi pengulangan for untuk membaca data dari array dan mengulang inisiasi penghapusan data pada array
        isi.arrayBelanja[i] = ""; //inisiasi penghapusan data pada array
    }
    for(int i = 0; i < isi.topData; i++){ //fungsi pengulangan for untuk membaca data dari array dan mengulang inisiasi reset integer array(counter)
            isi.topData = 0; //inisiasi reset integer array(counter)
    }
    cout << "" << endl;
    cout << "Berhasil Melakukan Clear!" << endl; //statement yang akan dijalankan jika berhasil melakukan clear
}

/*void ganti akan mengubah isi array sesuai index yang dimasukan oleh user misalnya jika user
ingin mengganti nilai dari index 1 maka user akan menginput index kemudian memasukan 
nilai baru pada array tersebut*/
void ganti(string belanja, int posisi){
    if(isEmpty()){ //mengecek keadaan array
        cout << "Isi Tas Belanja Kosong!" << endl; //jika array kosong maka fungsi akan dijalankan
    }else{
        int posisiIndex = isi.topData;
        cout << "Masukkan Posisi Index : ";cin >> posisiIndex; //inputan index
        cout << "Masukkan Nama Barang  : "; getline (cin >> ws, belanja); //inputan nilai/value baru
        for(int i = 0; i < posisi; i++){ //fungsi pengulangan for untuk membaca data dari array 
            posisiIndex--; //merupakan posisi dari data pada array
        }
        isi.arrayBelanja[posisiIndex] = belanja;
    }
}
 
/*fungsi exit merupakan fungsi yang dijalankan jika pengguna ingin mengakhiri program*/
void exit(){
    cout << "Terimakasih" << endl;
}

/*program utama yang akan dijalankan oleh user*/
int main(){
	string belanja;
	int posisi;
	string barang;
MainMenu: //label yang digunakan untuk kembali ke menu utama
system("cls"); //membersihkan tampilan layar
cout << "==========================" << endl;
cout << "------ Tas Belanja -------" << endl;
cout << "==========================" << endl;
cout << "Menu : " << endl;
cout << "\n1. Push \n2. Pop \n3. Change \n4. Peek \n5. Display\n6. Clear \n7. Exit" << endl; //menu
int x;
char in; //inisiasi variabel yang digunakan oleh switch dan percabangan if
cout << endl;
cout << "Masukkan Pilihan : ";
cin >> x; // menyimpan value yang akan dijalankan oleh switch
switch (x){
case 1 :
   do {pushTasBelanja(barang);
       cout << "Masukkan Barang Lagi? (Y/T) : "; cin >> x;
      } 
   while (toupper(in) == 'T');
   if (in == 'T'){
    goto MainMenu;
   }
   break;
case 2 :
   popTasBelanja();
   bb:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl;
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
   exit();
   }else{
    goto bb;
   }
   break;
case 3 :
   do { ganti(belanja, posisi);
   cout << "Masukkan Barang Lagi ? (Y/T)" << endl;
   cout << "Pilih : "; cin >> x;} while (toupper(x) == 'Y');
   goto MainMenu; 
   break;
case 4 :
   peekIsiTas(posisi);
   dd:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl;
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
    exit();
   }else{
    goto dd;
   }
   break;
case 5 :
displayTasBelanja();
ee:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl;
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
     exit();
   }else{
    goto ee;
   }
break;
case 6 :
clearIsiTasBelanja();
ff:
   cout << "\n1. Kembali Ke Menu Utama \n2. Keluar" << endl; 
   cout << "Pilih : "; cin >> x;
   if(x == 1){
    goto MainMenu;
   }else if(x == 2){
    exit();
   }else{
    goto ff;
   }
   break;
default:
  exit();
    break;
}
}
 
//223010503020
//223010503019
//223020503059
//223010503025
//223010503028