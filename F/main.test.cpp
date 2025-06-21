//
// Created by cahInfor on 21/06/25.
//

#include <cassert>
#include <iostream>

#include "jawaban.h"

using namespace std;

int main() {
  assert(solve(1, 1) == 1);
  assert(solve(2, 3) == 11);
  assert(solve(3, 2) == 11);

  cout << "All tests passed" << endl;
}
