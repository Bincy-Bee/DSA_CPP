#include <iostream>
using namespace std;
//WAP for sum of digits..
int main(){
    int sum,n,lastDigit;

    cout << "Enter number : " << endl;
    cin >> n;
     sum = 0;
     while(n > 0){
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
     }
     cout << "Sum of Digits = " << sum << endl;
    return 0;
}