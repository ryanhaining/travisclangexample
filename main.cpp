#include <string>
#include <iostream>
#include <variant>

int main() {
  std::variant<int, double> v;
  std::string s = "hello world";
  std::cout << s << '\n';
  std::cout << s.size() << '\n';
  std::cout << s.empty() << '\n';
}
