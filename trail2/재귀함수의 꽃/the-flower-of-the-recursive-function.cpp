#include <iostream>
using namespace std;

void TurningCollection(int n)
{
    if(n == 0)
    {
        return;
    }

    cout << n << " ";

    TurningCollection(n - 1);

    cout << n << " ";
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    TurningCollection(n);

    return 0;
}