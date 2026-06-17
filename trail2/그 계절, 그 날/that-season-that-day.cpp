#include <iostream>
using namespace std;

bool IsLeapYear(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

void GetSeason(int y, int m, int d)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(IsLeapYear(y))
    {
        daysInMonth[2] = 29;
    }

    if(y < 0 || m > 12 || m < 1 || d > 31 || d < 1 || daysInMonth[m] < d)
    {
        cout << -1;
    }
    else if(m >= 3 && m <= 5)
    {
        cout << "Spring";
    }
    else if(m >= 6 && m <= 8)
    {
        cout << "Summer";
    }
    else if(m >= 9 && m <= 11)
    {
        cout << "Fall";
    }
    else if(m == 12 || m == 1 || m == 2)
    {
        cout << "Winter";
    }
}

int main() {
    // Please write your code here.
    int y, m, d;
    cin >> y >> m >> d;

    GetSeason(y, m, d);

    return 0;
}