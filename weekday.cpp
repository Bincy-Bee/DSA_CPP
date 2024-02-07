#include <iostream>
using namespace std;
//WAP for week day for given number by user..
 int main(){
    int a;

    cout << "Enter number :" << endl;
    cin >> a;
    //with if else statements
    if(a == 0)
    {
        cout << "Today is Sunday" << endl;
    }
    else if(a == 1)
    {
        cout << "Today is Monday" << endl;
    }
    else if(a == 2)
    {
        cout << "Today is Tuesday" << endl;
    }
    else if(a == 3)
    {
        cout << "Today is Wednesday" << endl;
    }
    else if(a == 4)
    {
        cout << "Today is Thursday" << endl;
    }
    else if(a == 5)
    {
        cout << "Today is Friday" << endl;
    }
    else if(a == 6)
    {
        cout << "Today is Saturday" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
//with Switch case statement...
    switch (a)
    {
    case 0:
        cout << "Today is Sunday" << endl;
        break;
    case 1:
        cout << "Today is Monday" << endl;
        break;
    case 2:
        cout << "Today is Tuesday" << endl;
        break;
    case 3:
        cout << "Today is Wednesday" << endl;
        break;
    case 4:
        cout << "Today is Thurday" << endl;
        break;
    case 5:
        cout << "Today is Friday" << endl;
        break;
    case 6:
        cout << "Today is Saturday" << endl;
        break;
    
    default:
    cout << "Invalid input" << endl;
        break;
    }
    return 0;
 }