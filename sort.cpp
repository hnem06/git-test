#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a = {3, 6, 8, 9, 1, 0, 2, 5, 7, 4};

    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j] < a[i])
                swap(a[i],a[j]);
        }
    }

    for (int i : a) 
        cout << i << " ";

    return 0;
}