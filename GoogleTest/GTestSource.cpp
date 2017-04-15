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

TEST(Test_f1, returnApB1)
{
	EXPECT_EQ(4, f1(2, 2));
}

TEST(Test_f1, returnApB2)
{
	EXPECT_EQ(203, f1(101, 102));
}

TEST(Test_f1, returnApB3)
{
	EXPECT_EQ(3, f1(1, 2));
}

TEST(Test_f1, returnApB4)
{
	EXPECT_EQ(1003, f1(1, 1002));
}

TEST(Test_f1, returnB)
{
	EXPECT_EQ(102, f1(1, 102));
}
