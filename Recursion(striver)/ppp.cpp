#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int max_sum_subarrays(vector<int> A) {
    int n = A.size();
    int max_sum = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = i + 1; k < n; k++) {
                vector<int> l1(A.begin(), A.begin() + j);
                vector<int> l2(A.begin() + j, A.begin() + i + 1);
                vector<int> l3(A.begin() + i + 1, A.begin() + k + 1);
                set<int> s1(l1.begin(), l1.end());
                set<int> s2(l2.begin(), l2.end());
                set<int> s3(l3.begin(), l3.end());
                if (s1.size() == l1.size() && s2.size() == l2.size() && s3.size() == l3.size()) {
                    if (s1.find_first_of(s2) == s1.end() && s2.find_first_of(s3) == s2.end() && s1.find_first_of(s3) == s1.end()) {
                        int sum_l1 = accumulate(l1.begin(), l1.end(), 0);
                        int sum_l2 = accumulate(l2.begin(), l2.end(), 0);
                        int sum_l3 = accumulate(l3.begin(), l3.end(), 0);
                        max_sum = max(max_sum, sum_l1 + sum_l2 + sum_l3);
                    }
                }
            }
        }
    }
    return max_sum;
}

int main() {
    vector<int> A = {1, 2, 3, 4, 5};
    cout << max_sum_subarrays(A) << endl; // expected output: 15
    return 0;
}