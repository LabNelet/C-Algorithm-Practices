#include <iostream>
using namespace std;

int RecursionSum(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return RecursionSum(n - 1) + n;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << RecursionSum(n);

    return 0;
}