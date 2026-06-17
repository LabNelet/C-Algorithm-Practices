#include <iostream>
using namespace std;

void FindMinCM(int n, int m)
{
    int max;
    
    for(int i = 1; i < n + m; i++)
    {
        if(n % i == 0 && m % i == 0)
        {
            max = i;
        }
    }

    cout << (n * m) / max; //최소공배수 = 두 수의 곱 / 최대공약수
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    FindMinCM(n, m);

    return 0;
}