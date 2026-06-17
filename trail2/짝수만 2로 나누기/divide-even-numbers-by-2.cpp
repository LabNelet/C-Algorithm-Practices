#include <iostream>
#include <vector>
using namespace std;

void DivEvenNum2(vector<int> &x)
{
    for(int &i : x) 
    {
        if(i % 2 == 0)
        {
            i /= 2;
        }
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> array(n); //vector

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    DivEvenNum2(array);
    
    for(int i : array)
    {
        cout << i << " ";
    }

    return 0;
}