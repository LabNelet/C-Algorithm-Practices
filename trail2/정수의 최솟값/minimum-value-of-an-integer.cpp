#include <iostream>
using namespace std;

int MinNum(int a, int b, int c)
{
    int min = a; //a가 가장 작다고 가정.

    if(b < min)
    {
        min = b;
    }
    if(c < min)
    {
        min = c;
    }

    return min;
}

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;

    cout << MinNum(a, b, c);

    return 0;
}