#include <iostream>
using namespace std;

void IsMagicNumber(int n)
{
    int one, ten, result;
    one = n % 10;
    ten = n / 10;

    cout << (n % 2 == 0 && (one + ten) % 5 == 0 ? "Yes" : "No");
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    IsMagicNumber(n);

    return 0;
}