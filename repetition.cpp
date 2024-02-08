#include <iostream>
using namespace std;
//WAP for print 1 to n for the given n from the users..
int main(){
    int a;
    cout << "Enter number : " << endl;
    cin >> a;

    //using While loop (Entry control loop)
    // int i = 1;
    // while (i <= a)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    //using for loop (Entry control loop)
    // for(int i = 1; i <= a ; i++)
    // {
    //     cout << i << endl;
    // }

    //using do while loop (exit control loop)
    int i = 1;
    do{
        cout << i << endl;
        i++;
    }while (i <= a);
    
    return 0;
}