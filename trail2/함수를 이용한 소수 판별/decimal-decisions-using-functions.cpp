#include <iostream>
using namespace std;

bool IsPrime(int a)
{
    for(int i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int SumPrime(int a, int b)
{
    int sum = 0;

    for(; a <= b; a++)
    {
        if(IsPrime(a))
        {
            sum += a;
        }
    }

    return sum;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    cout << SumPrime(a, b);

    return 0;
}