#include<iostream>
// #define DAT = 9999; // we also initializing variable using macro (same as CONST);
using namespace std;


//static data
// int main(){
//     int a = 6; //initialization & declaration
//     int b = 8;  //initialization & declaration

//     cout << "Sum of a & b is :" << a+b;
//     return 0;
// }

//dynamic data
int main(){
    const int DAT = 89898; // variable using const (can not change variable after initialazation)

    int gg; //initialization
    char ch; //initialization

    gg = 24 ; //decleration
    ch = 'b' ; //decleration

    int a ;
    int b ;

    cout << "Enter the value of a :";
    cin >> a;

    cout << "Enter the value of b :";
    cin >> b;
 
    cout << "Sum of a & b is :" << a+b << endl; //"endl" is use to enter new line.. same work as "\n"
    cout << "HI here i m bhavi pate";

    // cout << "Sum of a & b is :" << a+b ;
    // cout << endl <<"HI here i m bhavi pate"; //we can also use "endl" with new line starting

    return 0;
}