#include "gtest/gtest.h"
#include "Payroll.h"

TEST(pay_rollTest, testing_FIT){
  EXPECT_EQ(6.75, getFIT(45));
}

TEST(pay_rollTest, testing_FICAMED){
  EXPECT_EQ(1, getFICAMED(100));
}
