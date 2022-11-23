/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 23 September 2021 */
/* Topik Praktikum : Praktikum 3 */
/* Deskripsi : membuat program untuk mengeluarkan hasil dari pergeseran kata modifikasi soal 1 */

#include "mesin_kata.h"
#include <stdio.h>

void printKata(Kata kata,int x);

int main() {
  /* KAMUS LOKAL */
  int x;
  /* ALGORITMA */
  scanf("%d\n", &x);
  STARTKATA();
  if (!EndKata) {
    printKata(CKata,x);
    ADVKATA();
    while (!EndKata) {
      printf(" ");
      printKata(CKata,x);
      ADVKATA();
    }
  }
  printf("\n");
  return 0;
}

void printKata(Kata kata,int x){
    /* KAMUS LOKAL */
    int i;
    x = x % CKata.Length;
    if (x != 0) {
        for (int i=1; i<=x ; i++) {
            CKata.TabKata[i + CKata.Length] = CKata.TabKata[i];
        }
    }
    for (int i=x+1; i<=(x+CKata.Length); i++) {
        printf("%c", CKata.TabKata[i]);
    }
}