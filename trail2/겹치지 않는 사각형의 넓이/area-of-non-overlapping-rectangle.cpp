#include <iostream>
#include <vector>
using namespace std;

#define OFFSET 1000
#define MAX_SIZE 2000

int main(){
    vector<vector<int>> grid(MAX_SIZE, vector<int>(MAX_SIZE, 0));
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET; y1 += OFFSET; x2 += OFFSET; y2 += OFFSET;

    for(int y = y1; y < y2; y++) 
    {
        for(int x = x1; x < x2; x++)
        {
            grid[y][x] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET; y1 += OFFSET; x2 += OFFSET; y2 += OFFSET;

    for(int y = y1; y < y2; y++) 
    {
        for(int x = x1; x < x2; x++)
        {
            grid[y][x] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET; y1 += OFFSET; x2 += OFFSET; y2 += OFFSET;

    for(int y = y1; y < y2; y++) 
    {
        for(int x = x1; x < x2; x++) 
        {
            grid[y][x] = 2;
        }
    }

    int remaining_area = 0;
    for(int y = 0; y < MAX_SIZE; y++) 
    {
        for(int x = 0; x < MAX_SIZE; x++) 
        {
            if(grid[y][x] == 1) 
            {
                remaining_area++;
            }
        }
    }

    cout << remaining_area;

    return 0;
}