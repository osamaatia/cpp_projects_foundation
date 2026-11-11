#include <iostream>
#include <array>
    using namespace std;
int main ()
{
    int points = 0;
    int answer[3];
    int pattern[3][8] ={
        {1, 1, 2, 3, 5, 8, 13, 21},
        {2, 4, 6, 8, 10, 12, 14, 16},
        {1, 3, 5, 7, 9, 11, 13, 15}};
        cout << "Welcom to GOT THE PATTERN\n";
        cout<< "Pattern 1\n";
        cout << "{1 , 1 , __ , 3 , 5 , 8 , 13 , 21}\n";
        cout << "Your answer is: \n";
        cin >> answer[0];
        
        
        cout<< "Pattern 2\n";
        cout << "{2 , 4 , 6 , 8 , 10 , 12 , __ , 16}\n";
        cout << "Your answer is: \n";
        cin >> answer[1];
        
        
        cout<< "Pattern 3\n";
        cout << "{1 , 3 , 5 , 7 , 9 , __ , 13 , 15}\n";
        cout << "Your answer is: \n";
        cin >> answer[2];
    if(answer[0] == pattern[0][2])
    {
        points++;
    }
    if(answer[1] == pattern[1][6])
    {
        points++;
    }
    if(answer[2] == pattern[2][5])
    {
        points++;
    }
    cout <<"Congratessssss\n";
    cout <<"Your points is: " <<points <<"/3\n";
    
    return 0;
} 
