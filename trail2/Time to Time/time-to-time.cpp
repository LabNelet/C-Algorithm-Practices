#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    c *= 60; // hour to minute
    c += d;

    a *= 60;
    a += b;

    cout << c - a;

    return 0;
}