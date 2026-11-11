#include <iostream>
using namespace std;
int main()
{
    cout << "To convert from letter to number \n";
    char letter;
    cin >> letter;
    cout << int(letter) << endl;
    cout << "============================\n";
    cout << "To convert from number to letter \n";
    int num;
    cin >> num;
    cout << char (num) <<endl;
    return 0;    
}
