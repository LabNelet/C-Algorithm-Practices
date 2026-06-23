#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
    public:

    string name;
    int kor;
    int eng;
    int math;

    Student(){};

    static void InsertInfo(vector<Student> &students)
    {
        for(int i = 0; i < students.size(); i++)
        {
            cin >> students[i].name >> students[i].kor >> students[i].eng >> students[i].math;
        }
    }

    static void PrintInfo(const vector<Student> &students)
    {
        for(int i = 0; i < students.size(); i++)
        {
            cout << students[i].name << " " << students[i].kor << " " << students[i].eng << " " << students[i].math << "\n";
        }
    } 
};

bool cmp(Student a, Student b)
{
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
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