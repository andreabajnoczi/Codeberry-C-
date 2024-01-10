#include <iostream>

int main() {
  int total_buses = 10;
  int working_buses = 7;
  int bus_counter = 1;

  for (; bus_counter <= working_buses; bus_counter++) {
    std::cout<< "A(z) " << bus_counter << ". busz üzemképes, sofőrre vár." << std::endl;
  }

  for (; bus_counter <= total_buses; bus_counter++) {
    std::cout<< "A(z) " << bus_counter << ". busz üzemen kívül van, szerelőre vár." << std::endl;
  }
}