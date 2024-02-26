#include "vector.h"
#include <iostream>

int main() {
    // try {
        Vector myVector;
        myVector.insert(5,5);

        // 
    //     std::cout << "Vector elements using operator[]:" << std::endl;
    //     for (size_t i = 0; i < m_size.size(); ++i) {
    //         std::cout << myVector[i] << " ";
    //     }
    //     std::cout << std::endl;

    //     std::cout << "Vector elements using at() with bounds checking:" << std::endl;
    //     for (size_t i = 0; i < m_size.size() + 2; ++i) {
    //         try {
    //             std::cout << myVector.at(i) << " ";
    //         } catch (const std::out_of_range& e) {
    //             std::cerr << "Exception: " << e.what() << std::endl;
    //         }
    //     }
    //     std::cout << std::endl;

    //     // Modify elements
    //     myVector[1] = 25;
    //     myVector.at(2) = 35;

    //     // Display modified vector
    //     std::cout << "Modified Vector elements using operator[]:" << std::endl;
    //     for (size_t i = 0; i < m_size.size(); ++i) {
    //         std::cout << myVector[i] << " ";
    //     }
    //     std::cout << std::endl;
    // } catch (const std::exception& e) {
    //     std::cerr << "Exception: " << e.what() << std::endl;
    // }

    return 0;
}