#include <iostream>
using namespace std;
int main ()
{
    int pass = 333;
    int enpass ;
    cout <<"(You have 3 tries to enter the password)\n";
    int i = 3;
    while(i >= 0)
    {
        cout <<"Enter the password: \n";
        cin >> enpass;
        if (enpass == 333)
        {
            cout <<"True\n";
            break;
        }
        else
        {
            if(i > 1)
            {
            cout <<"Sorry try agin\n";
            cout <<"You have: " <<i - 1 <<" more\n";
            }
            if (i == 1)
            {
                cout <<"Sorry you have no more tries, Try agin later\n";
            }
        }
        i--;
        if(i== 0)
        {
            break;
        }
    } 
}