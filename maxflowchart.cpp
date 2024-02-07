#include <iostream>
using namespace std;
//WAP for find the maximum number from given three numbers..
//start 
/* 
display input a,b,c
compare a > b;
if result true then compare a with c;
if result false then compare b & c;
get final max number
end of program 
*/

int main(){

    int a;
    int b;
    int c;

    cout << "Enter three numbers : a,b,c ="<< endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a == b && b == c && c == a)
    {
        cout << "a, b & c are same" << endl ;
    }
    else
    {
        if(a > b)
    {
        if(a > c)
        {
            cout << "a is maximum =" << a << endl;
        }
        else
        {
            cout << "c is maximum =" << c << endl;
        }
    }
    else
    {
        if(b > c)
        {
            cout << "b is maximum =" << b << endl;
        }
        else
        {
            cout << "c is maximum =" << c << endl;
        }
    }
    }

    return 0;
}