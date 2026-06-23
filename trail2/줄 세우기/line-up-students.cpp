#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
    public:
    int height;
    int weight;
    int number;

    static int cnt;

    Student()
    {
        cnt++;
        number = cnt;
    }

    static void InsertInfo(vector<Student> &students)
    {
        for(int i = 0; i < students.size(); i++)
        {
            cin >> students[i].height >> students[i].weight;
        }
    }

    static void PrintInfo(const vector<Student> &students)
    {
        for(int i = 0; i < students.size(); i++)
        {
            cout << students[i].height << " " << students[i].weight << " " << students[i].number << "\n";
        }
    }
};

int Student::cnt = 0;

bool cmp(Student a, Student b)
{
    if(a.height != b.height)
    {
        return a.height > b.height;
    }

    if(a.weight != b.weight)
    {
        return a.weight > b.weight;
    }

    return a.number < b.number;
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<Student> students(n);

    Student::InsertInfo(students);

    sort(students.begin(), students.end(), cmp);

    Student::PrintInfo(students);

    return 0;
}