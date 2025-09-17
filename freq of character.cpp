#include <iostream>
using namespace std;

int main() {
    string str = "raghav";
    int freq[26] = {0};

    // Count frequency
    for (char c : str) {
        freq[c - 'a']++;
    }

    // Print frequency
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " -> " << freq[i] << endl;
        }
    }

    return 0;
}
