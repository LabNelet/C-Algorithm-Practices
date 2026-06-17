#include <iostream>
using namespace std;

void PrintRect(int n)
{
    int cnt = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(cnt == 10)
            {
                cnt = 1;
            }
            cout << cnt << " ";
            cnt++;
        }
        cout << "\n";
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    PrintRect(n);

    return 0;
}