#include <iostream>

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

int main() {
  int a, b;
  std::cout << "Podaj dwie liczby: ";
  std::cin >> a >> b;
  std::cout << "Najmniejsza wspolna wielokrotnosc: " << lcm(a, b) << std::endl;
  return 0;
}
