#include <stdio.h>

int main() {
    
    printf("Segitiga\n");

    float alas;
    float tinggi;

     printf("Alas segitiga : ");
     scanf("%f" , &alas);fflush(stdin);

     printf("Tinggi segitga : ");
     scanf("%f" , &tinggi);fflush(stdin);

     float hasil = (alas*tinggi) / 2;

     printf("Luas segitiga : %.5f" , hasil);

    return 0;
} 
