#ifndef POW_TEST_HPP
#define pOW_TEST_HPP

#include "gtest/gtest.h"

#include "op.hpp"
#include "pow.hpp"


TEST(powTest ,simplePow) {
	Op* a = new Op(3);
	Op* b = new Op(2);
	
	Pow* test = new Pow(a,b);
	
	EXPECT_EQ(test->evaluate(), 9);
}



#endif
