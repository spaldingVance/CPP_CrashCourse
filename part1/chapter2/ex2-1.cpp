#include <cstdio>

enum class Operation
{
  Add,
  Subtract,
  Multiply
};

struct Calculator {
  Calculator(Operation myOp) {
    op = myOp;
  }

  int calculate(int a, int b) {
    switch(op) {
      case (Operation::Add): {
        return a + b;
      } break;
      case (Operation::Subtract): {
        return a - b;
      } break;
      case (Operation::Multiply): {
        return a * b;
      }
    }
  }

  Operation op;
};

int main() {

  Calculator myCalc{ Operation::Add };
  int result = myCalc.calculate(1, 2);
  printf("Result: %d\n", result);
}
