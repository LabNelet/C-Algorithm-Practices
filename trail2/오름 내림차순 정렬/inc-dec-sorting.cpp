#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

void PrintSorted(int n, vector<int> &Array)
{
    for(int i = 0; i < n; i++)
    {
        cin >> Array[i];
    }

    sort(Array.begin(), Array.end());

    for(int i = 0; i < n; i++)
    {
        cout << Array[i] << " ";
    }

    cout << "\n";

    sort(Array.begin(), Array.end(), greater<int>());

    for(int i = 0; i < n; i++)
    {
        cout << Array[i] << " ";
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> Array(n);

    PrintSorted(n, Array);

    return 0;
}