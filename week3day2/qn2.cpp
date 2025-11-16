#include <iostream>
using namespace std;
int main() {
    cout << "Enter size for inverted triangle: ";
    int n;
    cin >> n;
    cout << "Inverted triangle pattern:" << endl;
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
