#include <iostream>
using namespace std;

void FillArray(int Array[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cin >> Array[i];
    }
}

bool IsContain(int ArrayA[], int lenA, int ArrayB[], int lenB)
{
    if(lenA < lenB)
    {
        return false;
    }

    for(int i = 0; i <= lenA - lenB; i++)
    {
        bool isMatch = true;

        for(int j = 0; j < lenB; j++)
        {
            if(ArrayA[i + j] != ArrayB[j])
            {
                isMatch = false;
                break;
            }
        }

        if(isMatch)
        {
            return true;
        }
    }

    return false;
}

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    int ArrayA[a], ArrayB[b];

    FillArray(ArrayA, a);
    FillArray(ArrayB, b);

    if(IsContain(ArrayA, a, ArrayB, b))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}