#include <iostream>
using namespace std;
int main() {
    cout << "Enter size for alphabet pattern: ";
    int n;
    cin >> n;
    cout << "Alphabet pattern:" << endl;
    for(int i = 1; i <= n; i++) {
        char ch = 'A';
        for(int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}
