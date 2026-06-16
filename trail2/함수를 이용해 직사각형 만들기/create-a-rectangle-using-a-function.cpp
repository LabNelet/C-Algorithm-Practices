#include <iostream>
using namespace std;

void PrintRect(int n, int m) // n is Row, m is Column
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << "1";
        }
        cout << "\n";
    }
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    PrintRect(n, m);

    return 0;
}