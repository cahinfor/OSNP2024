//
// Created by cahInfor on 21/06/25.
//

#include <bits/stdc++.h>

using namespace std;

int solve(const int N, const int M) {
    int max, min;
    if (N>M) {
        max = N;
        min = M;
    }
    else {
        max = M;
        min = N;
    }

    return min * (max + min - 1) + max * (max - 1)/2;
}
