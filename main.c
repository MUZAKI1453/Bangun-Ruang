#include <stdio.h>

int main() {
    int pilihan;
    float panjang, lebar, tinggi, jari_jari, volume;


    printf("Pilih bentuk bangun ruang:\n");
    printf("1. Kubus\n");
    printf("2. Balok\n");
    printf("3. Silinder\n");
    printf("4. Bola\n");
    printf("5. Keluar\n");
    printf("Masukkan pilihan anda (Masukkan Angka saja): ");
    scanf( "%d", &pilihan);


    if (pilihan == 1) {
        printf("Masukkan panjang sisi: ");
        scanf("%f", &panjang);
        volume = panjang * panjang * panjang;
        printf("Volume kubus: %.2f\n", volume);
    } else if (pilihan == 2) {
        printf("Masukkan panjang: ");
        scanf("%f", &panjang);
        printf("Masukkan lebar: ");
        scanf("%f", &lebar);
        printf("Masukkan tinggi: ");
        scanf("%f", &tinggi);
        volume = panjang * lebar * tinggi;
        printf("Volume balok: %.2f\n", volume);
    } else if (pilihan == 3) {
        printf("Masukkan jari-jari: ");
        scanf("%f", &jari_jari);
        printf("Masukkan tinggi: ");
        scanf("%f", &tinggi);
        volume = 3.14 * jari_jari * jari_jari * tinggi;
        printf("Volume silinder: %.2f\n", volume);
    } else if (pilihan == 4) {
        printf("Masukkan jari-jari: ");
        scanf("%f", &jari_jari);
        volume = (4.0 / 3.0) * 3.14 * jari_jari * jari_jari * jari_jari;
        printf("Volume bola: %.2f\n", volume);
    } else if (pilihan == 5) {
        printf("mengakhiri program. \n");
        return 0;
    } else {
        printf("Pilihan tidak valid. \n");
    }

    return 0;
}
