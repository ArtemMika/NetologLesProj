#include <iostream>

int main() {
    setlocale(LC_ALL, "RUS");
    std::cout << "Оператор: ||" << std::endl;

    std::cout << "true\t" << "true\t" << ((true || true) ? "true" : "false") << std::endl;
    std::cout << "true\t" << "false\t" << ((true || false) ? "true" : "false") << std::endl;
    std::cout << "false\t" << "true\t" << ((false || true) ? "true" : "false") << std::endl;
    std::cout << "false\t" << "false\t" << ((false || false) ? "true" : "false") << std::endl;

    std::cout << "\nОператор: &&" << std::endl;

    std::cout << "true\t" << "true\t" << ((true && true) ? "true" : "false") << std::endl;
    std::cout << "true\t" << "false\t" << ((true && false) ? "true" : "false") << std::endl;
    std::cout << "false\t" << "true\t" << ((false && true) ? "true" : "false") << std::endl;
    std::cout << "false\t" << "false\t" << ((false && false) ? "true" : "false") << std::endl;

    return 0;
}
