#include <iostream>


int main() {

    int lines;

    std::cout << "Enter number of lines: ";
    std::cin >> lines;

    for(int i = 1; i <= lines; ++i) {
        for(int j = 1; j <= lines; ++j) {
            std::cout << '*' << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}