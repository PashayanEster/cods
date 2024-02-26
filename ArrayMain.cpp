#include "Array.hpp"

int main() {
    Array<int, 10> arr = {1,2,3,4,5,6,7,8,9,10};



    try {
    arr.set(10,500);
    }
    catch(std::out_of_range& e)
    {
        arr.set(9, 500);
    }
}
