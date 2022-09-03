#include <stdio.h>
p1001() {

  int a, b, x;

  scanf("%d", &a);
  scanf("%d", &b);

  x = a + b;

  printf("X = %d\n", x);
  
}

void p1002(){

  double area, raio;

  scanf("%lf", &raio);

  area = 3.14159 * (raio * raio);

  printf("A=%.4lf\n", area);
  
}

void p1003(){

  int a, b, soma;

  scanf("%d", &a);
  scanf("%d", &b);

  soma = a + b;

  printf("SOMA = %d\n", soma);

  
}

void p1004(){

  int a, b, prod;

  scanf("%d", &a);
  scanf("%d", &b); 

  prod = a * b;

  printf("PROD = %d\n", prod);


}
void p1005(){

  double a, b, media;

  scanf("%lf", &a);
  scanf("%lf", &b);

  media = (a * 3.5 + b * 7.5)/ (3.5 + 7.5);

  printf("MEDIA=%lf\n", media);

}

void p1006(){

  double a, b, c, media;

  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  media = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

  printf("MEDIA=%.1lf\n", media);
    
}

void p1007(){

  int a, b, c, d, diferenca;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);

  diferenca = a * b - c * d;

    printf("DIFERENCA = %d\n", diferenca);

  
}

void p1008(){

  int numero_func, hora, salario;
  double valor;

  scanf("%d", &numero_func);
  scanf("%d", &hora);
  scanf("%lf", &valor);

  salario = hora * valor;

  printf("NUMBER = %d\n", numero_func);
  printf("SALARY U$ = %.2lf\n", salario);
  



  
}


int main() {

  p1008();
  

  return 0;
}