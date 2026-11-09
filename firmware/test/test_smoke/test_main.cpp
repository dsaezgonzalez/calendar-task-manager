// Phase A0 smoke test: proves the host-side (native) test setup works.
// Real data model, ordering and merge tests arrive in Phase A4.
#include <unity.h>

void setUp() {}
void tearDown() {}

void test_unit_test_runner_works() {
  TEST_ASSERT_EQUAL_INT(4, 2 + 2);
}

int main(int, char**) {
  UNITY_BEGIN();
  RUN_TEST(test_unit_test_runner_works);
  return UNITY_END();
}
