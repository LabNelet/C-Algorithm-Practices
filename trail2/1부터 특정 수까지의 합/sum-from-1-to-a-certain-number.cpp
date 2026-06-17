#include <iostream>
using namespace std;

int DivideTot10(int n)
{
    int total = 0;
    
    for(int i = 1; i <= n; i++)
    {
        total += i;
    }

    total /= 10;

    return total;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << DivideTot10(n);

    return 0;
}