#include <iostream>

#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    vector < string > results;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        string encoded = "";

        for (int i = 0; i < N; i += 2) {
            char first = S[i];
            char second = S[i + 1];

            if (first == '0' && second == '0') encoded += 'A';
            else if (first == '0' && second == '1') encoded += 'T';
            else if (first == '1' && second == '0') encoded += 'C';
            else if (first == '1' && second == '1') encoded += 'G';
        }

        results.push_back(encoded);
    }

    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << endl;
    }

    return 0;
}