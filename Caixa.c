#include <stdio.h>

#include <locale.h>

#include <stdlib.h>

#include <string.h>

#include <unistd.h>


int saque(int valor) {

  int nota100, nota50, nota20, nota10, nota5, nota2;
  int resto100, resto50, resto20, resto10, resto5, resto2;

  if (valor <= 0) {
    printf("Valor para saque Negativo, trabalhe ganhe dinherio  coloque na conta e tente novamente ! Boa sorte!!\n");
    printf("\n\n============ Fim do código do sucesso !============\n\n");
  } else if (valor < 2) {
    printf(" Cédulas de 1 real não são mais utilizadas ,elas estão aposentadas!\n");
    printf("\n\n============ Fim do código do sucesso !============\n\n");
  } else if (valor >= 2) {

    nota100 = valor / 100;
    resto100 = (valor = valor % 100);

    nota50 = valor / 50;
    resto50 = (valor = valor % 50);

    nota20 = valor / 20;
    resto20 = (valor = valor % 20);

    nota10 = valor / 10;
    resto10 = (valor = valor % 10);

    nota5 = valor / 5;
    resto5 = (valor = valor % 5);

    nota2 = valor / 2;
    resto2 = (valor = valor % 2);

    printf("\nNotas de 100: %d cédula(s)\nNotas de 50 : %d cédula(s).\nNotas de 20 : %d cédula(s).\nNotas de 10 : %d cédula(s).\nNotas de 5  : %d cédulas(s).\nNotas de 2  : %d cédulas(s).\n", nota100, nota50, nota20, nota10, nota5, nota2);
    printf("\n\n============ Fim do código do sucesso !============\n\n");
  }
}

int main() {
  int valor;
  setlocale(LC_ALL, "Portuguese");

  printf("\n\n============ Contador de cedulas(Caixa eletrônico) ============\n\n");

  printf("Informe o valor do saque:\n R$ ");
  scanf("%d", & valor);

  saque(valor);
}
