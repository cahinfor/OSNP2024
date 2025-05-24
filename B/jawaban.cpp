//
// Created by cahInfor on 24/05/25.
//

#include <iostream>

using namespace std;

using ll = long long;

ll solve(const ll B, const ll C, const ll D) {
    ll result = 0;
    const ll candil_bebek = C - D;

    if (candil_bebek == 0 && B > C) return B-C;
    if (candil_bebek == 0) return 0;

    for (ll bawah = 1; bawah*bawah <= candil_bebek; bawah++) {
        if (candil_bebek % bawah == 0) {
            if (bawah > D && bawah <= B) {
                result++;
            }

            const ll atas = candil_bebek / bawah;
            if (atas != bawah && atas > D && atas <= B) {
                result++;
            }
        }
    }

    return result;
}
