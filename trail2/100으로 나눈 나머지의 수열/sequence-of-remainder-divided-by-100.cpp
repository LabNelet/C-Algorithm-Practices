#include <iostream>
using namespace std;

int GetValue(int n) // n1 = 1, n2 = 4, nk = (nk-1 * nk-2) % 100 
{
    if(n == 1)
    {
        return 2;
    }
    if(n == 2)
    {
        return 4;
    }

    return (GetValue(n - 1) * GetValue(n - 2)) % 100;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << GetValue(n);

    return 0;
}