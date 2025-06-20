#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100005;

int parent[MAXN];

int find(const int x) {
    if (parent[x] == 0) return x;
    if (parent[x] == x) return x;

    return find(parent[x]);
}

void unite(const int a, const int b) {
    if (parent[b] == 0) {
        if (parent[a] == 0) {
            parent[a] = a;
        }
        parent[b] = parent[a];
        return;
    }

    parent[parent[a]] = parent[b];
}

long long solve(const int N, const vector<int> &B, vector<int> G, const vector<int> &P, const vector<int> &Q) {
    // Hubungan gosip
    for (int i = 0; i < P.size(); ++i) {
        unite(P[i], Q[i]);
    }

    // Gabungkan bebek-bebek berdasarkan kelompok
    unordered_map<int, vector<int>> groups;
    for (int i = 1; i <= N; ++i) {
        groups[find(i)].push_back(B[i-1]);
    }

    // Sort semua tingkat kemanisan gulali untuk binary search
    ranges::sort(G);

    long long total_dissatisfaction = 0;

    for (auto& [leader, bebek_group] : groups) {
        long long best_dissatisfaction = LLONG_MAX;

        // Coba semua gulali, cari yang total selisihnya paling kecil
        for (const int g : G) {
            long long total = 0;
            for (const int fav : bebek_group) {
                total += abs(fav - g);
            }
            best_dissatisfaction = min(best_dissatisfaction, total);
        }

        total_dissatisfaction += best_dissatisfaction;
    }

    return total_dissatisfaction;
}
