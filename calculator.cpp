// Grel cragir vor gumari hani hashvi bazmapatki ev bajani(grel Hashvich )
#include <iostream>
int calculator( int a, int b, char x){  
    if (x == '+') {
        return a+b;
    }

    else if(x == '-') {
            return a-b;
    }
    
    else if (x == '*') {
        return a*b;
    }
    
    else if (x == '/') {
        return a/b;
    }

    return 0;
}
//  ete srancic vochmek chi chgitem 
 
  int main() 
  { int a;
    int b;
    char ch;
    std::cout<<"Enter the first number";
    std::cin>>a;
    std::cout<<"Enter the second number";
    std::cin>>b;
    std::cout<<"Enter the operator";
    std::cin>>ch;


    
    std::cout<< calculator(a,b,ch);
    
    return 0;
    }


