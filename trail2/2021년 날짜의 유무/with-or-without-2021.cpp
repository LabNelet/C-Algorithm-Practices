#include <iostream>
using namespace std;

bool IsExist2021(int m, int d)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(m > 12 || m < 1 || d < 1) //If values exceed limitation, return false
    {
        return false;
    }
    if(d > daysInMonth[m])
    {
        return false;
    }

    return true;
}

int main() {
    // Please write your code here.
    int m, d;
    cin >> m >> d;

    cout << (IsExist2021(m, d) ? "Yes" : "No");

    return 0;
}