#include <gtest/gtest.h>

#include "example.h"
#include "example_c.h"

TEST(example, add) {
  double res;
  res = add_numbers(1.0, 2.0);
  ASSERT_NEAR(res, 3.0, 1.0e-11);
}

TEST(example, c_add) {
  double res;
  res = c_add_numbers(1.0, 2.0);
  ASSERT_NEAR(res, 3.0, 1.0e-11);
}
