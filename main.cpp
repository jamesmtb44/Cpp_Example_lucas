#include <iostream>

int main() {
    std::cout << "Hello class" << std::endl;

    std::cout << "Hit enter to count to 10000" << std::endl;
    std::cin.get();

    for( int i = 0; i < 10000; i++) {
        std::cout << i << std::endl;
    }
}