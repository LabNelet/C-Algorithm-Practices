#include <iostream>
#include <string>

using namespace std;

void FindStrIndex(string n, string m)
{
    for(int i = 0; i <= n.length() - m.length(); i++)
    {
        int cnt = 0;

        for(int j = 0; j < m.length(); j++) //길이만큼 반복
        {
            if(n[i + j] == m[j])
            {
                cnt++;
            }
        }

        if(cnt == m.length()) //전체 일치시
        {
            cout << i; //시작 인덱스 출력
            return;
        }
    }
    
    cout << -1; //일치하는 경우가 없다면
}

int main() {
    // Please write your code here.
    string n, m;
    cin >> n >> m;

    FindStrIndex(n, m);

    return 0;
}