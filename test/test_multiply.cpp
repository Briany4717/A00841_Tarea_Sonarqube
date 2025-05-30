//
// Created by Brian Roberto Gómez Martínez on 29/05/25.
//
#include <gtest/gtest.h>
#include "mul.h"

TEST(SubMul, HandlesPositiveInput)
{
    int multi = mul(5, 10);

    EXPECT_EQ(multi, 50);
}
