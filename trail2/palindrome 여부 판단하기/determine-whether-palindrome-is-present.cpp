#include <iostream>
#include <string>
using namespace std;

void IsPalindrome(string &A)
{
    int n = A.length() - 1;
    bool isPassed = true;

    for(int i = 0; i < A.length()/2; i++)
    {
        if(A[i] != A[n])
        {
            cout << "No";
            isPassed = false;
            break;
        }
        n--;
    }

    if(isPassed)
    {
        cout << "Yes";
    }  
}

int main() {
    // Please write your code here.
    string A;
    cin >> A;

    IsPalindrome(A);

    return 0;
}