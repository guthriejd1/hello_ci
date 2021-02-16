#include <gtest/gtest.h>
class HelloTest : public ::testing::Test {
protected:
    HelloTest() : x_(3){
        ++x_;
    }
    void SetUp() override {
    }
    void TearDown() override {}

    int x_;
};

TEST_F(HelloTest, t1){
    ASSERT_EQ(x_, 4);
}