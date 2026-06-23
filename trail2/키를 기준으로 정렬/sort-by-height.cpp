#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Human
{
    public:
    string name;
    int height;
    int weight;

    Human(){};
    Human(string name, int height, int weight) : name(name), height(height), weight(weight){}

    static void PrintSortedInfo(const vector<Human> &human, int n)
    {
        for(int i = 0; i < n; i++)
        {
            cout << human[i].name << " " << human[i].height << " " << human[i].weight << "\n";
        }
    }
};

bool cmp(const Human &a, const Human &b)
{
        return a.height < b.height;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    vector<Human> humans(n);

    for(int i = 0; i < n; i++)
    {
        cin >> humans[i].name >> humans[i].height >> humans[i].weight;
    }

    sort(humans.begin(), humans.end(), cmp);

    Human::PrintSortedInfo(humans, n);
        
    return 0;
}