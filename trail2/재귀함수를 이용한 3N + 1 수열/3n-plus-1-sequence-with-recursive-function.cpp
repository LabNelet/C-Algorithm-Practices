#include <iostream>
using namespace std;

int GetValue(int n) //3n + 1 (n = 홀수) , n/2 (n = 짝수)
{   
    if(n == 1)
    {
        return 0;
    }

    if(n % 2 == 0)
    {
        return GetValue(n / 2) + 1;
    }
    else
    {
        return GetValue(n * 3 + 1) + 1;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << GetValue(n);

    return 0;
}