// https://about.codecov.io/blog/how-to-set-up-codecov-with-c-and-github-actions/

#include<assert.h>
#include "lib.h"
#include "otherlib.h"
#include "dilip.h"

int main() {
  assert(f1(20) == 21);
  assert(f1(5) == 2);
  assert(f2() == 1); // error in tutorial using post-increment after return - result should be 1 not 2
  assert(f3(43) == 1);
  assert(f() == 1);
}
