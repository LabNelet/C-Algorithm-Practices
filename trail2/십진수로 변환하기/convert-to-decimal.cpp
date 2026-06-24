#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> Array;

    while (n > 0) {
        Array.push_back(n % 10);
        n /= 10;
    }

    reverse(Array.begin(), Array.end()); // 역순

    int result = 0;
    
    for(int i = 0; i < Array.size(); i++) {
        result = result * 2 + Array[i]; 
    }

    cout << result;

    return 0;
}