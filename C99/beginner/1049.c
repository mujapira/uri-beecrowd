#include <stdio.h>

int main() {
  char firstInput[20];
  char secondInput[20];
  char thirdInput[20];
  int i, isVertebrado;

  scanf("%s", firstInput);
  
  if (firstInput[0] == 'v') {
    scanf("%s", secondInput);
    if (secondInput[0] == 'a') {
    scanf("%s", thirdInput);
      if (thirdInput[0] == 'c') {
        printf("aguia\n");
      } else {
        printf("pomba\n");
      }
    } else {
    scanf("%s", thirdInput);
      if (thirdInput[0] == 'o') {
        printf("homem\n");
      } else {
        printf("vaca\n");
      }
    }
  } else {
    scanf("%s", secondInput);
    if (secondInput[0] == 'i') {
    scanf("%s", thirdInput);
      if (thirdInput[2] == 'm') {
        printf("pulga\n");
      } else {
        printf("lagarta\n");
      }
    } else {
    scanf("%s", thirdInput);
      if (thirdInput[0] == 'h') {
        printf("sanguessuga\n");
      } else {
        printf("minhoca\n");
      }
    }
  }

  return 0;
}