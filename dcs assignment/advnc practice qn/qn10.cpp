#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string compressed = "";
    int count = 1;

    for (int i = 1; i <= str.size(); i++) {
        if (str[i] == str[i - 1])
            count++;
        else {
            compressed += str[i - 1];
            compressed += to_string(count);
            count = 1;
        }
    }

    cout << compressed << endl;
    return 0;
}
