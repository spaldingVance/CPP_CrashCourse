#include <cstdio>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int a = 3;
  int b = 5;
  printf("The sum of %d and %d is %d", a, b, sum(a, b));
}