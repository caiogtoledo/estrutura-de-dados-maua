#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  float v[n];
  float soma = 0;

  printf("n = ");
  scanf("%d", &n);
  printf("Array = ");
  for(int i =0; i < n; i++) {
    scanf("%f", (v+i));
    soma += *(v+i);
  }
  printf("Media = %.2f", (soma/n));

  return 0;
}