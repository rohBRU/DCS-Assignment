#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number to reverse: ";
    int n, rev = 0;
    cin >> n;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed number: " << rev << endl;
    return 0;
}
