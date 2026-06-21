#include <iostream>
using namespace std;

int GetValue(int n)
{
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 2;
    }

    return GetValue(n / 3) + GetValue(n - 1);
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << GetValue(n);

    return 0;
}