#include <stdio.h>
int main(){
    int putaran = 5;
    float jarak_tempuh = 14.0;
    float jarak_putaran = jarak_tempuh / putaran;
    float jari_jari_taman = jarak_putaran / (2 * 3.14); // 3.14 adalah nilai phi
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.2f Kilometer\n", jarak_tempuh);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari_taman);
    return 0;
}