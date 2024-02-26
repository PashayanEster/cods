#include <iostream>
#include <string>

class student{
    int m_age;
    std::string m_name {" "};
    public:
student();
~student();
student(int, std::string);// parametrakan kanstruktor
void setage(int);
void setname(std::string);
int getage();
std::string getname();


};