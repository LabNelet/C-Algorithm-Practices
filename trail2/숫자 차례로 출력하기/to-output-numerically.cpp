#include <iostream>
using namespace std;

void PrintOneToN(int n)
{
    if(n == 0)
    {
        return;
    }

    PrintOneToN(n - 1);

    cout << n << " ";
}

void PrintNToOne(int n)
{
    if(n == 0)
    {
        return;
    }

    cout << n << " ";

    PrintNToOne(n - 1);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    PrintOneToN(n);
    cout << "\n";

    PrintNToOne(n);
    cout << "\n";

    return 0;
}