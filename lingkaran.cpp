#include <stdio.h>

int main() {
    
    printf("lingkaran\n");

    float radius;

     printf("radius lingkaran : ");
     scanf("%f" , &radius);fflush(stdin);

     float hasil = radius*radius*3.14;

     printf("Luas lingkaran : %.5f" , hasil);

    return 0;
} 