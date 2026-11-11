#include <iostream>
using namespace std;
int main ()
{
    int n1;
    int n2;
    char op;
    cout << "Enter the first number\n ";
    cin >> n1;
    cout << "Enter the second number \n";
    cin >> n2;
    cout << "Enter the operation \n +\n -\n *\n /\n";
    cin >> op;
    if (op == '+')
       {
         cout <<n1 <<" + " << n2 <<" = " <<n1 + n2 ;
       }
    else if (op == '-')
       {
         cout <<n1 <<" - " << n2 <<" = " <<n1 - n2 ;
       }
    else if (op == '*')
       {
         cout <<n1 <<" * " << n2 <<" = " <<n1 * n2 ;
       }
    else if (op == '/')
       {
         cout <<n1 <<" / " << n2 <<" = " <<n1 / n2 ;
       }
    cout << "\n sucsess!!";
    return 0;
} 
