#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Create frequency map
        map<int, int> frequency_map;
        for (int i = 0; i < n; i++) {
            frequency_map[arr[i]]++;  
        }

        if (frequency_map.size() > 2) {
            cout << "No" << endl;
        } else {
            int freq_1 = frequency_map.begin()->second; // second points at value
            int freq_2 = frequency_map.rbegin()->second; // reverse begin last element ko point krk rha

            if (freq_1 == freq_2) {
                cout << "Yes" << endl;
            } else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
