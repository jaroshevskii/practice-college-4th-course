//
// Практика (4 курс коледжу)
// Практична робота 3: Завдання 1
//

#include <iostream>
#include <vector>

/// Рекурсивна функція, що повертає суму всіх елементів списку.
int calculateSum(const std::vector<int> &numbers, int index = 0, int sum = 0) {
  if (index == numbers.size()) {
    return sum;
  } else {
    return numbers[index] + calculateSum(numbers, index + 1); 
  }
}

int main() {
  const std::vector<int> numbers = {1, 2, 3, 4, 5};
  const int sumOfNumbers = calculateSum(numbers);
  
  std::cout << "Sum of numbers: " << sumOfNumbers << '\n';
  return 0;
}