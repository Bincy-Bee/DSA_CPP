#include <iostream>
using namespace std;
//WAP to print even number till the given N from the users..
int main(){
    int N;
    cout << "Enter number :" << endl;
    cin >> N;
    for(int i = 1 ; i <= N; i++){
        if(i%2 == 0){
            cout << i << endl;
        }
    }

    return 0;
}