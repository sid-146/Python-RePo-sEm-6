#include <iostream>

using namespace std;

int main()
{
    int Length, evenCheck = 0, oddCheck = 0;

    cin >> Length;

    for (int i = 0; i < Length; i++)
    {
        int number;
        cin >> number;

        if (number % 2 == 0)
        {
            evenCheck++;
        }
        else
        {
            oddCheck++;
        }
    }
    if (evenCheck > oddCheck)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
    }
    return 0;
}