#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void SearchEqual(int n)
{
    vector<vector<int>> Array(2, vector<int>(n));
    bool isEqual = true;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> Array[i][j];
        }
    }

    sort(Array[0].begin(), Array[0].end()); // 각 행을 정렬
    sort(Array[1].begin(), Array[1].end());

    for(int i = 0; i < n; i++) // 일치하지 않는다면 false
    {
        if(Array[0][i] != Array[1][i])
        {
            isEqual = false;
            break;
        }
    }

    cout << (isEqual ? "Yes" : "No"); 
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    SearchEqual(n);

    return 0;
}