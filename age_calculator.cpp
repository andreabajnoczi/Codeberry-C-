#include <iostream>

int CalculateAge(int current_year, int birth_year);

int main() {
  std::cout << "A felhasználó életkora: " << CalculateAge(2023, 1981) << " év." << std::endl;
}

int CalculateAge(int current_year, int birth_year) {
  int age = current_year - birth_year;
  return age;
}