#include <stdio.h>

int main() {
  float l , h, w;
  int checker, S,V;

  // Nhap chieu dai

  printf("Nhap chieu dai: ");
  scanf("%f", &l);
  // If input is a float and therefore has decimal part, it will not be equal to its integer conversion (in this case stored in 'checker')
  // Can't compare int to float so have to use subtraction
  checker = l;
  while (l - checker != 0||l <= 0) {
    // fflush(stdin) = Clear input (Not sure helpful)
    fflush(stdin);
    printf("Khong hop le.\nNhap chieu dai: " );
    scanf("%f", &l );
    checker = l;
  }
  fflush(stdin);

  // Nhap chieu rong

  printf("Nhap chieu rong: " );
  scanf("%f", &w);
  checker = w;
  while (w - checker != 0||w <= 0) {
    fflush(stdin);
    printf("Khong hop le.\nNhap chieu rong: " );
    scanf("%f", &w);
    checker = w;
  }
  fflush(stdin);

  //Nhap chieu cao

  printf("Nhap chieu cao: " );
  scanf("%f", &h);
  checker = h;
  while (h - checker != 0||h <= 0) {
    fflush(stdin);
    printf("Khong hop le.\nNhap chieu cao: " );
    scanf("%f", &h);
    checker = h;
  }

  //Convert back to interger
  int l_i = (int) l, h_i = (int)h, w_i = (int) w;
  S = 2*(l_i*h_i+l_i*w_i+w_i*h_i);
  V = l_i*w_i*h_i;
  printf("Dien tich toan phan la: %i\n", S );
  printf("The tich toan phan la: %i", V );
}
