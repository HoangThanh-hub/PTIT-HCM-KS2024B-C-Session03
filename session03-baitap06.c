#include <stdio.h>

int main(){
    float canh, chieuCao, s;

    printf("nhap do dai canh tam giac:" );
    scanf("%f", &canh);
    printf("nhap chieu cao tam giac: ");
    scanf("%f", &chieuCao);

    s = (canh * chieuCao) / 2 ;

    printf("dien tich tam giac la: %.2f\n", s);

    return 0;
}