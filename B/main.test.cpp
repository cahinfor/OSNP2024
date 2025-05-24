//
// Created by cahInfor on 24/05/25.
//

#include <cassert>
#include <iostream>

#include "jawaban.h"

using namespace std;

int main() {
    assert(solve(100, 13, 3 ) == 2);
    assert(solve(9, 9,0 ) == 3);
    assert(solve(77, 42, 42 ) == 35);
    assert(solve(7, 42, 42) == 0);

    cout << "All tests passed" << endl;
}