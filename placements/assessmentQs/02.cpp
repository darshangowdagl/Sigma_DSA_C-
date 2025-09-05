#include <iostream>
#include <set>
#include <vector>
using namespace std;

int maxUniqueCandies(const vector<int>& A, const vector<int>& B) {
    int N = A.size();        // calculate N
    int limit = N / 2;       // coins = N/2 each

    // Unique candies in each shop
    set<int> uniqueA(A.begin(), A.end());
    set<int> uniqueB(B.begin(), B.end());

    vector<int> chosenA, chosenB;

    // Pick up to N/2 from A
    for (int x : uniqueA) {
        if ((int)chosenA.size() < limit) chosenA.push_back(x);
    }

    // Pick up to N/2 from B
    for (int x : uniqueB) {
        if ((int)chosenB.size() < limit) chosenB.push_back(x);
    }

    // Merge ensuring uniqueness
    set<int> result;
    for (int x : chosenA) result.insert(x);
    for (int x : chosenB) result.insert(x);

    // Print selection
    cout << "From A: ";
    for (int x : chosenA) cout << x << " ";
    cout << endl;

    cout << "From B: ";
    for (int x : chosenB) cout << x << " ";
    cout << endl;

    return result.size();
}

int main() {
    // Example 1
    vector<int> A1 = {2, 3, 4, 1};
    vector<int> B1 = {4, 6, 5, 7};

    cout << "Example 1:" << endl;
    cout << "Maximum unique candies = " 
         << maxUniqueCandies(A1, B1) << endl << endl;

    // Example 2
    vector<int> A2 = {2, 2, 2, 2, 2, 2};
    vector<int> B2 = {2, 3, 4, 5, 6, 7};

    cout << "Example 2:" << endl;
    cout << "Maximum unique candies = " 
         << maxUniqueCandies(A2, B2) << endl;

    return 0;
}
