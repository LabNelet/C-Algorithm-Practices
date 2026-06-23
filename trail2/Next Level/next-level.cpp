#include <iostream>
#include <string>
using namespace std;

class User
{
    public:
    
    string id;
    int level;

    User(){id = "Null", level = 0;}

    User(string id, int level)
    {
        this -> id = id;
        this -> level = level;
    }

    void PrintInfo()
    {
        cout << "user " << id << " lv " << level << "\n"; 
    }
};

int main() {
    // Please write your code here.
    string id;
    int level;

    User user1("codetree", 10);

    cin >> id >> level;
    User user2(id, level);

    user1.PrintInfo();
    user2.PrintInfo();

    return 0;
}