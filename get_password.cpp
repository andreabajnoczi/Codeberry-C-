#include <iostream>

int main() {
  std::string password;
  std::string password_check;

  std::cout << "Enter a password: ";
  std::cin >> password;
  std::cout << "Enter the password again: ";
  std::cin >> password_check;

  if (password == password_check) {
    std::cout<< "Köszönjük, a jelszavad elmentettük." << std::endl;
  }
  else {
    std::cout<<"Hm, az általad beírt két jelszó sajnos nem egyezik." << std::endl;
  }
}