#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int jumlah;
    printf("Masukkan nilai N : ");
    scanf("%d",&N);

    printf("Jumlah Deret bilangannya adalah : %d",JumPrima_Function(N));
    printf("Jumlah Deret bilangannya adalah : %d",JumPrima_Procedure(jumlah,N));
}
