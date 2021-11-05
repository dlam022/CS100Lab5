#ifndef _SUB_TEST_HPP_
#define _SUB_TEST_HPP_

#include "gtest/gtest.h"

#include "sub.hpp"


TEST(subTest, CanSubstract) {
	Op* val1 = new Op(30);
	Op* val2 = new Op(6);

	Sub* val3 = new Sub(val1, val2);

	EXPECT_DOUBLE_EQ(val3->evaluate(), 24);
}

TEST(subTest, canSubToZero) {
	Op* a = new Op(4);
	Op* b = new Op(4);
	
	Sub* test = new Sub(a,b);

	EXPECT_EQ(test->evaluate(), 0);
}

TEST(subTest, tripleDigitSub) {
	Op* a = new Op(220);
	Op* b = new Op(150);

	Sub* test = new Sub(a,b);

	EXPECT_EQ(test->evaluate(), 70);
}

TEST(subTest, negSub) {
	Op* a = new Op(-30);
	Op* b = new Op(-12);

	Sub* test = new Sub(a,b);

	EXPECT_EQ(test->evaluate(), -18);
}

TEST(subTest, negSubPos) {
	Op* a = new Op(-13);
	Op* b = new Op(10);

	Sub* test = new Sub(a,b);

	EXPECT_EQ(test->evaluate(), -23);
}

TEST(subTest, decimalSub) {
	Op* a = new Op(3.5);
	Op* b = new Op(2.1);

	Sub* test = new Sub(a,b);
	
	EXPECT_EQ(test->evaluate(), 1.4);
}

TEST(subTest, stringPos) {
	Op* a = new Op(20);
	Op* b = new Op(9);

	Sub* test = new Sub(a,b);

	EXPECT_EQ(test->stringify(), "(20.000000 - 9.000000)");
}

TEST(subTest, stringNeg) {
	Op* a = new Op(-10);
	Op* b = new Op(-4);

	Sub* test = new Sub(a,b);

	EXPECT_EQ(test->stringify(), "(-10.000000 - -4.000000)");
}


#endif

