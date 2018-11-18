#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main() {
  double goc_nhon, sinx, cosx, S, P;
  float day_lon, day_be, canh_ben, duong_cao, a;

  printf("Nhap day be: ");
  scanf("%f", &day_be);
  while (day_be < 0) {
    printf("Khong hop le.\nNhap day be: ");
    scanf("%f",&day_be);
  }

  printf("Nhap day lon: ");
  scanf("%f", &day_lon);
  while (day_lon < 0|| day_be >= day_lon) {
    printf("Khong hop le.\nNhap day lon: ");
    scanf("%f",&day_lon);
  }

  printf("Nhap goc nhon: ");
  scanf("%lf", &goc_nhon);
  while (goc_nhon < 0 || goc_nhon >= 90) {
    printf("Khong hop le.\nNhap goc nhon: ");
    scanf("%lf",&goc_nhon);
  }
  sinx = sin(goc_nhon*PI/180);
  cosx = cos(goc_nhon*PI/180);
  canh_ben = (abs(day_lon-day_be)/cosx)/2;
  duong_cao = sinx*canh_ben;
  S = 0.5*(day_be+day_lon)*duong_cao;
  P = 2.0*(day_be+day_lon+canh_ben);
  printf("Dien tich: %.4lf\n",S);
  printf("Chu vi: %.4lf\n",P);
  return 0;
}
