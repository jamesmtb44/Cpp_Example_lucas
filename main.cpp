#include <iostream>

int main() {
    std::cout << "Hello class" << std::endl;

    std::cout << "Hit enter to count to 1001" << std::endl;
    std::cin.get();

    for( int i = 1; i < 1001 + 1; i++) {
        std::cout << i << std::endl;
    }
}