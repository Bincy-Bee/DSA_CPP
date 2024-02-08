#include <iostream>
using namespace std;
//WAP for factors of N numbers..
int main(){
    int i,n;

    cout << "Enter the number :" << endl ;
    cin >> n;

    // i = 1;
    // while ( i <= n)
    // {
    //     if(n % i == 0)
    //     {
    //         cout << i << endl;
    //     }
    //     i++;
    // }

    for(i = 1; i <= n; i++)
    {
        if( n % i == 0)
        {
            cout << i << endl ;
        }
    }

    return 0;
}