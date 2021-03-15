// Напишите программу, используя технику TDD. Реализуйте калькулятор,
// поддерживающий операции: +, -, *, /. Проверьте тестами свойства операций
// и законы элементарной алгебры.


#include <cassert>
namespace Command{
    char Add = '+';
    char Sub = '-';
    char Mul = '*';
    char Div = '/';
}
double calc (/* указать тип */char operation, double (x), double (y) ) {
// Решение здесь
        if (operation ==43){ return (x+y);}
        else if (operation ==45) { return (x-y);}
        else if (operation ==42) { return (x*y);}
        else if (operation ==47) { return (x/y);}
    return 0.0;
}

int main() {
    assert(calc(Command::Add, 0.0, 0.0) == 0.0);
    assert(calc(Command::Sub, 0.0, 0.0) == 0.0);
    assert(calc(Command::Mul, 0.0, 0.0) == 0.0);
    // Коммутативность сложения
    assert(calc(Command::Add, 2.0, 1.0) == 3.0);
    assert(calc(Command::Add, 1.0, 2.0) == 3.0);
    // Коммутативность вычитания
    assert(calc(Command::Sub, 2.0, 1.0) == 1.0);
    assert(calc(Command::Sub, 1.0, 2.0) == -1.0);
    // Коммутативность умножения
    assert(calc(Command::Mul, 2.0, 1.0) == 2.0);
    assert(calc(Command::Mul, 2.0, 1.0) == 2.0);
    // Коммутативность деления
    assert(calc(Command::Div, 2.0, 1.0) == 2.0);
    assert(calc(Command::Div, 1.0, 2.0) == 0.5);

    return 0;
}

