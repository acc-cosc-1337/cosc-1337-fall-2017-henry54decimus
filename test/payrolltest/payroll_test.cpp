#include "gtest/gtest.h"
#include "Payroll.h"
#include <string>
using namespace std;

TEST(pay_rollTest, testing_FIT){
  EXPECT_EQ(6.75, getFIT(45));
}

TEST(pay_rollTest, testing_FICAMED){
  EXPECT_EQ("1.450000",to_string ( getFICAMED(100)));
}


TEST(pay_rollTest, testing_othours){
  EXPECT_EQ(10, getOvertimeHours(50));
}

TEST(pay_rollTest, testing_othoursat40){
  EXPECT_EQ(0, getOvertimeHours(40));
}

TEST(pay_rollTest, testing_regularHours){
  EXPECT_EQ("35.000000", to_string(getRegularHours(35)));
}

TEST(pay_rollTest, testing_regularHourshoursover40){
  EXPECT_EQ("40.000000", to_string(getRegularHours(50)));
}


