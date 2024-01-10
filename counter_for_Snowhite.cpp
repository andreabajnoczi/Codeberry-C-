#include <iostream>

int main() {
  int dwarf_counter = 1;
  int total_dwarves = 7;
  int working_dwarves = 4;

  while (dwarf_counter <= working_dwarves) {
    std::cout<< "A(z) " << dwarf_counter << ". törpe a bányában van."<<std::endl;
    dwarf_counter++;
  }
  
  for (; dwarf_counter <= total_dwarves; dwarf_counter++) {
    std::cout<< "A(z) " << dwarf_counter << ". törpe még otthon alszik."<<std::endl;
  }
}