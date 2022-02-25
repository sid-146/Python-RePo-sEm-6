#include <iostream>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++)
    {
        int first, second;
        cin >> first >> second;

        cout << first + second;
    }

    return 0;
}