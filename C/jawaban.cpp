//
// Created by cahInfor on 25/05/25.
//

#include <iostream>
#include <vector>

#define ll long long

using namespace std;

ll panjang_kayu(const vector<ll> &pepohonan, const ll tinggi) {
  ll panjang = 0;
  for (const long long i : pepohonan) {
    if (i > tinggi) {
      panjang += (i - tinggi);
    }
  }

  return panjang;
}

ll solve(const vector<ll> &pepohonan, const ll panjang, const ll max) {
  ll result = -1;
  ll bawah = 0, atas = max;
  while (bawah <= atas) {
    ll tengah = bawah + (atas - bawah) / 2;
    const ll panjang_kayu_didapat = panjang_kayu(pepohonan, tengah);

    if (panjang_kayu_didapat < panjang) {
      atas = tengah - 1;
    } else {
      bawah = tengah + 1;
      result = tengah;
    }
  }

  return result;
}
