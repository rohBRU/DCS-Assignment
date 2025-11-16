#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number to count digits: ";
    int n, count = 0;
    cin >> n;
    if(n == 0) count = 1;
    else {
        do {
            count++;
            n /= 10;
        } while(n != 0);
    }
    cout << "Number of digits: " << count << endl;
    return 0;
}
