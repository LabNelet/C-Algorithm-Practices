#include <iostream>
using namespace std;

int SumEachSquare(int n)
{
    if(n < 10)
    {
        return n * n;
    }

    return SumEachSquare(n / 10) + ((n % 10) * (n % 10));
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << SumEachSquare(n);

    return 0;
}