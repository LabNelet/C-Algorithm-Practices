#include <iostream>
using namespace std;

class Agent
{
    public:
    char id;
    int score;

    Agent(){};

    Agent(char id, int score) : id(id), score(score){}
};

int main() {
    // Please write your code here.
    int min, index = 0;
    Agent agents[5];

    for(int i = 0; i < 5; i++)
    {
        char id;
        int score;
        cin >> id >> score;

        agents[i] = Agent(id, score);
    }

    min = agents[0].score;

    for(int i = 0; i < 5; i++)
    {
        if(min > agents[i].score)
        {
            min = agents[i].score;
            index = i;
        }
    }

    cout << agents[index].id << " " << agents[index].score;

    return 0;
}