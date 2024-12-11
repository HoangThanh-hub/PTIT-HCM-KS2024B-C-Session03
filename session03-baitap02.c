#include <stdio.h>

int main() {
 
 float celsius, fahrenheit;

 printf("nhap nhiet do celsius hien tai: ");
 scanf("%f", &celsius);
 fahrenheit = (celsius * 1.8) +32;

 printf("nhiet do fahrenheit la: %.2f", fahrenheit);




    return 0 ;
}