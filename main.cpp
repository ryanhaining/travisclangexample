#include <string>
#include <iostream>
#include <variant>

int main() {
  std::variant<int, double> v;
  std::string s = "hello world";
  std::cout << s << '\n';
}
