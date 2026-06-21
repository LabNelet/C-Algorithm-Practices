#include <iostream>
using namespace std;

int DoEverything(int count, long long current_value)
{
    if (count < 3)
    {
        int num;
        cin >> num;
        
        return DoEverything(count + 1, current_value * num);
    }

    if (current_value == 0)
    {
        return 0;
    }

    return (current_value % 10) + DoEverything(count, current_value / 10);
}

int main() {
    cout << DoEverything(0, 1); // 초기 누적 곱 1

    return 0;
}