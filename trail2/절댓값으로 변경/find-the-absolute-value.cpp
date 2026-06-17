#include <iostream>
using namespace std;

void GetAbsoluteValue(int *array, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] < 0)
        {
            array[i] *= -1;
        }
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    GetAbsoluteValue(array, n);

    for(int result : array)
    {
        cout << result << " ";
    }

    return 0;
}