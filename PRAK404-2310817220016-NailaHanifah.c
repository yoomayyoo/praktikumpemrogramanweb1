#include <stdio.h>

int main() {
    int pilihan;
    float nilaiPertama, nilaiKedua;

    do {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nilaiPertama);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nilaiKedua);

            switch (pilihan) {
                case 1:
                    printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, nilaiPertama + nilaiKedua);
                    break;
                case 2:
                    printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, nilaiPertama - nilaiKedua);
                    break;
                case 3:
                    printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, nilaiPertama * nilaiKedua);
                    break;
                case 4:
                    if (nilaiKedua != 0) {
                        printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f\n", nilaiPertama, nilaiKedua, nilaiPertama / nilaiKedua);
                    } else {
                        printf("Pembagian oleh nol tidak valid.\n");
                    }
                    break;
            }
        } else if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Naila Hanifah\n");
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    } while (pilihan != 5);

    return 0;
}