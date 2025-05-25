//
// Created by cahInfor on 25/05/25.
//

#include <cassert>
#include <iostream>

#include "jawaban.h"

using namespace std;

int main() {
  assert(solve({4, 2, 9, 9, 5, 3, 6, 7, 2, 10}, 25, 10) == 3);
  assert(solve({2, 7, 2, 9, 5}, 5, 9) == 5);
  assert(solve({2, 7, 2, 9, 5}, 25, 9) == 0);
  assert(solve({2, 7, 2, 9, 5}, 125, 9) == -1);

  cout << "All tests passed" << endl;
}
