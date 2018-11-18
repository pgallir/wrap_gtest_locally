////// just a silly test 

#include <gtest/gtest.h>

template <class numeric>
numeric sum(const numeric a, const numeric b){
	return a+b; 
}

TEST(equivalence, sum) {
  EXPECT_DOUBLE_EQ(2.43, sum(1.4,1.03));
}

