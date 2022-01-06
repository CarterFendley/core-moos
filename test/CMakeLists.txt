add_executable(test_util
  test_util_functions.cpp)

target_link_libraries(test_util PRIVATE
  gtest_main
  HippoMocks
  MOOS)

include(GoogleTest)
gtest_discover_tests(test_util)