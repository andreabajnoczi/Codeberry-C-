#include <iostream>

double CalculateCircleCircumference(int radius);
double CalculateCircleArea(int radius);
void PrintCircleData(int radius_from_user);

int main() {
  PrintCircleData(4);
}

double CalculateCircleCircumference(int radius) {
  return 2 * 3.14 * radius;
}

double CalculateCircleArea(int radius) {
  return 3.14 * (radius * radius);
}

void PrintCircleData(int radius_from_user) {
  double circumference = CalculateCircleCircumference(radius_from_user);
  double area = CalculateCircleArea(radius_from_user);
  std::cout << "A kör kerülete " << circumference << " centiméter." << std::endl;
  std::cout << "A kör területe " << area << " négyzetcentiméter." << std::endl;
}