//
// Created by cahInfor on 20/06/25.
//

#include <cassert>
#include <iostream>

#include "jawaban.h"

using namespace std;

int main() {
  assert(solve(8, {10,20,30,40,50,60,70,80}, {30,40,50,60}, {1,2,3,3,5,6}, {8,7,5,6,6,8}) == 150);
  assert(solve(4, {1,2,13,14}, {20,10,20}, {}, {}) == 24);

  cout << "All tests passed" << endl;
}
