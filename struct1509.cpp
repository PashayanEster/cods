

// Grel stexcel struct, struct-i mej pahel name,avarage, unenal usanoxneri zangvac, lcnel tvyalnery mejy, heto zangvaci mijic heracnel ayn usanoxin um avarage < 60;
#include <iostream>
struct student{
    char* name;
    int avarage;
}ob;
void initialize_students(student* ob, char* name, int avg){
    ob->name = name;
    ob->avarage = avg;
}


int main(){
    student * ob = new student[3];
    int size = 3;
    for (int i = 0; i < size; ++i) {
        char* name;
        int avg;
        std::cin >> name;
        std::cin >> avg;
        initialize_students(&ob[i], name, avg);
    }

    for(int i = 0; i < size; ++i){
       if(ob[i].avarage < 60){
            std::swap(ob[i], ob[size - 1]);
            student* tmp = new student[-- size];
            for (int j = 0; j < size; ++j) {
                tmp[j].name = ob[j].name;
                tmp[j].avarage = ob[j].avarage;
            }
            delete [] ob;
            ob = tmp;
            tmp = nullptr;
       }
    }
}