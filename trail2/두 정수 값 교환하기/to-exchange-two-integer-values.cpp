#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    Swap(a, b);
    cout << a << " " << b;

    return 0;
}