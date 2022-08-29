#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  struct{
      double km, litro, consumo;
  } carro;
  printf("Digite a distancia percorrida em Km:\n");
  scanf("%lf", &carro.km);
  printf("Digite a quantidade de combustível em litros:\n");
  scanf("%lf", &carro.litro);
  carro.consumo = carro.km/carro.litro;
  printf("O consumo médio do carro foi de %.2lfKm/L", carro.consumo);

  return 0;
}
