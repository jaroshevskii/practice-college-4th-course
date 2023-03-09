//
// Практика (4 курс коледжу)
// Практична робота 2: Завдання 1
//

#include <iostream>

/// Клас Box для представлення коробки з трьома вимірами (шириною, висотою та
/// довжиною) з методами для отримання/встановлення вимірів, обчислення об'єму
/// та виведення інформації.
class Box {
private:
  double width = 0.0;  /// Ширина коробки.
  double height = 0.0; /// Висота коробки.
  double lenght = 0.0; /// Довжина коробки.

public:
  /// Конструктор для створення нового об'єкту Box з заданими розмірами.
  Box(double width, double height, double lenght)
      : width(width), height(height), lenght(lenght) {}

  /// Повертає ширину коробки.
  double getWidth() const { return width; }
  /// Повертає висоту коробки.
  double getHeight() const { return height; }
  /// Повертає довжину коробки.
  double getLenght() const { return lenght; }

  /// Встановлює нову ширину коробки.
  void setWidth(double newValue) { width = newValue; }
  /// Встановлює нову висоту коробки.
  void setHeight(double newValue) { height = newValue; }
  /// Встановлює нову довжину коробки.
  void setLenght(double newValue) { lenght = newValue; }

  /// Обчислює об'єм коробки.
  double volume() const { return width * height * lenght; }

  /// Виводить інформацію про коробку, включаючи її розміри та об'єм.
  void print() const {
    std::cout << "Box: width = " << width << ", height = " << height
              << ", length = " << lenght << '\n'
              << "  Volume: " << volume() << '\n';
  }
};

int main() {
  const Box box(3.0, 3.0, 3.0);
  
  box.print();
  return 0;
}