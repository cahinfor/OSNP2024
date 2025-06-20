#include <iostream>
#include <set>
#include <vector>

using namespace std;

const int MAXN = 100005;

int parent[MAXN];

int find(const int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);

    if (a != b) {
        parent[b] = a;
    }
}

long long solve(const int N, const vector<int> &B, vector<int> G, const vector<int> &P, const vector<int> &Q) {
    for (int i = 0; i < N; ++i) {
        parent[i] = i;
    }

    // Hubungan gosip
    for (int i = 0; i < P.size(); ++i) {
        unite(P[i]-1, Q[i]-1);
    }

    // Gabungkan bebek-bebek berdasarkan kelompok
    unordered_map<int, vector<int>> groups;
    for (int i = 0; i < N; ++i) {
        groups[find(i)].push_back(B[i]);
    }

    // Sort semua tingkat kemanisan gulali untuk binary search
    ranges::sort(G);

    long long total_dissatisfaction = 0;

    for (auto& [leader, bebek_group] : groups) {
        long long best_dissatisfaction = LLONG_MAX;

        set<int> checked;
        for (int fav : bebek_group) {
            auto it = lower_bound(G.begin(), G.end(), fav);
            vector<int> candidates;
            if (it != G.end()) candidates.push_back(*it);
            if (it != G.begin()) candidates.push_back(*prev(it));
            for (int g : candidates) {
                if (checked.count(g)) continue;
                checked.insert(g);
                long long total = 0;
                for (int f : bebek_group) total += abs(f - g);
                best_dissatisfaction = min(best_dissatisfaction, total);
            }
        }

        total_dissatisfaction += best_dissatisfaction;
    }

    return total_dissatisfaction;
}
