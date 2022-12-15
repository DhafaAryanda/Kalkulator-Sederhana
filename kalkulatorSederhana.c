#include <stdio.h>
#include <stdlib.h>

void main() {
void penambahan() {
    int bil1, bil2;

    printf("Penjumlahan\n\n");
    printf("Masukkan bilangan pertama\t: ");
    scanf("%i", &bil1);
    printf("Masukkan bilangan kedua\t\t: ");
    scanf("%i", &bil2);
    int hasil = bil1 + bil2;
    printf("\nHasil = %i\n", hasil);
}
void pengurangan() {
    int bil1, bil2;

    printf("Pengurangan\n\n");
    printf("Masukkan bilangan pertama\t: ");
    scanf("%i", &bil1);
    printf("Masukkan bilangan kedua\t\t: ");
    scanf("%i", &bil2);
    int hasil = bil1 - bil2;
    printf("\nHasil = %i\n", hasil);
}
void perkalian() {
    int bil1, bil2;

    printf("Perkalian\n\n");
    printf("Masukkan bilangan pertama\t: ");
    scanf("%i", &bil1);
    printf("Masukkan bilangan kedua\t\t: ");
    scanf("%i", &bil2);
    int hasil = bil1 * bil2;
    printf("\nHasil = %i\n", hasil);
}
void pembagian() {
    float bil1, bil2;

    printf("Pembagian\n\n");
    printf("Masukkan bilangan pertama\t: ");
    scanf("%i", &bil1);
    printf("Masukkan bilangan kedua\t\t: ");
    scanf("%i", &bil2);
    float hasil = bil1 / bil2;
    printf("\nHasil = %.2f\n", hasil);
}
void faktorial() {
    int bil1, i;

    printf("Faktorial\n\n");
    printf("Masukkan bilangan\t: ");
    scanf("%i", &bil1);
    int hasil = 1;
    for (i = 1; i <= bil1; i++)
    {
       hasil = i * hasil;
    }
    printf("Hasil dari %i! = %i\n", bil1, hasil);
}
void modulus() {
    int bil1, bil2;

    printf("Perkalian\n\n");
    printf("Masukkan bilangan pertama\t: ");
    scanf("%i", &bil1);
    printf("Masukkan bilangan kedua\t\t: ");
    scanf("%i", &bil2);
    int hasil = bil1 % bil2;
    printf("\nHasil = %i\n", hasil);
}

int menu_pilihan;
do{
printf("====================================\n");
printf("\tKalkulator Sederhana\n");
printf("====================================\n\n");
printf("\tMenu :\n");
printf("\t1. Penjumlahan\n");
printf("\t2. Pengurangan\n");
printf("\t3. Perkalian\n");
printf("\t4. Pembagian\n");
printf("\t5. Faktorial\n");
printf("\t6. Modulus\n");
printf("\t0. Keluar\n\n");
printf("Input Pilihan : ");
scanf("%i", &menu_pilihan);
printf("-------------------------------------\n");

switch (menu_pilihan)
{
case 1:
    penambahan();
    break;
case 2:
    pengurangan();
    break;
case 3:
    perkalian();
    break;
case 4:
    pembagian();
    break;
case 5:
    faktorial();
    break;
case 6:
    modulus();
    break;
case 0:
    printf("Keluar\n");
    printf("=== Program berakhir, Terima kasih ===");
    break;      
default:
    printf("Menu yang anda pilih tidak tersedia!\n");
    break;
}
}while (menu_pilihan != 0);
}