#include <iostream>

int main() {
  int month_counter = 1;
  int rabbit_population = 30;

  for(; month_counter <= 6; month_counter++){
    rabbit_population *= 2;
    std::cout << "A Skylark-völgy nyulainak száma " << month_counter << ". hónap végén " << rabbit_population << " darab." << std::endl;
  }

  for(; month_counter <= 12; month_counter++){
    rabbit_population *= 3;
    std::cout << "A Skylark-völgy nyulainak száma " << month_counter<< ". hónap végén " << rabbit_population << " darab." << std::endl;
  }
}