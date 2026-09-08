#include <stdio.h>

int main() {
    int kos, makan, transportasi, internet, kuliah;
    int total;

    printf("=== KALKULASI PENGELUARAN MAHASISWA PENS ===\n");

    printf("Pengeluaran kos per bulan : Rp ");
    scanf("%d", &kos);

    printf("Pengeluaran makan per bulan : Rp ");
    scanf("%d", &makan);

    printf("Pengeluaran transportasi per bulan : Rp ");
    scanf("%d", &transportasi);

    printf("Pengeluaran pulsa/internet per bulan : Rp ");
    scanf("%d", &internet);

    printf("Pengeluaran kebutuhan kuliah per bulan : Rp ");
    scanf("%d", &kuliah);

    total = kos + makan + transportasi + internet + kuliah;

    printf("\nTotal pengeluaran dalam sebulan = Rp %d\n", total);

    return 0;
}