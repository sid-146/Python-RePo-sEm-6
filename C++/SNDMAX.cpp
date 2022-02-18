#include <iostream>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int _ = 0; _ < testCase; _++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a >= b && a >= c)
        {
            if (b >= c)
            {
                cout << b;
            }
            else
            {
                cout << c;
            }
        }
        else if (b >= a && b >= c)
        {
            if (a >= c)
            {
                cout << a;
            }
            else
            {
                cout << c;
            }
        }
        else if (a >= b)
        {
            cout << a;
        }
        else
        {
            cout << b;
        }
        cout << endl;
    }

    return 0;
}
