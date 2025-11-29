#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr, int index) {
    if(index == arr.size()) return;
    cout << arr[index] << " ";
    printArray(arr, index + 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    printArray(arr, 0);
}
