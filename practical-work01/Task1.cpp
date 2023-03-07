//
// Практична Робота 1: Завдання 1
//
// Програма запитує у користувача число і виводить на екран перші числа
// Фібоначчі. Програма реалізована з використанням циклу `while`.
//

#include <iostream>

int main() {
  std::cout << "Введіть число: ";
  int number = 0;
  std::cin >> number;

  if (number < 1) {
    std::cout << "Помилка: Число не може бути менше 1.\n";
    return 0;
  }
  
  int previous1 = 0, previous2 = 1, next = 0;
  
  int index = 0;
  while (index < number) {
    if (index <= 1) {
      next = index;
    } else {
      next = previous1 + previous2;
      previous1 = previous2;
      previous2 = next;
    }
    std::cout << next << ' ';
    ++index;
  }

  std::cout << '\n';
  return 0;
}
