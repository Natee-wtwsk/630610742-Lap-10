// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    cout << "Press Enter 3 times to reveal your future.";
    for(int i = 0;i < 3;i++) cin.get();
    srand(time(0));
    int i = rand() %9 + 1;
    string grade;
    
    switch (i)
    {
        case 1 : grade = "A"; break;
        case 2 : grade = "B+"; break;
        case 3 : grade = "B"; break;
        case 4 : grade = "C+"; break;
        case 5 : grade = "C"; break;
        case 6 : grade = "D+"; break;
        case 7 : grade = "D"; break;
        case 8 : grade = "F"; break;
        case 9 : grade = "W"; break;
    }
    cout << "You will get " << grade << " in this 261102.";

    return 0;
}