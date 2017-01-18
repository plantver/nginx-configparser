#include "gtest/gtest.h"
#include "config_parser.h"

TEST(NginxConfigParserTest, SimpleConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("example_config", &out_config);

  EXPECT_TRUE(success);
}


//Edit config_parser_test.cc in your repository.
// You will note the test file already has a passing example. At least one unit test should fail due to bugs in the code you are testing.
// Don't modify config_parser.cc until you identify the bugs -- it is ALREADY buggy.
// Also, there is probably no need to review the code you're testing -- just write unit tests until you find a failure.
// You may be able to find some Nginx config docs or web pages on the internet.

