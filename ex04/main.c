#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  double F, C;
  printf("Informe a temperatura em �F: ");
  scanf("%lf", &F);
  C = (F-32)*5/9;
  printf("A temperatura � de %.2lf�C", C);

  return 0;
}
