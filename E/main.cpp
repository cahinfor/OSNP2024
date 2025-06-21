//
// Created by cahInfor on 20/06/25.
//

#include <bits/stdc++.h>

#include "jawaban.h"

#define ll long long

using namespace std;

int main() {
    int N, M, K;

    scanf("%d %d %d", &N, &M, &K);

    vector<ll> B(N); // Kemanisan favorit bebek
    for (int i = 0; i < N; ++i) {
        scanf("%d", &B[i]);
    }

    vector<ll> G(M); // Kemanisan gulali
    for (int i = 0; i < M; ++i) {
        scanf("%d", &G[i]);
    }

    sort(G.begin(), G.end());

    // hubungan gosip
    vector<ll> P(K), Q(K);
    for (int i = 0; i < K; ++i) {
        int p, q;
        cin >> p >> q;
        P[i] = p; Q[i] = q;
    }

    cout << solve(N, B, G, P, Q) << endl;
}