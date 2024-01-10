#include <iostream>

void PrintSandwichRecipe(std::string sauce, std::string meat, std::string cheese, std::string vegetable);

int main() {
  PrintSandwichRecipe("majonéz", "sonka", "trappista", "paradicsom");
}

void PrintSandwichRecipe(std::string sauce, std::string meat, std::string cheese, std::string vegetable) {
  std::cout << "Fogj két szelet kenyeret." <<std::endl;
  std::cout << "Az egyik szeletre nyomj" + sauce + "-t." <<std::endl;
  std::cout << "Helyezz a kenyérre két szelet" + meat + "-t." <<std::endl;
  std::cout << "Rakj rá egy szelet" + cheese +"-ot." <<std::endl;
  std::cout << "Koronázd meg pár szelet/karika/csipet ilyen zöldséggel: " + vegetable + "." <<std::endl;
  std::cout << "Borítsd be a szendvicset a másik szelet kenyérrel." <<std::endl;
  std::cout << "Jó étvágyat!" <<std::endl;
}