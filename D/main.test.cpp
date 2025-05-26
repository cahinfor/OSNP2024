//
// Created by cahInfor on 26/05/25.
//

#include <cassert>
#include <iostream>

#include "jawaban.h"

using namespace std;

int main() {
  assert(solve(16, "114240") == 3);
  assert(solve(4, "114240") == 0);
  assert(solve(10, "0") == 1);
  assert(solve(10, "1001") == 1);
  assert(solve(1000000, "123456789123456789123456789123456789") == 649774399);

  cout << "All tests passed" << endl;
}
