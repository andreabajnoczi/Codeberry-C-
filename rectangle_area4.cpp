#include <iostream>

int CalculateRectangleArea(int height, int width);
void PrintRectangleArea(int width_from_user, int height_from_user);

int main() {
   PrintRectangleArea(2,6);
}

int CalculateRectangleArea(int height, int width) {
  return height * width;
 }

void PrintRectangleArea(int width_from_user, int height_from_user) {
  int area = CalculateRectangleArea(width_from_user, height_from_user);
  std::cout << "A négyszög területe " << area << " négyzetméter." << std::endl;
}