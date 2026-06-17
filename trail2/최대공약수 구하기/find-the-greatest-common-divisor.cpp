#include <iostream>
using namespace std;

void FindMaxCF(int n, int m)
{
    int max;
    for(int i = 1; i < n + m; i++)
    {
        if(n % i == 0 && m % i == 0)
        {
            max = i;
        }
    }
    cout << max;
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    FindMaxCF(n, m);

    return 0;
}