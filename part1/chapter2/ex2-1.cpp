#include <cstdio>

enum class Operation
{
  Add,
  Subtract,
  Multiply
};

struct Calculator {
  Calculator(Operation myOp) {
    printf("Taking in operation /n");
    op = myOp;
  }

  Operation op;
};

int main() {

  Calculator myCalc{ Operation::Add };
}
