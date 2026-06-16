#include <iostream>
using namespace std;

void Print10Stars()
{
   for(int j = 0; j < 10; j++)
   {
    cout << "*";
   }
   cout << "\n";
}

int main() {
    // Please write your code here.
    for(int i = 0; i < 5; i++)
    {
        Print10Stars();
    }

    return 0;
}