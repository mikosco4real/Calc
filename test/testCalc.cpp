#include <gtest/gtest.h>
#include "calc.h"

TEST(Calculator, test_addition)
{
    ASSERT_EQ(add(5,7), 12);
}
