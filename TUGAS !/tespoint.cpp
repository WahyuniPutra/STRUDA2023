#include <stdio.h>
 
typedef struct
{
    int tgl;
    int bln;
    int th;
}Tanggal;
 
typedef struct
{
    char noID[5];
    char nama[30];
    char jenis_kelamin;
    Tanggal t;
}KTP;
 
typedef struct
{
    KTP ktp;
    int jml;
}Data_KTP;
 
void inputDataKTP(Data_KTP *p)
{
    printf("Masukkan jumlah data: ");
    scanf("%d", &p->jml);
	printf("Masukkan nomor identitas: ");
    scanf("%s", p->ktp.noID);
    printf("Masukkan nama: ");
    scanf("%s", p->ktp.nama);
    printf("Masukkan jenis kelamin (L/P): ");
    scanf(" %c", &p->ktp.jenis_kelamin);
    printf("Masukkan tanggal lahir (dd mm yyyy): ");
    scanf("%d %d %d", &p->ktp.t.tgl, &p->ktp.t.bln, &p->ktp.t.th);
}
 
int main()
{
    Data_KTP data_ktp;
    Data_KTP *p;
    p = &data_ktp;
 
    inputDataKTP(p);
 
    printf("\nData KTP:\n");
    printf("Nomor identitas: %s\n", p->ktp.noID);
    printf("Nama: %s\n", p->ktp.nama);
    printf("Jenis kelamin: %c\n", p->ktp.jenis_kelamin);
    printf("Tanggal lahir: %d/%d/%d\n", p->ktp.t.tgl, p->ktp.t.bln, p->ktp.t.th);
    printf("Jumlah data: %d\n", p->jml);
 
    return 0;
}
