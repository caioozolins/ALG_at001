#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  char caracter;
  printf("Digite um caracter: ");
  scanf("%c", &caracter);
  printf("O código ASCII em decimal é %d\n", caracter);
  printf("O código ASCII em octal é %o\n", caracter);
  printf("O código ASCII em hexadecimal é %x\n", caracter);
  
  return 0;
}
