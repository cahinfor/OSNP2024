#include <iostream>
#include <string>
#include <vector>

using namespace std;

constexpr int MOD = 1e9 + 7;

int solve(const int B, const string &Y) {
  vector results(Y.length() + 1, 0);
  results[0] = 1;

  for (int i = 0; i < Y.length(); i++) {
    string possible_number = "";
    int pointer = 0;
    while (pointer + i < Y.length()) {
      if (pointer && Y[i] == '0')
        break;

      possible_number += Y[pointer + i];

      if (stoi(possible_number) >= B)
        break;

      results[pointer + i + 1] = (results[pointer + i + 1] + results[i]) % MOD;
      pointer++;
    }
  }

  return results[Y.length()];
}
