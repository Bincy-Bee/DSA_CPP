#include <iostream>
using namespace std;
//WAP for sum of input N numbers..
int main(){
    int i,n,sum;

    cout << "Enter the number :" << endl ;
    cin >> n;

    sum = 0;
    // i = 1;
    // while( i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // cout << "Sum of N is :" << sum << endl ;

    for ( i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of N is :" << sum << endl ;
    
    return 0;
}