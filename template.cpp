#include <iostream>
float Max(float x, float y) {
  return x > y ? x : y;
}
int Max(int x, int y) {
  return x > y ? x : y;
}
double Max(double x, double y) {
  return x > y ? x : y;
}
int main() {
  std::cout << "�������" << Max(7.7, 8.8) << std::endl; 
  std::cout << "�������" << Max(9, 8) << std::endl; 
  return 0;
} 
