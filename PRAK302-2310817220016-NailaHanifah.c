#include <stdio.h>

int main() {
    int nilai;
    char konversi;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        konversi = 'A';
    } else if (nilai >= 70 && nilai <= 79) {
        konversi = 'B';
    } else if (nilai >= 60 && nilai <= 69) {
        konversi = 'C';
    } else if (nilai >= 50 && nilai <= 59) {
        konversi = 'D';
    } else {
        konversi = 'E';
    }

    printf("Output: %c\n", konversi);

    return 0;
}
