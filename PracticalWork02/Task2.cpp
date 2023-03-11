//
// Практика (4 курс коледжу)
// Практична робота 2: Завдання 2
//

#include <iostream>

/// Структура, що представляє клієнта.
struct Client {
  std::string firstName; ///< Ім'я клієнта.
  std::string lastName;  ///< Прізвище клієнта.
  std::string address;   ///< Адреса клієнта.
  std::string email;     ///< Електронна пошта клієнта.

  /// Метод, що виводить інформацію про клієнта.
  void print() const {
    std::cout << "First name: " << firstName << '\n'
              << "Last name: " << lastName << '\n'
              << "Address: " << address << '\n'
              << "Email: " << email << '\n';
  }
};

int main() {
  const Client client{.firstName = "John",
                      .lastName = "Doe",
                      .address = "123 Main St.",
                      .email = "john.doe@email.com"};
  client.print();
  return 0;
}
