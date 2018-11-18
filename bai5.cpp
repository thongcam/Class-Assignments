#include <stdio.h>

int main() {
  float a;
  int checker, sum = 0;
  printf("Nhap so a: ");
  scanf("%f",&a);
  checker = a;
  while (checker - a != 0 || 1000>a || a>9999) {
    fflush(stdin);
    printf("Khong hop le. Nhap so a: ");
    scanf("%f",&a);
    checker = a;
  }
  int a_int = (int)a;
  while(a_int>=1){
    sum += a_int%10;
    a_int = a_int/10;
    printf("%i\n",sum);
  }
  printf("Tong cac chu so cua %.0f la %i",a,sum);
  return 0;
}
