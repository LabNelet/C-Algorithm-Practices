#include <iostream>
#include <vector>

using namespace std;

vector<int> A; 
vector<vector<int>> ArrayAA;
int n, m;

void PrintGroupSum()
{
    cin >> n >> m;
    A.resize(n + 1); //1을 더하는 것은 n번째를 직관적으로 계산하기 위함.
    ArrayAA.assign(m, vector<int>(3)); //3으로 선언하는 것 또한 위와 같음.

    for(int i = 1; i <= n; i++) //수열 A 정의
    {
        cin >> A[i];
    }

    for(int i = 0; i < m; i++)  //정수쌍 a1, a2 정의
    {
        for(int j = 1; j <= 2; j++)
        {
            cin >> ArrayAA[i][j];
        }
    }

    for(int i = 0; i < m; i++) 
    {
        int start = ArrayAA[i][1];
        int end = ArrayAA[i][2];
        int sum = 0;               

        for(int k = start; k <= end; k++) //누적합
        {
            sum += A[k];
        }

        cout << sum << "\n";
    }
}

int main() {
    // Please write your code here.
    PrintGroupSum();

    return 0;
}