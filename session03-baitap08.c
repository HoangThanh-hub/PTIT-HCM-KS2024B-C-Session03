#include <stdio.h>

int main() {
    int a;

    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d", &a);

    int hangNghin = a / 1000;
    int hangTram = (a / 100) % 10;
    int hangChuc =(a / 10) % 10;
    int donVi = a % 10;


    printf ("so nguyen tren co nghich dao la: %d%d%d%d\n", donVi,hangChuc,hangTram,hangNghin);



    return 0;
}