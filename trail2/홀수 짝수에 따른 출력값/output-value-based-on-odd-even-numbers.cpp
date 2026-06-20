#include <iostream>
using namespace std;

int SumOneSide(int n)
{
    if(n <= 0)
    {
        return 0;
    }

    return SumOneSide(n - 2) + n;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
     
    cout << SumOneSide(n);

    return 0;
}