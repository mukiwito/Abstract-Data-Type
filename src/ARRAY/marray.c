/* NIM : 18220028 */
/* Nama : Muhammad Dzaki Dwi Putranto */
/* Tanggal : 16 September 2021 */
/* Topik Praktikum : Praktikum 2 */
/* Deskripsi : program menerima sebuah array dan menentukan bilangan pertama yang tidak mengalami pengulangan */

#include <stdlib.h>
#include <stdio.h>
#include "array.h"

int main() {
    /* KAMUS */
    int i,j,k,l;
    int n,x;
    int single;
    TabInt T,L,count;
    /* ALGORITMA */
    MakeEmpty(&T);
    MakeEmpty(&L);
    MakeEmpty(&count);
    
    scanf("%d", &n);
    
    SetNeff(&T,n);
    SetNeff(&L,n);
    SetNeff(&count,n);

    for (i=1 ; i<n+1 ; i++){
        scanf("%d",&x);
        SetEl(&T,i,x);
    }

    SetTab(T,&L); //copy array T -> L

    for (j=1 ; j<n+1 ; j++){
        SetEl(&count,j,0);
    }

    single = -1; /*kalo tidak ada yang valid output -> -1*/

    for (k=n ; k>0 ; k--) /*loop dari belakang untuk cari nilai terdepan*/
    {
        for (l=1 ; l<n+1 ; l++) /*loop untuk search nilai di array_copy*/
        {
            if(T.TI[k] == L.TI[l]) 
            {
                count.TI[k] += 1;
            }
        }
        if (count.TI[k] == 1) 
        {
            single = T.TI[k];  /*ganti output yang count-nya cuma 1*/
        }
    }
    printf("%d\n", single);
}