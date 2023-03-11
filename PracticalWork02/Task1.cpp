//
// Практика (4 курс коледжу)
// Практична робота 2: Завдання 1
//

#include <iostream>
#include <string>

class Student {
private:
  /// ПІБ студента.
  std::string fullName;
  /// Рік народження студента.
  int birthYear = 0;
  /// Номер курсу, на якому навчається студент.
  int courseNumber = 0;

public:
  /// Конструктор для створення нового об'єкту Student з заданими властивостями.
  Student(const std::string &fullName, int birthYear, int courseNumber)
      : fullName(fullName), birthYear(birthYear), courseNumber(courseNumber) {}

  /// Повертає ПІБ студента.
  const std::string &getFullName() const { return fullName; }
  /// Повертає рік народження студента.
  int getBirthYear() const { return birthYear; }
  /// Повертає номер курсу студента.
  int getCourseNumber() const { return courseNumber; }

  /// Встановлює нове ПІБ студента.
  void setFullName(const std::string &newFullName) { fullName = newFullName; }
  /// Встановлює новий рік народження студента.
  void setBirthYear(int newYear) { birthYear = newYear; }
  /// Встановлює новий номер курсу студента.
  void setCourseNumber(int newNumber) { courseNumber = newNumber; }

  /// Виводить інформацію про студента, включаючи його ПІБ, рік народження та
  /// номер курсу.
  void print() const {
    std::cout << "Student: " << fullName << ", born in " << birthYear
              << ", on course " << courseNumber << ".\n";
  }
};

int main() {
  const Student alice("Smith Alice Marie", 2000, 1);
  Student bob("Johnson Bob Michael", 1999, 2);

  // Виводимо інформацію про студентів.
  alice.print();
  bob.print();

  std::cout << '\n';

  // Змінюємо властивості одного зі студентів.
  bob.setFullName("Johnson Bobby Mark");
  bob.setCourseNumber(3);

  // Виводимо інформацію про студентів знову, щоб переконатися, що зміни були
  // застосовані.
  alice.print();
  bob.print();
  return 0;
}
