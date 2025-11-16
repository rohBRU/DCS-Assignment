#include <iostream>
using namespace std;
int main() {
    cout << "Enter size for number triangle: ";
    int n;
    cin >> n;
    cout << "Number triangle pattern:" << endl;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
