#ifndef _MULT_TEST_HPP_
#define _MULT_TEST_HPP_

#include "gtest/gtest.h"

#include "mult.hpp"
#include "add.hpp"

TEST(Mult, CanMultiply) {
	Base* val1 = new Op(4);
	Base* val2 = new Op(6);

	Base* val3 = new Mult(val1, val2);


	EXPECT_DOUBLE_EQ(val3->evaluate(), 24);
}

TEST(Mult, CanMultiplyDecimalAndWhole) {
	Base* a = new Op(1.5);
	Base* b = new Op(3);

	Base* test = new Mult(a,b);

	EXPECT_DOUBLE_EQ(test->evaluate(), 4.5);
}

TEST(Mult, CanMultiplyTwoNegativeNumber) {
	Base* a = new Op(-3);
	Base* b = new Op(-9);
	
	Base* test = new Mult(a,b);

	EXPECT_EQ(test->evaluate(), 27);
}

TEST(Mult, CanMultiplyTwoDecimal) {
	Base* a = new Op(2.5);
	Base* b = new Op(1.5);
	
	Base* test = new Mult(a,b);
	
	EXPECT_EQ(test->evaluate(), 3.75);
}

TEST(Mult, CanMutiplyOneNegNumAndOnePos) {
	Base* a = new Op(-2);
	Base* b = new Op(3);
	
	Base* test = new Mult(a,b);

	EXPECT_EQ(test->evaluate(), -6);
}



TEST(Mult, MultStringZero) {
	Base* a = new Op(0);
	Base* b = new Op(6);

	Base* test = new Mult(a, b);
	string product = "(0.000000 * 6.000000)";
	EXPECT_EQ(test->stringify(), product);
}

TEST(Mult, MultStringNegNum) {
	Base* a = new Op(-50);
	Base* b = new Op(-120);

	Base* test = new Mult(a,b);
	string product = "(-50.000000 * -120.000000)";
	EXPECT_EQ(test->stringify(), product);
}

TEST(Mult ,useAddClass) {
	Base* a = new Op(20);
	Base* b = new Op(5);

	Base* product = new Mult(a,b);
	Base* c = new Op(6);
	Base* test = new Add(product, c);
	
	EXPECT_EQ(test->evaluate(), 106);
}


#endif


	
	
	
