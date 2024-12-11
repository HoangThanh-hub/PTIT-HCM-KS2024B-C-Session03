#include <stdio.h>

int main() {
    float diemToan,diemVan,diemAnh,tongDiem,diemTB;
    printf("nhap diem toan: ");
    scanf("%f", &diemToan);
     printf("nhap diem van: ");
    scanf("%f", &diemVan);
     printf("nhap diem anh: ");
    scanf("%f", &diemAnh);
    tongDiem = diemToan + diemVan + diemAnh;
    diemTB = (diemToan + diemVan + diemAnh) / 3;

    printf("tong diem la: %.2f \ndiem trung binh la: %.2f\n", tongDiem,diemTB);

    return 0;
}