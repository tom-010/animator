#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "font/render/render_text.h"


TEST(RenderText, nothing) {
  render_text("Some text");
  EXPECT_EQ(1, 1);
}

/*
TEST(HelloTest, GetGreet) {
  EXPECT_EQ(get_greet("Bazel"), "Hello Bazel");
}

class MockGreeter : public Greeter {
public:
  MOCK_METHOD(std::string, greet, (const std::string &thing), (override));
};

using ::testing::AtLeast; 
using ::testing::_;
using ::testing::Return;


TEST(HelloTest, GetGreetClass) {
  MockGreeter greeter;
  EXPECT_CALL(greeter, greet(_))
    .Times(AtLeast(1))
    .WillOnce(Return("the return"));

  auto res = greeter.greet("World");
  EXPECT_EQ(res, "the return");
}
*/