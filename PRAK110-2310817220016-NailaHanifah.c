#include <stdio.h>
#include <math.h>
int main(){
    int alas = 5;
    int tinggi = 12;
    int sisi_a = alas;
    int sisi_b = tinggi;
    double sisi_c = sqrt(alas * alas + tinggi * tinggi);
    double keliling = sisi_a + sisi_b + sisi_c;
    double luas = 0.5 * alas * tinggi;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm \n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", sisi_a);
    printf("Sisi B = %d cm\n", sisi_b);
    printf("Sisi C = %.2fcm\n", sisi_c);
    printf("Keliling = %.2fcm\n", keliling);
    printf("Luas = %.2fcm\n", luas);
    return 0;
}