#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; ++i) {
        bool printed = false;

        if (i % 3 == 0) {
            cout << "Fizz";
            printed = true;
        }
        if (i % 5 == 0) {
            cout << "Buzz";
            printed = true;
        }
        if (i % 2 == 0) {
            cout << "Ping";
            printed = true;
        }
        if (i % 7 == 0) {
            cout << "Pong";
            printed = true;
        }

        if (!printed) {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}
