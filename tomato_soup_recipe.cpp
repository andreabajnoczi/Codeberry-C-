#include <iostream>

void PrintTomatoSoupRecipe(std::string cheese_type, std::string side_dish);

int main() {
  PrintTomatoSoupRecipe("edami", "pogácsa");
}

void PrintTomatoSoupRecipe(std::string cheese_type, std::string side_dish) {
  std::cout<<"Pirítsd meg olívaolajon a hagymát és fokhagymát."<<std::endl;
  std::cout<<"Tedd hozzá a felkockázott paradicsomot, sózd és borsozd meg, majd öntsd fel 2 dl vízzel."<<std::endl;
  std::cout<<"Főzd kis lángon 15-20 percig."<<std::endl;
  std::cout<<"Ha szétfőtt a paradicsom, add hozzá a száraz kenyeret, olívaolajat, bazsalikomot, és adj  hozzá egy kis vizet."<<std::endl;
  std::cout<<"Főzd még 5 percig."<<std::endl;
  std::cout<<"Szórj rá reszelt " + cheese_type + "-t."<<std::endl;
  std::cout<<"Szolgáld fel " + side_dish +  "-val/vel."<<std::endl;
}