#include <iostream>
#include <vector>
#include <algorithm>  // For reverse function
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    reverse(arr.begin(), arr.end());  // Reversing the vector

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}