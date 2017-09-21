#include "gtest/gtest.h"
#include "Payroll.h"

Test(payrollTest, testing_FIT){
  EXPECT_EQ(6.75, getFIT(45));
}

Test(payrollTest, testing_FICAMED){
  EXPECT_EQ(.6525, getFICAMED(45));
}
