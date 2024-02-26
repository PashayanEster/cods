#include "student.h"

student::student(){
    m_name = 0;
    m_name = " ";
}
student::~student(){
    m_name = 0;
    m_name = " ";
}
void student::setage(int age){
    m_age = age;
}
void student::setname(std::string name){
    m_name = name;
}
int student::getage(){return age}
std::string student::getname(){ return name}

int main(){
    student st;
    st.setage(18);

}