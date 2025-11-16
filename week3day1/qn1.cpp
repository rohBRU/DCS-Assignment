#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum from 1 to " << n << " is: " << sum << endl;
    return 0;
}
