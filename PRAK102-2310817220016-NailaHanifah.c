#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    double hasil = ((double)a * b) / c;
    printf("Hasil dari a dikali b dibagi c adalah %.6lf\n", hasil);
    return 0;
}