//
// Практика (4 курс коледжу)
// Практична робота 2: Завдання 2 (стара реалізація)
//

#include <cmath>
#include <iostream>

/// Структура, що представляє точку на площині.
struct Point {
  double x = 0.0; ///< Координата x точки.
  double y = 0.0; ///< Координата y точки.

  /// Обчислює відстань від поточної точки до іншої точки.
  double distanceTo(const Point &point) const {
    return std::sqrt(std::pow(point.x - x, 2) + std::pow(point.y - y, 2));
  }
};

/// Структура, що представляє трапецію.
struct Trapeze {
public:
  Point a; ///< Перша вершина трапеції.
  Point b; ///< Друга вершина трапеції.
  Point c; ///< Третя вершина трапеції.
  Point d; ///< Четверта вершина трапеції.

  /// Перевіряє чи є трапеція рівнобічною.
  bool isEquilateral() const { return a.distanceTo(c) == b.distanceTo(d); }

  /// Обчислює периметр трапеції.
  double perimeter() const {
    return a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(d) +
           d.distanceTo(a);
  }

  /// Обчислює висоту трапеції.
  double height() const { return b.distanceTo({b.x, a.y}); }

  /// Обчислює площу трапеції.
  double area() const {
    return (a.distanceTo(d) + b.distanceTo(c)) / 2.0 * height();
  }

  /// Виводить довжини сторін, периметр та площу трапеції.
  void print() const {
    std::cout << "Sides lenght:\n"
              << "  AB: " << a.distanceTo(b) << '\n'
              << "  BC: " << b.distanceTo(c) << '\n'
              << "  CD: " << c.distanceTo(d) << '\n'
              << "  DA: " << d.distanceTo(a) << '\n'
              << "Perimeter: " << perimeter() << '\n'
              << "Area:      " << area() << '\n';
  }
};

int main() {
  const Point a{.x = 0.0, .y = 0.0};
  const Point b{.x = 4.0, .y = 0.0};
  const Point c{.x = 3.0, .y = 3.0};
  const Point d{.x = 1.0, .y = 3.0};

  const Trapeze trapeze{a, b, c, d};

  trapeze.print();
  return 0;
}
