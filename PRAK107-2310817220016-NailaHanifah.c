#include <stdio.h>
int main(){
    int sisi_1 = 4;
    int sisi_2 = 5;
    int sisi_3 = 7;
    int keliling_tanah = sisi_1 + sisi_2 + sisi_3;
    int harga_per_meter = 85000;
    int biaya = keliling_tanah * harga_per_meter;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi_1, sisi_2, sisi_3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling_tanah);
    printf("Harga tanah Per Meter adalah Rp %d\n", harga_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n",biaya);
    return 0;
}