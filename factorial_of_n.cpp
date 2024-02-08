#include <iostream>
using namespace std;
//WAP for factorial of N number..
int main(){
    int i,n, fact;

    cout << "Enter the number :" << endl ;
    cin >> n;

    fact = 1;
    // i = n;
    // while (i >= 1)
    // {
    //     fact = fact * i;
    //     i--;
    // }
    // cout << "Factorial of N is : " << fact << endl ;

    for(i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout << "Factorial of N is : " << fact << endl ;
    
    return 0;
}