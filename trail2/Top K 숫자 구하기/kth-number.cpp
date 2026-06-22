#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void PrintTopK(int n, int k)
{
    vector<int> Array(n);

    for(int i = 0; i < n; i++)
    {
        cin >> Array[i];
    }

    sort(Array.begin(), Array.end());

    cout << Array[k - 1];
}

int main() {
    // Please write your code here.
    int n, k;
    cin >> n >> k;

    PrintTopK(n, k);
    
    return 0;
}