#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "mock-objects.hpp"
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

TEST(PainterTest, CanDrawSomething) {
    MockTurtle turtle{};
    EXPECT_CALL(turtle, penDown()).Times(::testing::AtLeast(1));

    Painter painter (turtle);

    EXPECT_TRUE(painter.drawLine(0, 0, 5, 10));
}

