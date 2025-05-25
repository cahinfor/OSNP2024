//
// Created by cahInfor on 24/05/25.
//

#include <cassert>
#include <iostream>

#include "jawaban.h"

using namespace std;

int main() {
  assert(solve("OSN") == 3);
  assert(solve("NASIONAL") == 4);
  assert(solve("INFORMATIKA") == -1);
  assert(solve("OSNNSONO") == 5);

  cout << "All tests passed" << endl;
}
