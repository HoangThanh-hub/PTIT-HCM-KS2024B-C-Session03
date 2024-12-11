#include <stdio.h>

int main() {
    int a,tong;

    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d", &a);

    int hangNghin = a / 1000;
    int hangTram = (a / 100) % 10;
    int hangChuc =(a / 10) % 10;
    int donVi = a % 10;

    tong = hangNghin + hangTram + hangChuc + donVi;

    printf ("so nguyen tren co tong la: %d\n", tong);



    return 0;
}