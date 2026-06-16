#include <iostream>
using namespace std;

void PrintIrony(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "12345^&*()_\n";
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    PrintIrony(n);

    return 0;
}