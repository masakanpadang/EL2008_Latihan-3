#include <stdio.h>
#include <stdlib.h>

struct mhs {
    char nama[30];
    int nim;
    float hadir;
};

int main()
{
    int jml;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jml);
    struct mhs kelas[jml];

    int i;
    for (i=0; i < jml; i++){
        printf("Masukkkan nama mahasiswa: ");
        scanf("%s", &kelas[i].nama);
        printf("Masukkkan NIM: ");
        scanf("%d", &kelas[i].nim);
        printf("Masukkkan persentase kehadiran: ");
        scanf("%f", &kelas[i].hadir);
        printf("\n");
    }
    printf("\n");
    printf("====================\n");
    printf("Berikut daftar mahasiswa yang memiliki kehadiran kurang dari 80 persen:\n");

    for (i=0; i < jml; i++){
        if (kelas[i].hadir < 80){
            printf("%s %d\n", kelas[i].nama, kelas[i].nim);
        }
    }
}
