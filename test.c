// https://about.codecov.io/blog/how-to-set-up-codecov-with-c-and-github-actions/

#include<assert.h>
#include "lib.h"

int main() {
  assert(f1(5) == 2);
  assert(f2() == 1); // error in tutorial using post-increment after return - result should be 1 not 2
}
