#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  struct{
    double cat1, cat2, hip;
  } trian;
  printf("Informe o valor do primeiro cateto: ");
  scanf("%lf", &trian.cat1);
  printf("Informe o valor do segundo cateto: ");
  scanf("%lf", &trian.cat2);
  trian.hip = sqrt(pow(trian.cat1, 2)+pow(trian.cat2, 2));
  printf("A hipotenusa é %.2lf", trian.hip);
  
  return 0;
}
