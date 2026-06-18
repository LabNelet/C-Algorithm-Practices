#include <iostream>
using namespace std;

void PrintVStars(int n)
{
    if(n == 0)
    {
        return;
    }

    for(int i = 0; i < n; i++)
    {
        cout << "*" << " ";
    }

    cout << "\n";

    PrintVStars(n - 1);

    for(int i = 0; i < n; i++)
    {
        cout << "*" << " ";
    }

    cout << "\n";
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    PrintVStars(n);

    return 0;
}