
// Task 8.Implement the Student structure, which consists of name, age, and grade point average. Create a dynamic array of Students and enter (std::cin) the values of all objects. 
// Իրականացնել Student ստրուկտուրան, որը բաղկացած է անունից, տարիքից և միջին գնահատականից։ Ստեղծել Student-ների դինամիկ զանգված և մուտքագրել (std::cin) բոլոր օբյեկտների արժեքները։ 
#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
    float avarage;

};

int main(){
    Student* arr = new Student[2];
    for (int i = 0; i < 2; ++i) {
        std::getline(std::cin, arr[i].name);
        std::cin >> arr[i].age;
        std::cin >> arr[i].avarage;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for (int i = 0; i < 2; ++i) {
        std::cout << "Student: " << arr[i].name << " " << arr[i].age << " " << arr[i].avarage << std::endl;
    }

    delete [] arr;
}