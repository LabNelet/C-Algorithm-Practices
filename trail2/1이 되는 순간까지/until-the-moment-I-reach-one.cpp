#include <iostream>
using namespace std;

int CountTask(int n)
{
    if(n <= 1)
    {
        return 0;
    }

    if(n % 2 == 0)
    {
        return CountTask(n / 2) + 1;
    }
    else
    {
        return CountTask(n / 3) + 1;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << CountTask(n);

    return 0;
}