#ifndef ADD_TEST_HPP
#define ADD_TEST_HPP

#include "gtest/gtest.h"

#include "add.hpp"
#include "op.hpp"
#include "mult.hpp"

TEST(addTest, canAdd){
	Base* a = new Op(5);
	Base* b = new Op(7);
	Base* test = new Add(a,b);
	
	EXPECT_EQ(12, test->evaluate());
//	Op* temp1 = new Op(5);
//	Op* temp2 = new Op(7);
	
//	Add* temp3 = new Add(temp1, temp2);
	
//	EXPECT_DOUBLE_EQ(temp3->evaluate(), 12);
}

TEST(addTest, doubleDigAdd) {
	Base* a = new Op(20);
	Base* b = new Op(20);
	
	Base* test = new Add(a,b);
	
//	Op* a = new Op(20);
//	Op* b = new Op(20);
	
//	Add* test = new Add(a,b);
	
	EXPECT_EQ(test->evaluate(), 40);
}

TEST(addTest, negAdd) {
	Base* a = new Op(-5);
	Base* b = new Op(-68);
	
	Base* test = new Add(a,b);

//	Op* a = new Op(-5);
//	Op* b = new Op(-68);

//	Add* test = new Add(a,b);

	EXPECT_EQ(test->evaluate(), -73);
}

TEST(addTest, decimalAdd){
	Base* a = new Op(2.5);
	Base* b = new Op(4.7);

	Base* test = new Add(a,b);

	EXPECT_DOUBLE_EQ(test->evaluate(), 7.2);
}

TEST(addTest, stringAdd) {
	Base* a = new Op(18);
	Base* b = new Op(5);
	
	Base* test = new Add(a,b);

	EXPECT_EQ(test->stringify(), "(18.000000 + 5.000000)");
}

TEST(addTest, stringNegAdd) {
	Base* a = new Op(-10);
	Base* b = new Op(-19);

	Base* test = new Add(a,b);
	
	EXPECT_EQ(test->stringify(), "(-10.000000 + -19.000000)");
}

TEST(addTest, useMult) {
	Base* a = new Op(2);
	Base* b = new Op(3);

	Base* product = new Mult(a,b);
	Base* c = new Op(5);
	Base* test = new Add(product, c);
	
	EXPECT_EQ(test->evaluate(), 11);
}
	
	

#endif
