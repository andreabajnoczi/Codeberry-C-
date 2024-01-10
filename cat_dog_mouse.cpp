#include <iostream>

int main() {
  for (int i=1; i<=100; i++) {

    std::cout<< i << std::endl;
    
    if (i%15 == 0) {
      std::cout<< i << " mouse" << std::endl;
    }
    else if (i%5 == 0) {
      std::cout<< i << " cat" << std::endl;
    }
    else if (i%3 == 0) {
      std::cout<< i << " dog" << std::endl;
    }
  }
}