#include <iostream>
using namespace std;

void PrintHW(int n)
{   
    if(n == 0)
    {
        return;
    }

    PrintHW(n - 1);

    cout << "HelloWorld" << "\n";
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    PrintHW(n);

    return 0;
}