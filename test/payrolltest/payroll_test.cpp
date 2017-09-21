#include "gtest/gtest.h"
#include "Payroll.h"
#include <string>
using namespace std;

TEST(pay_rollTest, testing_FIT){
  EXPECT_EQ(6.75, getFIT(45));
}

TEST(pay_rollTest, testing_FICAMED){
  EXPECT_EQ("1.45",to_string ( getFICAMED(100)));
}
