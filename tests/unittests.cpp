#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
    EXPECT_STRNE("hello", "world");
    EXPECT_STREQ("foo", "bar");
    EXPECT_EQ(7 * 6, 42);
}
