//
// Created by cahInfor on 20/06/25.
//

#include <iostream>
#include <vector>

#include "jawaban.h"

using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  vector<int> B(N); // Kemanisan favorit bebek
  for (int i = 0; i < N; ++i) cin >> B[i];

  vector<int> G(M); // Kemanisan gulali
  for (int i = 0; i < M; ++i) cin >> G[i];

  // hubungan gosip
  vector<int> P(K), Q(K);
  for (int i = 0; i < K; ++i) {
    int p, q;
    cin >> p >> q;
    P[i] = p; Q[i] = q;
  }

  cout << solve(N, B, G, P, Q) << endl;
}