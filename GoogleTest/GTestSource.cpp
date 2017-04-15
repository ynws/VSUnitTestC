#include <gtest/gtest.h>
#include "funcs.h"

TEST(GTestSample, Assert)
{
	EXPECT_EQ(1, 1);
}

TEST(Test_f1, returnA)
{
	EXPECT_EQ(1, f1(1, -1));
}

TEST(Test_f1, returnB)
{
	EXPECT_EQ(3, f1(1, 2));
}
