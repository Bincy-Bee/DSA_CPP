#include <iostream>
using namespace std;

int main(){
    int sum ,num, firstDigit, lastDigit;
    cout << "Enter number" << endl;
    cin >> num;
    sum = 0;
    lastDigit = num % 10;

    while(num >= 10){
        num = num / 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
    cout << "Sum of firstDigit & lastDigit is = " << sum << endl;
    return 0;
}