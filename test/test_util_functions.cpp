#include "MOOS/libMOOS/Utils/MOOSUtilityFunctions.h"
#include "gtest/gtest.h"
#include "hippomocks.h"
#include <sys/timeb.h>

int mock_ftime(timeb* buf){
  buf->time = 1641429964;
  return 0;
}

TEST(TestUtilFuncs, GetDate){
  // Redirect ftime() calls to our mock
  MockRepository mocks;
  mocks.OnCallFunc(ftime).Do(mock_ftime);

  // Do assertions based on time fixed by mock
  EXPECT_EQ(MOOSGetDate(), "Wed Dec 31 19:00:00 1969\n");
  EXPECT_EQ(MOOSGetDate(0), "Wed Jan  5 19:46:04 2022\n");
  EXPECT_EQ(MOOSGetDate(1), "Wed Jan  5 19:46:04 2022\n");
}