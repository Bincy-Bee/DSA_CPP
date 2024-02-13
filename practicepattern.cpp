#include <iostream>
using namespace std;
//WAP for below pattern
//1
//23
//345
//4567
//56789
// int main(){
//     int i,n;
//     cout << "Enter number n :" << endl;
//     cin >> n;
//     for(i = 1; i <= n ; i++)
//     {
//         for(int j = i; j <= 2 * i - 1 ; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//WAP for below pattern
//1
//1 11
//1 11 111
//1 11 111 1111
//1 11 111 1111 1111
// int main(){
//     int i,n,j;

//     cout << "Enter n value : " << endl;
//     cin >> n;
//     for ( i = 1; i <= n ; i++)
//     {   
//         int m = 0;
//         for( j = 1; j <= i; j++)
//         {
//             m = m * 10 + 1;
//             cout << m << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//WAP for below pattern
//1
//A B
//1 2 3
//A B C D
//1 2 3 4 5

// int main(){
//     int i,n,j;
//     cout << "Enter value of n : " << endl;
//     cin >> n;

//     for ( i = 1; i <= n; i++){
//         for ( j = 1; j <= i; j++ ){
//             if(i % 2 == 1){
//                 cout << j;
//             }
//             else{
//                 char ch = 'A' + j - 1;
//                 cout << ch;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


//WAP for below pattern
//5
//4 5
//3 4 5
//2 3 4 5
//1 2 3 4 5
// int main (){
//     int i,j,n;
//     cout << "Enter value of n : "<< endl;
//     cin >> n;
//     for(i = n; i >= 1; i--)
//     {
//         for( j = i; j <= n; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//WAP for below pattern
//1
//1 B
//1 B 3
//1 B 3 D
//1 B 3 D 5
int main(){
    int i,j,n;
    cout << "Enter number n : " << endl;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if( j % 2 == 1){
                cout << j;
            }
            else{
                char ch = 'A' + j - 1;
                cout << ch;
            }
        }
        cout << endl;
    }
    return 0;
}