#include <stdio.h>
#include <locale.h>

#include <stdio.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  char caracter;
  printf("Digite um caracter: ");
  scanf("%c", &caracter);
  printf("O c�digo ASCII em decimal � %d\n", caracter);
  printf("O c�digo ASCII em octal � %o\n", caracter);
  printf("O c�digo ASCII em hexadecimal � %x\n", caracter);
  
  return 0;
}
