#include <iostream>
#include <string>

using namespace std;

class Confidential
{
    public:
        string code;
        char location;
        int time;

    void PrintInfo()
    {
        cout << "secret code : " << code << "\n";
        cout << "meeting point : " << location << "\n";
        cout << "time : " << time << endl;
    }
};

int main() {
    // Please write your code here.

    Confidential one;

    cin >> one.code >> one.location >> one.time;
    one.PrintInfo();

    return 0;
}