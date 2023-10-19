#include <stdio.h>

int main() {
    float a, b, i, j, x, y;
    float hasil;
    printf("Masukkan nilai a, b, i, j, x, y (dipisahkan oleh spasi): ");
    scanf("%f%f%f%f%f%f", &a, &b, &i, &j, &x, &y);
    hasil = (a - b) * i/j - (x + y);
    printf("%.3f\n", hasil);

    return 0;
}