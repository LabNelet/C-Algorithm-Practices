#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<string> str(n);

    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    sort(str.begin(), str.end());

    for(int i = 0; i < n; i++)
    {
        cout << str[i] << "\n";
    }

    return 0;
}