#include <stdio.h>
int main() {
  int h, m, d, s;
  int hf, mf, df, sf;
  int rh, rm, rd, rs;

  scanf("Dia %d", &d);
  scanf("%d : %d : %d\n", &h, &m, &s);
  scanf("Dia %d", &df);
  scanf("%d : %d : %d", &hf, &mf, &sf);

  rs = sf - s;
  rm = mf - m;
  rh = hf - h;
  rd = df - d;

  if (rs < 0) {
    rs = rs + 60;
    rm--;
  }

  if (rm < 0) {
    rm = rm + 60;
    rh--;
  }

  if (rh < 0) {
    rh = rh + 24;
    rd--;
  }

  printf("%d dia(s)\n", rd);
  printf("%d hora(s)\n", rh);
  printf("%d minuto(s)\n", rm);
  printf("%d segundo(s)\n", rs);

  return 0;
}