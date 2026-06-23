#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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

    static void PrintInfo(const vector<Student> &students) //Static 함수는 const 를 쓸 수 없음에 주의.
    {
        for(int i = 0; i < students.size(); i++)
        {
            cout << students[i].name << " " << students[i].kor << " " << students[i].eng << " " << students[i].math << "\n";
        }
    } 
};

bool cmp(Student a, Student b)
{
    if(a.kor != b.kor)
    {
        return a.kor > b.kor;
    }

    if(a.eng != b.eng)
    {
        return a.eng > b.eng;
    }

    if(a.math != b.math)
    {
        return a.math > b.math;
    }
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