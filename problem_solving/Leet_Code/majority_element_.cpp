#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 2, 4};
    map<int, int> freq;

    for (int val : arr) {
        freq[val]++;  
    }
    cout << "Value\tCount\n";
    for (auto& pair : freq) {
        cout << pair.first << "\t" << pair.second << "\n";
    }

    return 0;
}
