#include <iostream>

int main() {
    int moisture = 45;
    std::cout << "Moisture level: " << moisture << "%" << std::endl;
    
    if (moisture < 50) {
        std::cout << "WARNING: Plant needs water!" << std::endl;
    }
    return 0;
}