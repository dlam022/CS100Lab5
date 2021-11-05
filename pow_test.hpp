#ifndef POW_TEST_HPP
#define pOW_TEST_HPP

#include "gtest/gtest.h"

#include "op.hpp"
#include "pow.hpp"
#include "add.hpp"


TEST(powTest ,simplePow) {
	Op* a = new Op(3);
	Op* b = new Op(2);
	
	Pow* test = new Pow(a,b);
	
	EXPECT_EQ(test->evaluate(), 9);
}

TEST(powTest, bigPow) {
	Op* a = new Op(15);
	Op* b = new Op(7);
	
	Pow* test = new Pow(a,b);
	
	EXPECT_EQ(test->evaluate(), 170859375);
}

TEST(powTest, zeroPow) {
	Op* a = new Op(20);
	Op* b = new Op(0);
	
	Pow* test = new Pow(a,b);

	EXPECT_EQ(test->evaluate(), 1);
}

TEST(powTest, negPow) {
	Op* a = new Op(2);
	Op* b = new Op(-2);
	
	Pow* test = new Pow(a,b);

	EXPECT_EQ(test->evaluate(), 0.25);
}

TEST(powTest, negNumPosExp) {
	Op* a = new Op(-2);
	Op* b = new Op(2);

	Pow* test = new Pow(a,b);

	EXPECT_EQ(test->evaluate(), 4);
}

TEST(powTest, strPow) {
	Op* a = new Op(2);
	Op* b = new Op(4);

	Pow* test = new Pow(a,b);
	
	EXPECT_EQ(test->stringify(), "(2.000000 ** 4.000000)");
}


#endif
