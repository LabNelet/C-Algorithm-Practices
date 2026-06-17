#include <iostream>
using namespace std;

void Add(int a, int c)
{
    cout << a << " + " << c << " = " << a + c;
}

void Sub(int a, int c)
{
    cout << a << " - " << c << " = " << a - c;
}

void Div(int a, int c)
{
    if(c == 0)
    {
        cout << "A cannot be divided by zero";
    }
    
    cout << a << " / " << c << " = " << a / c;
}

void Mul(int a, int c)
{
    cout << a << " * " << c << " = " << a * c;
}

void Calculate(int a, char o, int c)
{
    switch(o)
    {
        case '+': Add(a, c); break;
        case '-': Sub(a, c); break;
        case '/': Div(a, c); break;
        case '*': Mul(a, c); break;
        default : cout << "False";
    }
}

int main() {
    // Please write your code here.
    int a, c;
    char o;

    cin >> a >> o >> c;

    Calculate(a, o, c);

    return 0;
}