#include <iostream>
using namespace std;
//WAP for telephone menu while talking to customer care executive..
int main(){
    int a,b;

    cout << "Hello welcome JIO.. How can i halp you ? Please select your language." << endl ;
    cout << "For english press 1" << endl ;
    cout << "For gujarati press 2" << endl ;
    cout << "For hindi press 3" << endl ;
    cin >> a ;

    switch (a)
    {
    case 1:
        cout << "Your language is saved as defualt language." << endl ;
        cout << "Press 1 to know about your plan validity." << endl ;
        cout << "Press 2 for network/datausage/more data ass-on plan." << endl ;
        cout << "Press 3 lost card/PUK number" << endl ;
        cin >> b;

        switch (b)
        {
        case 1:
            cout << "Your Plan is Expire on 12 Decmber 2024 and 11:55 pm." << endl;
            break;
        case 2:
            cout << "Press * for talk to customer care executive for more details. " << endl;
            break;
        case 3 :
            cout << "Your PUK number is 1122334455." << endl;
            break;
        
        default:
        cout << "Plese select anything" << endl ;
            break;
        }
        break;
    case 2:
        cout << "Tamari language defualt set thay gay chhe." << endl ;
        cout << "Tamara chalu plan vishe janava mate 1 dabavo." << endl ;
        cout << "Network/Data vaprash/ vadhu data add mate 2 dabavo." << endl ;
        cout << "Khovayela card/ PUK number mate 3 dabavo." << endl ;
        cin >> b;

        switch (b)
        {
        case 1:
            cout << "Tamara chalu plan ni aakhri tarikh chhe, 12 Decmber 2024 ane 11:55 pm." << endl;
            break;
        case 2:
            cout << "Vadhu mahiti mate * dabavo and customer executive ne vat karo. " << endl;
            break;
        case 3 :
            cout << "Tamaro PUK number che 1122334455." << endl;
            break;
        
        default:
        cout << "Kaink select karo.." << endl ;
            break;
        }
        break;
    case 3:
        cout << "Aapki language default set kardi gay he." << endl ;
        cout << "Aapki chalu plan janane ke liye 1 dabaiye." << endl ;
        cout << "Network/datausage/more data ass-on plan ke liye 2 dabaiye" << endl ;
        cout << "Gum hue card/PUK number ke liye 3 dabaiye" << endl ;
        cin >> b;

        switch (b)
        {
        case 1:
            cout << "Aapke chalu plan ni aakhri date 12 Decmber 2024 and 11:55 pm." << endl;
            break;
        case 2:
            cout << "* dabaiye aur customer executive se baat kare,jayada janakari ke liye" << endl;
            break;
        case 3 :
            cout << "Aapka PUK number he 1122334455." << endl;
            break;
        
        default:
        cout << "Kuch pasand kijiye" << endl ;
            break;
        }
        break;
    
    default:
        cout << "Please Select any OR press 8 for exit.." << endl ;
        break;
    }
    return 0;
}