#include <iostream>
#include <string>

using namespace std;

void IsAllLower(string &A, int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        if(A[i] != A[i + 1])
        {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}

int main() {
    // Please write your code here.
    string A;
    cin >> A;

    int len = A.length();

    IsAllLower(A, len);

    return 0;
}