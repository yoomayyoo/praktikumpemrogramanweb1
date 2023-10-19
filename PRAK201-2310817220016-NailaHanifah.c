#include <stdio.h>

int main() {
    char nama[30];
    char nim[20];
    char kelas_paralel[3];
    char tempat_tanggal_lahir[10];
    char alamat[40];
    char hobby[15];
    char no_hp[20];
    
    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM: ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel: ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);
    printf("Tempat/Tanggal Lahir: ");
    fgets(tempat_tanggal_lahir, sizeof(tempat_tanggal_lahir), stdin);
    printf("Alamat: ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby: ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. Hp: ");
    fgets(no_hp, sizeof(no_hp), stdin);
    printf("Nama: %s", nama);
    printf("NIM: %s", nim);
    printf("Kelas Paralel: %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir: %s/%s", tempat_tanggal_lahir);
    printf("Alamat: %s", alamat);
    printf("Hobby: %s", hobby);
    printf("No. Hp: %s", no_hp);

    return 0;
}