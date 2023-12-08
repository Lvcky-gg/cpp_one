#include <cstdio>
#include <iostream>

int main() {
  int favorite_number;
  std::cout << "Enter your favorite number between 1 and 100";

  std::cin >> favorite_number;

  std::cout << "Good Number!" << std::endl;
  std::printf("%d is good!\n", favorite_number);
  return 0;
}
