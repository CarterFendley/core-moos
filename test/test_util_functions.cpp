#include "MOOS/libMOOS/Utils/MOOSUtilityFunctions.h"
#include "gtest/gtest.h"
#include "hippomocks.h"

time_t mock_time(time_t* rawtime){
  *rawtime = 1641429964;
  return 1641429964;
}

TEST(TestUtilFuncs, GetDate){
  // Redirect ftime() calls to our mock
  MockRepository mocks;
  mocks.OnCallFunc(time).Do(mock_time);

  // Do assertions based on time fixed by mock
  EXPECT_EQ(MOOSGetDate(), "Wed Dec 31 19:00:00 1969\n");
  EXPECT_EQ(MOOSGetDate(0), "Wed Jan  5 19:46:04 2022\n");
  EXPECT_EQ(MOOSGetDate(1), "Wed Jan  5 19:46:04 2022\n");
}