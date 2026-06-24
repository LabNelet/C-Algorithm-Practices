#include <iostream>
#include <vector>
using namespace std;

#define OFFSET 100
#define MAX_SIZE 200

int main() {
    // Please write your code here.
    int n, x1, x2, y1, y2, cnt = 0;
    vector<vector<int>> grid(MAX_SIZE, vector<int>(MAX_SIZE, 0));

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;

        for(int y = y1; y < y2; y++)
        {
            for(int x = x1; x < x2; x++)
            {
                grid[y][x] = 1;
            }
        }
    }

    for(int i = 0; i < MAX_SIZE; i++)
    {
        for(int j = 0; j < MAX_SIZE; j++)
        {
            if(grid[i][j] == 1)
            {
                cnt++;
            }   
        }
    }

    cout << cnt;

    return 0;
}