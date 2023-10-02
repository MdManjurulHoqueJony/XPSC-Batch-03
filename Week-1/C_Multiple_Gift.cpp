#include <iostream>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;
    
    long long maxLength = 1;
    long long current = x;

    while (current * 2 <= y) {
        current *= 2;
        maxLength++;
    }

    cout << maxLength << endl;
    return 0;
}
