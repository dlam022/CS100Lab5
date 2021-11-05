#ifndef _ADD_TEST_HPP_
#define _ADD_TEST_HPP_


#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, CanAdd) {
	Op* temp1 = new Op(5);
	Op* temp2 = new Op(7);
	
	Add* temp3 = new Add(temp1, temp2);
	
	EXPECT_DOUBLE_EQ(temp3->evaluate(), 12);
}

#endif
