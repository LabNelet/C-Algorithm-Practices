#include <iostream>
#include <vector>

using namespace std;

void GetTotalM(int m, vector<int> array)
{
    int total = 0;

    while(1)
    {
        if(m > 0)
        {
            total += array[m];

            if(m == 1)
            {
                break;
            }

            if(m % 2 == 1)
            {
                m -= 1;
            }
            else
            {
                m /= 2;
            }
        }
    } 

    cout << total;
}

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    vector<int> array(n + 1);

    for(int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }

    GetTotalM(m, array);

    return 0;
}