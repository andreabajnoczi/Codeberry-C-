#include <iostream>

int main() {
  int all_turbines = 25;
  int turbine_power = 2000;
  int sum_power = 0;
  int turbine_counter = 1;

  for (int i = 1; i <= all_turbines; i++) {
    if (i <= 10) {
      sum_power += turbine_power;
      
      std::cout << "A(z) " << turbine_counter << ". számú szélturbina teljes fordulaton működik, " << turbine_power << " MWh-t termelve. A farmon termelt összenergia jelenleg: "<< sum_power << " MWh." << std::endl;
      
      turbine_counter++;
    } 
    
    else if (i<=20) {
      sum_power += turbine_power/2;
      
      std::cout << "A(z) " << turbine_counter << ". számú szélturina fél fordulaton működik, " << turbine_power/2 << " MWh-t termelve. A farmon termelt összenergia jelenleg: "<< sum_power << " MWh." << std::endl;

      turbine_counter++;
    }
    
    else if (i<=25) {

      sum_power += 0;
      
      std::cout << "A(z) " << turbine_counter << ". számú szélturina nem működik, " << 0 << " MWh-t termelve. A farmon termelt összenergia jelenleg: "<< sum_power << " MWh." << std::endl;

      turbine_counter++;
    }
    
  }
}