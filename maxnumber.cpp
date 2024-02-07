#include<iostream>
using namespace std;
//WAP for maxium of two number
// int main(){
//     //static 
//     // int a = 7;
//     // int b = 15;

//     // if (a > b)
//     // {
//     //     cout << "Value a is maximum : " << a;
//     // }
//     // else if (b > a)
//     // {
//     //     cout << "Value b is maximum : " << b;
//     // }
//     // else
//     // {
//     //     cout << "Both a & b are same : " << a,b;
//     // }
//  // dynamic
//     int a;
//     int b;

//     cout << "Enter the value of a :";
//     cin >> a;
//     cout << "Enter the value of b :";
//     cin >> b;

//     if (a > b)
//     {
//         cout << "Value a is maximum : " << a;
//     }
//     else if (b > a)
//     {
//         cout << "Value b is maximum : " << b;
//     }
//     else
//     {
//         cout << "Both a & b are same : " << a,b;
//     }
//     return 0;
// }

//WAP for a person is a applicable for voting are not..

int main(){
    int age;

    cout << "Enter your age :";
    cin >> age;

    if(age >= 18)
    {
        cout << "Your elligible for votting";
    }
    else{
        cout << "You are not elligible for vote";
    }

    return 0;
}