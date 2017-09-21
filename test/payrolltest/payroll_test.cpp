#include "gtest/gtest.h"
#include "Payroll.h"

Test(pay_rollTest, testing_FIT){
  EXPECT_EQ(6.75, getFIT(45));
}

Test(pay_rollTest, testing_FICAMED){
  EXPECT_EQ(.6525, getFICAMED(45));
}
