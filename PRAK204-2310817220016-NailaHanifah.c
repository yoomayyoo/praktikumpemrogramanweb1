#include <stdio.h>
#include <math.h>
int main() {
    double A, B, C, alas, tinggi, keliling, luas;
    scanf("%1f", &A);
    scanf("%1f", &B);
    C = sqrt(B * B - A * A);
    alas = C;
    tinggi = A;
    keliling = A + B + C;
    luas = A * C * 0.5;
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);
    return 0;
}