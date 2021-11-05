#ifndef _MULT_TEST_HPP_
#define _MULT_TEST_HPP_

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(Mult, CanMultiply) {
	Op* val1 = new Op(4);
	Op* val2 = new Op(6);

	Mult* val3 = new Mult(val1, val2);


	EXPECT_DOUBLE_EQ(val3->evaluate(), 24);
}

TEST(Mult, CanMultiplyDecimalAndWhole) {
	Op* a = new Op(1.5);
	Op* b = new Op(3);

	Mult* test = new Mult(a,b);

	EXPECT_DOUBLE_EQ(test->evaluate(), 4.5);
}

TEST(Mult, CanMultiplyTwoNegativeNumber) {
	Op* a = new Op(-3);
	Op* b = new Op(-9);
	
	Mult* test = new Mult(a,b);

	EXPECT_EQ(test->evaluate(), 27);
}

TEST(Mult, CanMultiplyTwoDecimal) {
	Op* a = new Op(2.5);
	Op* b = new Op(1.5);
	
	Mult* test = new Mult(a,b);
	
	EXPECT_EQ(test->evaluate(), 3.75);
}

TEST(Mult, CanMutiplyOneNegNumAndOnePos) {
	Op* a = new Op(-2);
	Op* b = new Op(3);
	
	Mult* test = new Mult(a,b);

	EXPECT_EQ(test->evaluate(), -6);
}



TEST(Mult, MultStringZero) {
	Op* a = new Op(0);
	Op* b = new Op(6);

	Mult* test = new Mult(a, b);
	string product = "(0.000000 * 6.000000)";
	EXPECT_EQ(test->stringify(), product);
}

TEST(Mult, MultStringNegNum) {
	Op* a = new Op(-50);
	Op* b = new Op(-120);

	Mult* test = new Mult(a,b);
	string product = "(-50.000000 * -120.000000)";
	EXPECT_EQ(test->stringify(), product);
}



#endif


	
	
	
