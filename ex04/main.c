#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  double F, C;
  printf("Informe a temperatura em ºF: ");
  scanf("%lf", &F);
  C = (F-32)*5/9;
  printf("A temperatura é de %.2lfºC", C);

  return 0;
}
