#include <stdio.h>

int main() {
  float t;
  int checker;
  printf("Nhap thoi gian: ");
  scanf("%f",&t);
  checker = t;
  while(checker - t != 0 || t <= 0) {
    fflush(stdin);
    printf("Khong hop le. Nhap thoi gian: ");
    scanf("%f",&t);
    checker = t;
  }
  int t_int = (int)t;
  printf("Khoang cach cua hai nguoi sau %i gio la %i",t_int,t_int*20 );
  return 0;
}
