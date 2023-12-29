#include "calc.h"
#include <stdio.h>

double *ask(double *a, double *b) {
  printf("a: ");
  scanf("%lf", a);
  printf("b: ");
  scanf("%lf", b);
  return a;
  return b;
}

int calc() {
  int opt;
  double a, b;
  printf("Calculator: Potato Edition.\n");

  do {
    printf("Operations:\n1.Addition\n2.Substraction\n3.Multiplication\n4."
           "Division\n");
    scanf("%d", &opt);
    if (opt == 1) {
      ask(&a, &b);
      printf("%lf + %lf = %lf\n", a, b, add(a, b));
    } else if (opt == 2) {
      ask(&a, &b);
      printf("%lf - %lf = %lf\n", a, b, sub(a, b));
    } else if (opt == 3) {
      ask(&a, &b);
      printf("%lf x %lf = %lf\n", a, b, mult(a, b));
    } else if (opt == 4) {
      ask(&a, &b);
      printf("%lf ÷ %lf = %lf\n", a, b, div(a, b));
    } else {
      printf("Invalid input.");
    }
  } while ((0 < opt) && (opt < 5));
  return 0;
}
