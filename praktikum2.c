1.include <stdio.h>

int main() {
    int i;

    // Membaca inputan bilangan i
    printf("Masukkan bilangan integer: ");
    scanf("%d", &i);

    // Menentukan apakah bilangan i positif, nol, atau negatif
    if (i == 0) {
        printf("Bilangan %d adalah nol\n", i);
    } else if (i > 0) {
        printf("Bilangan %d adalah bilangan bulat positif\n", i);
    } else {
        printf("Bilangan %d adalah bilangan bulat negatif\n", i);
    }

    return 0;
}

2.#include <stdio.h>

int main() {
    int nomor_hari;

    printf("Masukkan nomor hari (1 sampai 7): ");
    scanf("%d", &nomor_hari);

    if (nomor_hari < 1 || nomor_hari > 7) {
        printf("Masukan nomor hari tidak tepat\n");
    } else {
        // Menampilkan nama hari berdasarkan nomor_hari
        if (nomor_hari == 1) {
            printf("Hari ini adalah Senin\n");
        } else if (nomor_hari == 2) {
            printf("Hari ini adalah Selasa\n");
        } else if (nomor_hari == 3) {
            printf("Hari ini adalah Rabu\n");
        } else if (nomor_hari == 4) {
            printf("Hari ini adalah Kamis\n");
        } else if (nomor_hari == 5) {
            printf("Hari ini adalah Jumat\n");
        } else if (nomor_hari == 6) {
            printf("Hari ini adalah Sabtu\n");
        } else if (nomor_hari == 7) {
            printf("Hari ini adalah Minggu\n");
        }
    }

    return 0;
}

3.#include <stdio.h>

int main() {
    int nomor_bulan;
    printf("Masukkan nomor bulan (1 sampai 12): ");
    scanf("%d", &nomor_bulan);

      if (nomor_bulan < 1 || nomor_bulan > 12) {
        printf("Masukan nomor bulan tidak tepat\n");
    } else {
        // Menampilkan nama bulan berdasarkan nomor_bulan
        if (nomor_bulan == 1) {
            printf("Bulan ini adalah Januari\n");
        } else if (nomor_bulan == 2) {
            printf("Bulan ini adalah Februari\n");
        } else if (nomor_bulan == 3) {
            printf("Bulan ini adalah Maret\n");
        } else if (nomor_bulan == 4) {
            printf("Bulan ini adalah April\n");
        } else if (nomor_bulan == 5) {
            printf("Bulan ini adalah Mei\n");
        } else if (nomor_bulan == 6) {
            printf("Bulan ini adalah Juni\n");
        } else if (nomor_bulan == 7) {
            printf("Bulan ini adalah Juli\n");
        } else if (nomor_bulan == 8) {
            printf("Bulan ini adalah Agustus\n");
        } else if (nomor_bulan == 9) {
            printf("Bulan ini adalah September\n");
        } else if (nomor_bulan == 10) {
            printf("Bulan ini adalah Oktober\n");
        } else if (nomor_bulan == 11) {
            printf("Bulan ini adalah November\n");
        } else if (nomor_bulan == 12) {
            printf("Bulan ini adalah Desember\n");
        }
    }

    return 0;
}

4.#include <stdio.h>

int main() {
    float tahanan1, tahanan2, tahanan3, total_tahanan;

    // masukan tahanan 
    printf("Masukkan nilai tahanan 1: ");
    scanf("%f", &tahanan1);
    printf("Masukkan nilai tahanan 2: ");
    scanf("%f", &tahanan2);
    printf("Masukkan nilai tahanan 3: ");
    scanf("%f", &tahanan3);

    // Memastikan tahanan tidak negatif
    if (tahanan1 <= 0 || tahanan2 <= 0 || tahanan3 <= 0) {
        printf("Masukan tahanan tidak boleh negatif\n");
    } else {
        // Menghitung total tahanan 
        total_tahanan = tahanan1 + tahanan2 + tahanan3;
        printf("Total tahanan jika dirangkai seri: %.2f\n", total_tahanan);
    }

    return 0;
}

5.#include <stdio.h>

int main() {
    int sisi1, sisi2, sisi3;

    // masukan sisi-sisi segitiga 
    printf("Masukkan panjang sisi 1: ");
    scanf("%d", &sisi1);
    printf("Masukkan panjang sisi 2: ");
    scanf("%d", &sisi2);
    printf("Masukkan panjang sisi 3: ");
    scanf("%d", &sisi3);

    // Memastikan semua sisi adalah bilangan bulat positif (>0)
    if (sisi1 <= 0 || sisi2 <= 0 || sisi3 <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga\n");
    } else {
        // Menentukan jenis segitiga
        if (sisi1 == sisi2 && sisi2 == sisi3) {
            printf("Segitiga Sama Sisi\n");
        } else if (sisi1 == sisi2 || sisi1 == sisi3 || sisi2 == sisi3) {
            printf("Segitiga Sama Kaki\n");
        } else {
            printf("Segitiga Sembarang\n");
        }
    }

    return 0;
}

6.#include <stdio.h>

int main() {
    int iA, iB;
    char pilihan;

    
    printf("Masukkan bilangan pertama (iA): ");
    scanf("%d", &iA);
    printf("Masukkan bilangan kedua (iB): ");
    scanf("%d", &iB);
    printf("Masukkan pilihan operasi (a, b, c, d, e, f): ");
    scanf(" %c", &pilihan);

    if (pilihan == 'a') {
        printf("Hasil %d + %d = %d\n", iA, iB, iA + iB);
    } else if (pilihan == 'b') {
        printf("Hasil %d - %d = %d\n", iA, iB, iA - iB);
    } else if (pilihan == 'c') {
        printf("Hasil %d * %d = %d\n", iA, iB, iA * iB);
    } else if (pilihan == 'd') {
        if (iB != 0) {
            printf("Hasil %d / %d = %.2f\n", iA, iB, (float)iA / iB);
        } else {
            printf("Tidak bisa melakukan pembagian dengan nol\n");
        }
    } else if (pilihan == 'e') {
        if (iB != 0) {
            printf("Hasil %d div %d = %d\n", iA, iB, iA / iB);
        } else {
            printf("Tidak bisa melakukan pembagian dengan nol\n");
        }
    } else if (pilihan == 'f') {
        if (iB != 0) {
            printf("Hasil %d mod %d = %d\n", iA, iB, iA % iB);
        } else {
            printf("Tidak bisa melakukan operasi modulus dengan nol\n");
        }
    } else {
        printf("Bukan pilihan menu yang benar\n");
    }

    return 0;
}
