#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string isValid(string s) {
    unordered_map<char, int> freq;
    for (int i = 0; i < s.size(); i++)
        freq[s[i]]++;

    unordered_map<int, int> countFreq;
    for (auto p : freq)
        countFreq[p.second]++;

    if (countFreq.size() == 1) return "YES";

    if (countFreq.size() == 2) {
        auto it = countFreq.begin();
        int f1 = it->first, c1 = it->second;
        ++it;
        int f2 = it->first, c2 = it->second;

        if ((c1 == 1 && (f1 - f2 == 1 || f1 == 1)) || (c2 == 1 && (f2 - f1 == 1 || f2 == 1)))
            return "YES";
    }

    return "NO";
}

int main() {
    string s;
    cin >> s;
    cout << isValid(s) << endl;
    return 0;
}
