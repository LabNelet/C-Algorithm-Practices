#include <iostream>
#include <vector>
using namespace std;

int FindMax(const vector<int> &num, int n) // &로 받아오는 것은 연산을 줄이기 위함임. 상수로 받아오는 것은 쓰기를 방지하기 위함.
{
    if(n == 0)
    {
        return num[0];
    }

    int maxOfRest = FindMax(num, n - 1);

    return (maxOfRest > num[n]) ? maxOfRest : num[n];
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> num(n);

    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << FindMax(num, n - 1);
    
    return 0;
}