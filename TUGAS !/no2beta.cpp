#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

struct data_buku{
		char KodeBuku[10];
		char NamaBuku[75]; 
		int terbit;
		char Penulis[40];
		char HargaBuku[10];
	};
data_buku buku[10];

	
int main()
{
	int a=0;
	int pilih;
	int short b;
   	char pil;
	MainMenu:
	system("cls");
	cout << "============================" << endl;
	cout << "----- Data Detail Buku -----" << endl;
	cout << "============================" << endl;
	cout << "pilihan menu: \n\n1. TAMBAH \n2. EDIT \n3. HAPUS \n4. TAMPIL \n5. EXIT" << endl<< endl; 
	cout << "Pilih menu: ";
	cin >> pilih;
	switch(pilih) {
      case 1 :
		 system("cls");
			cout<<" Kode Buku      : "; fflush(stdin); gets(buku[a].KodeBuku);
 			cout<<" Nama Buku      : "; fflush(stdin); gets(buku[a].NamaBuku);
    		cout<<" Pengarang      : "; fflush(stdin); gets(buku[a].Penulis);
    		cout<<" Tahun Terbit   : "; cin >> buku[a].terbit;
    		cout<<" Harga Buku(Rp) : "; fflush(stdin); gets(buku[a].HargaBuku);
    		cout<<"\n\n";
    		a=a+1;
		 aa:
		    cout << "\n\n1. Kembali ke menu utama \n2. keluar\n";
            cin >> pilih;
		      if (pilih==1){
			    goto MainMenu;
		        }
		      else if(pilih==2){
			    exit(0);
		        }
		      else
		 	  goto aa;
		 
      case 2 :
      	
      	ulang:
      	    cout << "PILIH NO BUKU : "; cin >> b;
      	    //menampilkan data saat ini
      	    cout<<"Kode Buku      : "<< buku[b-1].KodeBuku << endl;
 			cout<<"Nama Buku      : "<< buku[b-1].NamaBuku << endl;
    		cout<<"Pengarang      : "<< buku[b-1].Penulis << endl;
    		cout<<"Tahun Terbit   : "<< buku[b-1].terbit << endl;
    		cout<<"Harga Buku(Rp) : "<< buku[b-1].HargaBuku << endl;
    		cout<<"\n\n";
    		cout << "APAKAH ANDA YAKIN???(y/n)"; cin >> pil;
    		if (pil == 'n'){
				   goto ulang;	}
      	    //masukkan data baru
      		cout<<" Kode Buku      : "; fflush(stdin); gets(buku[b-1].KodeBuku);
 			cout<<" Nama Buku      : "; fflush(stdin); gets(buku[b-1].NamaBuku);
    		cout<<" Pengarang      : "; fflush(stdin); gets(buku[b-1].Penulis);
    		cout<<" Tahun Terbit   : "; cin >> buku[b-1].terbit;
    		cout<<" Harga Buku(Rp) : "; fflush(stdin); gets(buku[b-1].HargaBuku);
    		cout<<"\n\n";
    		
    		bb:
		    cout << "\n\n1. Kembali ke menu utama \n2. keluar\n";
            cin >> pilih;
		      if (pilih==1){
			    goto MainMenu;
		        }
		      else if(pilih==2){
			    exit(0);
		        }
		      else
		 	  goto bb;
		 
      case 3 :
         //hapus
      	 balik:
      	    cout << "PILIH NO BUKU : "; cin >> b;
      	    //menampilkan data saat ini
      	    cout<<"Kode Buku      : "<< buku[b-1].KodeBuku << endl;
 			cout<<"Nama Buku      : "<< buku[b-1].NamaBuku << endl;
    		cout<<"Pengarang      : "<< buku[b-1].Penulis << endl;
    		cout<<"Tahun Terbit   : "<< buku[b-1].terbit << endl;
    		cout<<"Harga Buku(Rp) : "<< buku[b-1].HargaBuku << endl;
    		cout<<"\n\n";
    		cout << "APAKAH ANDA YAKIN???(y/n)"; cin >> pil;
    		if (pil == 'n'){
				   goto balik;	}
				   
            buku[b-1]=buku[10];
				   
    		
    		cc:
		    cout << "\n\n1. Kembali ke menu utama \n2. keluar\n";
            cin >> pilih;
		      if (pilih==1){
			    goto MainMenu;
		        }
		      else if(pilih==2){
			    exit(0);
		        }
		      else
		 	  goto cc;
      case 4 :
         system("cls");
         cout<<"No      "<<" Kode Buku      "<<"Nama Buku      "<<"Tahun Terbit      "<<"Pengarang      "<<"Harga Buku      ";
 		 cout<<"\n\n";
		 for(int i=0;i<a;i++){
		 	cout<<i+1;
		 	if(buku[i].terbit==0){
			 for(int x=0;x<5;x++){
				 cout<<setw(15)<<" - ";
			 }
				 
			 }
			 else{
			cout<<"\t "<< buku[i].KodeBuku;
 			cout<<"\t\t"<< buku[i].NamaBuku;
    		cout<<"\t\t"<< buku[i].Penulis;
    		cout<<"\t\t"<< buku[i].terbit;
    		cout<<"\t\t"<< buku[i].HargaBuku;}
    		cout<<"\n\n";
		 }
		 
		 dd:
		    cout << "\n\n1. Kembali ke menu utama \n2. keluar\n";
            cin >> pilih;
		      if (pilih==1){
			    goto MainMenu;
		        }
		      else if(pilih==2){
			    exit(0);
		        }
		      else
		 	  goto dd;
	  case 5:
	  	exit(0);	   
      default :
      	goto MainMenu;
      	
   }
	return 0;
}
