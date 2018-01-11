#include <iostream>

int main() {
    std::cout << "이름을 입력해주세요:\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "안녕하세요, " << first_name << "!" << std::endl;
    return 0;
}