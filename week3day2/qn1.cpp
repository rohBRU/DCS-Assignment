#include <iostream>
using namespace std;
int main() {
    cout << "Enter size of solid square: ";
    int n;
    cin >> n;
    cout << "Solid square pattern:" << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
