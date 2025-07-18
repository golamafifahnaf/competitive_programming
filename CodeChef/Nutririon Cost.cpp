#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, C;
        cin >> N >> C;

        vector < int > A(N), B(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> B[i];

        // Store the minimum cost for each vitamin type
        const int MAX_N = 101;
        vector < int > minCost(MAX_N, INT_MAX);

        for (int i = 0; i < N; i++) {
            int vitamin = A[i];
            int cost = B[i];
            minCost[vitamin] = min(minCost[vitamin], cost);
        }

        // Collect all valid minimum costs
        vector < int > costs;
        for (int i = 1; i <= N; i++) {
            if (minCost[i] != INT_MAX) {
                costs.push_back(minCost[i]);
            }
        }

        // Sort the costs ascending
        sort(costs.begin(), costs.end());

        // Try selecting top k cheapest vitamins
        int maxValue = 0;
        int totalCost = 0;
        for (int i = 0; i < (int) costs.size(); i++) {
            totalCost += costs[i];
            int vitaminsTaken = i + 1;
            int value = C * vitaminsTaken - totalCost;
            maxValue = max(maxValue, value);
        }

        cout << maxValue << "\n";
    }
    return 0;
}
