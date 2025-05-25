//
// Created by cahInfor on 25/05/25.
//

#include <iostream>
#include <string>

#include "jawaban.h"

using namespace std;

int main() {
  vector<long long> pepohonan;
  long long N, M, pohon;
  long long max = 0;
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    cin >> pohon;
    max = max > pohon ? max : pohon;
    pepohonan.push_back(pohon);
  }

  cout << solve(pepohonan, M, max) << endl;
}
