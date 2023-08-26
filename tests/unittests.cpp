#include <gtest/gtest.h>

#include "skeleton/lib.hpp"

class SkeletonFixture : public ::testing::Test {
    protected:
        void SetUp() override {
            skel.setString("Bar");
        }

        Skeleton skel{};
};

TEST_F(SkeletonFixture, BasicFixtureTests) {
    EXPECT_EQ("Bar", skel.getString());
}

TEST(SkeletonTests, BasicAssertions) {
    Skeleton skel{};
    EXPECT_EQ("Foo", skel.getString());
}
