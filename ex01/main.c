#include <stdio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  struct{
      double nota1, nota2, media;
  } aluno;
  printf("Qual a primeira nota?\n");
  scanf("%lf", &aluno.nota1);
  printf("Qual a segunda nota?\n");
  scanf("%lf", &aluno.nota2);
  aluno.media=(aluno.nota1+aluno.nota2)/2;
  printf("A média é %.2lf", aluno.media);

  return 0;
}
