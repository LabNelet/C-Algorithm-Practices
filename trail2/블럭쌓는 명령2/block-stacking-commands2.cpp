#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;
    vector<int> Array(n, 0);

    for(int i = 0; i < k; i++)
    {   
        int a, b;
        cin >> a >> b;

        for(; a - 1 <= b - 1; a++)
        {
            Array[a - 1] += 1;
        }
    }

    sort(Array.begin(), Array.end(), greater<int>());

    cout << Array[0];

    return 0;
}