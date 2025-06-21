#include <bits/stdc++.h>

#define ll long long

using namespace std;

const ll MAXN = 100005;

ll parent[MAXN];

ll find(const ll x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(ll a, ll b) {
    a = find(a);
    b = find(b);

    if (a != b) {
        parent[b] = a;
    }
}

ll calculate_dissatisfaction(ll left, ll right, const vector<ll>& B, const vector<ll>& G) {
    while (right - left > 3) {
        ll mid1 = left + (right - left) / 3;
        ll mid2 = right - (right - left) / 3;

        ll d1 = 0, d2 = 0;
        for (ll b : B) {
            d1 += abs(b - G[mid1]);
            d2 += abs(b - G[mid2]);
        }

        if (d1 < d2) {
            right = mid2;
        } else {
            left = mid1;
        }
    }

    // Brute-force over small range [left..right]
    ll best = LLONG_MAX;
    for (ll i = left; i <= right; ++i) {
        ll d = 0;
        for (ll b : B) d += abs(b - G[i]);
        best = min(best, d);
    }
    return best;
}


ll solve(const ll N, const vector<ll> &B, vector<ll> G, const vector<ll> &P, const vector<ll> &Q) {
    for (ll i = 0; i < N; ++i) {
        parent[i] = i;
    }

    // Hubungan gosip
    for (ll i = 0; i < P.size(); ++i) {
        unite(P[i]-1, Q[i]-1);
    }

    // Gabungkan bebek-bebek berdasarkan kelompok
    unordered_map<ll, vector<ll>> groups;
    for (ll i = 0; i < N; ++i) {
        groups[find(i)].push_back(B[i]);
    }

    // Sort semua tingkat kemanisan gulali untuk binary search
    ranges::sort(G);
    G.erase(unique(G.begin(), G.end()), G.end());

    ll total_dissatisfaction = 0;

    for (auto& [leader, bebek_group] : groups) {
        total_dissatisfaction += calculate_dissatisfaction(0, G.size()-1, bebek_group, G);
    }

    return total_dissatisfaction;
}
