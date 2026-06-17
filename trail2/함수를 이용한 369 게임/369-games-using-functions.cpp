#include <iostream>
using namespace std;

bool IsContain369(int n)
{
    while(n > 0)
    {
        if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
        {
            return true;
        }
        n /= 10;
    }

    return false;
}

bool IsMagicNumber(int a)
{
    if(IsContain369(a) || a % 3 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    // Please write your code here.
    int a, b, cnt = 0;
    cin >> a >> b;

    for(; a <= b; a++)
    {
        if(IsMagicNumber(a))
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}