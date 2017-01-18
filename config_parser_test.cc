#include "gtest/gtest.h"
#include "config_parser.h"

// test NginxConfigStatement ToString
TEST(NginxCongigTest, ToString){
  NginxConfigStatement statement;
  statement.tokens_.push_back("foo");
  statement.tokens_.push_back("bar");
  EXPECT_EQ(statement.ToString(0), "foo bar;\n");
}

// Fixture
class NginxConfigParserTest : public ::testing::Test {
  protected:
    NginxConfigParser parser;
    NginxConfig out_config;
};

TEST_F(NginxConfigParserTest, SimpleConfig) {
  bool success = parser.Parse("example_config", &out_config);
  EXPECT_TRUE(success);
}

TEST_F(NginxConfigParserTest, foobar){
  std::string config_string = "foo { bar; ";
  std::stringstream config_stream(config_string);
  EXPECT_FALSE(parser.Parse(&config_stream, &out_config));
}

