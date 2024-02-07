#include <iostream>
using namespace std;
//WAP for food menu list using user input..
int main(){
    int a,b;

    cout << "Welcome to CCD.." << endl;
    cout << "Please select 1 for Sandwich." << endl;
    cout << "Please select 2 for Pizza." << endl;
    cout << "Please select 3 for Burger." << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Select your favourite Sandwich" << endl;
        cout << "Please select 1 for Grill-Sandwich." << endl;
        cout << "Please select 2 for Scheswan-Sandwich." << endl;
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "You select Grill-Sandwich" << endl;
            break;
        case 2:
            cout << "You select Scheswan-Sandwich" << endl;
            break;
        
        default:
         cout << "Please select something from sandwich" << endl;
            break;
        }
        break;
    case 2 :
        cout << "Select your favourite Pizza" << endl;
        cout << "Please select 1 for Cheeseburst Pizza." << endl;
        cout << "Please select 2 for Non-veg douf Pizza." << endl;
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "You select Cheeseburst Pizza" << endl;
            break;
        case 2:
            cout << "You select Non-veg douf Pizza" << endl;
            break;
        
        default:
         cout << "Please select something from Pizza" << endl;
            break;
        }
        break;
    case 3 :
        cout << "Select your favourite Burger" << endl;
        cout << "Please select 1 for Maxicon Burger." << endl;
        cout << "Please select 2 for Mc-Vaggie Burger." << endl;
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "You select Maxicon Burger." << endl;
            break;
        case 2:
            cout << "You select Mc-Vaggie Burger" << endl;
            break;
        
        default:
         cout << "Please select something from Burger" << endl;
            break;
        }
        break;
    
    default:
    cout << "Please select some order." << endl;
        break;
    }
    
    
    return 0;
}