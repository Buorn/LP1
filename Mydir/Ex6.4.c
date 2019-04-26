#include<stdio.h>

int main(void)
{
  char nome[10];
  char *pt;
  void lenstr(char *str);

  pt = nome;

  printf("Digite um nome: ");
  scanf("%s", &nome);

  lenstr(pt);

  return 0;
}

void lenstr(char *str){
    int cont = 0;
    for(int i = 0; i < 10; i++){
        if(str != 0) {
            cont += 1;
        }
    }
    printf("lenstr = %d", cont);
}
