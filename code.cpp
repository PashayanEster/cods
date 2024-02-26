// #include <iostream>

//using namespace std;

// / int max_my(int* arr, int size)
// { int num = -1;
//     for (int i = 0; i < size; ++i)
//     {
//         if (*arr > num) {
//             num = *arr;
//         }
//         ++arr;
//     }
//     return num;
// }
// int main(){
//     const int size=10;
//     int arr [size];
//     for (int i = 0; i < size; ++i)
//     {
//         // std::cin >> arr[i];
//         arr[i] = i + 4;
//     }
//     std::cout << max_my(arr, size);
// }

// xndir 2 hashvel trvac tvi tvanshanneri artadryali ev gumari tarberutyuny:
// void foo( int a)
// {
// int sum = 0;
// int mul = 1;
// int sub;    

// while (a > 0)
// {sum += a%10;
// mul *= a% 10;
// a = a/10;
// sub = mul - sum; 
// }
// std::cout << sub; 
// }

// int main()
// {
//     int a;
//     std::cin>>a;
//     foo(a);
// }    
// xndir 1 hashvel tvi tvanshanneri gumary:
// void foo (int a) {
//    int sum =0;
//    while(a > 0)
//    { 
//       sum+= a%10;
//       a /= 10;
//    }
//       std::cout<< sum;
//    }

// int main()
// {
//   int a ; 
//   std::cin>> a;
//   foo(a);
//   return 0;
// }

// XNDIR 3-Grel funkcia, vory stanum e mijakayqi skizb ev verj(erku tver) ev hashvum mijakayqum gtnvox kent tveri  qanaky:___POSIX_C_DEPRECATED_STARTING_198808L

// int foo(int first, int last)
// {
//     int count=0;
//     for(int i = first; i <= last; ++i)
//     {
//         if (i%2!=0)
//         {
//             count+= 1;  
//         }
//     }
//     return count;
// }
// int main ()
// {  
//     int a;
//     int b ; 
//     int k = foo(1, 7);
//     std::cout<< k;
// }


// XNDIR 4 - Gtnel zangvaci ayn tarreri qanaky, voronq anmnacord bajanvum en irenc kargahamari(index)vra:
// int foo(int size, int* arr) 
// {
//     int count =0;
//     for (int i = 2; i < size; ++i)
//     {    
//         if (arr[i] % i == 0)
//         {   
//             count += 1;
//         }
//     }
//     return count;
// }

// int main ()
// {
//     int size = 0;
//     std::cin >> size;
//     int arr[size];
//     for (int i = 0; i< size; ++i)
//     { 
//         std::cin>>arr[i];
//     }
//     int c = foo(size, arr);
//     std::cout << c;
// }


