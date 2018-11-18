#include <stdio.h>

int main() {
  const float pi = 3.14;
  float r1, r2, dt_1, dt_2, a;

  printf("Nhap ban kinh vong tron 1: ");
  scanf("%f",&r1);
  while(r1<0) {
    printf("Khong hop le.\nNhap ban kinh vong tron 1: ");
    scanf("%f",&r1);
  }

  printf("Nhap ban kinh vong tron 2: ");
  scanf("%f",&r2);
  while(r1<0) {
    printf("Khong hop le.\nNhap ban kinh vong tron 2: ");
    scanf("%f",&r2);
  }

  if (r1>r2){
    a = r1;
    r1 = r2;
    r2 = a;
  }

  dt_1 = r1*r1*pi;
  dt_2 = r2*r2*pi;
  printf("Dien tich hinh vanh khuyen: %.3f", dt_2-dt_1);
  return 0;
}
