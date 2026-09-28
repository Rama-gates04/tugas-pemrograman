/* File program: pilihan2.c
Untuk membaca tombol Y atau T */
#include <stdio.h>

int main()
{
    char pilihan;
    int sudah_benar;

    printf("Pilihlah Y atau T.\n");

    /* program dilanjutkan kalau tombol Y, y, T atau t ditekan */
    do
    {
        pilihan = getchar(); /* baca tombol */
        sudah_benar = (pilihan == 'Y') || (pilihan == 'y') ||
                      (pilihan == 'T') || (pilihan == 't');
    } while (!sudah_benar);

    /* memberi keterangan tentang pilihan */
    switch (pilihan)
    {
        case 'Y':
        case 'y':
            puts("\nPilihan anda adalah Y");
            break;
        case 'T':
        case 't':
            puts("\nPilihan anda adalah T");
            break;
    }
}

Pilihlah Y atau T.
T

Pilihan anda adalah T