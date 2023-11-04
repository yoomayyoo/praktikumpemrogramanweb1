#include <stdio.h>

int main() {
    int totalDetik, sisaDetik, jam, menit, detik;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &totalDetik);

    jam = totalDetik / 3600;
    sisaDetik = totalDetik % 3600;
    menit = sisaDetik / 60;
    detik = sisaDetik % 60;

    if (totalDetik < 0) {
        printf("Masukan tidak valid.\n");
    } else if (totalDetik < 86400) {
        printf("Output: %02d:%02d:%02d\n", jam, menit, detik);
    } else {
        int hari = totalDetik / 86400;
        int sisaDetikHari = totalDetik % 86400;
        jam = sisaDetikHari / 3600;
        sisaDetik = sisaDetikHari % 3600;
        menit = sisaDetik / 60;
        detik = sisaDetik % 60;
        printf("Output: %d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    }

    return 0;
}
