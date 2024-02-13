#include <iostream>
using namespace std;
//WAP for multiplication table of N..
int main(){
    int i,n;

    cout << "Enter number for table : " << endl;
    cin >> n;
     i = 1;
     while(i <= 10){
        cout << n <<" x " << i << " = " << n * i << endl ;
        i++;
     }
    return 0;
}