#ifndef _SUB_TEST_HPP_
#define _SUB_TEST_HPP_

#include "gtest/gtest.h"

#include "sub.hpp"


TEST(subTest, CanSubstract) {
	Op* val1 = new Op(9);
	Op* val2 = new Op(6);

	Sub* val3 = new Sub(val1, val2);

	EXPECT_DOUBLE_EQ(val3->evaluate(), 3);
}

#endif

