#include <gtest/gtest.h>
#include "calc.h"

TEST(Calculator, test_addition)
{
    ASSERT_EQ(add(5,7), 12);
}

TEST(Calculator, test_subtraction)
{
    ASSERT_EQ(subtract(15,5), 10);
}

TEST(Calculator, test_divide)
{
    ASSERT_EQ(divide(36, 6), 6);
}

TEST(Calculator, test_multiply)
{
    ASSERT_EQ(multiply(5, 3), 15);
}

TEST(Calculator, test_power)
{
    ASSERT_EQ(power(5, 2), 25);
}