//
// Практика (4 курс коледжу)
// Практична робота 3: Завдання 2
//

#include <iostream>
#include <vector>

/// Перевіряє, чи є паліндромом заданий рядок в діапазоні між start та end.
bool isPalindrome(const std::string &str, int start, int end) {
  if (start >= end) {
    return true;
  }
  if (str[start] != str[end]) {
    return false;
  }
  return isPalindrome(str, start + 1, end - 1);
}

/// Перевіряє, чи є паліндромом заданий рядок.
bool isPalindrome(const std::string &str) {
  return isPalindrome(str, 0, str.length() - 1);
}

int main() {
  const std::vector<std::string> strings = {"hello", "level", "fuck"};

  for (const std::string &string : strings) {
    if (isPalindrome(string)) {
      std::cout << '\'' << string << "' is a palindrome.\n";
    } else {
      std::cout << '\'' << string << "' is not a palindrome.\n";
    }
  }
  return 0;
}
