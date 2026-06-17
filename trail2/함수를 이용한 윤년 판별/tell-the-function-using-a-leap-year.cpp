#include <iostream>
using namespace std;

bool IsLeapYear(int y)
{
    if(y % 100 == 0 && y % 400 != 0)
    {
        return false;
    }
    if(y % 4 == 0)
    {
        return true;
    }

    return false;
}

int main() {
    // Please write your code here.
    int y;
    cin >> y;

    cout << (IsLeapYear(y) ? "true" : "false");

    return 0;
}