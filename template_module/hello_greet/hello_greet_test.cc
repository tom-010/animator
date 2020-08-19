#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "template_module/hello_greet/hello_greet.h"


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