#include <iostream>
using namespace std;

int Multiple(int a, int b)
{
    int mul = a;

    for(int i = 1; i < b; i++) // Caution - i must be 1 in order to evade error.
    {
        a *= mul;
    }

    return a;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    cout << Multiple(a, b);

    return 0;
}