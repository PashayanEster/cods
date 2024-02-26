#include <iostream>
#include <string>

// struct student{
//     std::string name;
//     int age;
//     float grade;
//     void set_age(int new_age){
//         age = new_age;
//     }
//     void set_grade( float new_grade){
//         grade = new_grade;
//     }
//     void  set_name (const std::string & new_name){
//         name = new_name;
//     }
//     int get_age( ){
//         return age;

//     }
//     std::string  get_name(){
//         return name;
//     }
//     float get_grade(){
//         return grade;
//     }
// };

// int main(){
//     student ob;
//     ob.set_age(10);
//     ob.set_grade(3);
//     ob.set_name("Pushok");
//     ob.get_age();
//     ob.get_grade();
//     ob.get_name();
//     std::cout<< ob.get_age();
//     std::cout<< ob.get_grade();
//     std::cout<< ob.get_name();
// }


struct Data{
union{
 int int_val;
    float float_val;
    char char_val;
};
bool access_int = 0;
bool access_float = 0;
bool access_char = 0;

void set_int( int new_val){
int_val = new_val;
    access_int = 1;
    access_float = 0;
    access_char = 0;
}
void set_float(float new_val){
float_val = new_val;
    access_int = 0;
    access_float = 1;
    access_char = 0;
}
void set_char( char new_val){
    char_val = new_val;
    access_int = 0;
    access_float = 0;
    access_char = 1;

}
int get_int (){
    if(access_int){
        return int_val;
    }
    else {
        std::cout<< "error";
        exit(1);
    }
}
    float get_float(){
        if(access_float){
            return float_val;
        }
        else {
            std::cout<< "ERROR";
            exit(1);

        }
    }
    char get_char(){
        if (access_char){
            return char_val;
        }
        else{
            std::cout<<" error";
            exit(1);
        }
    }

};
int main(){

int a = 7;
float b = 1.7;
char c = 'A';
Data x;
x.set_char(c);
x.set_int(a);
std::cout << x.get_char();

}


