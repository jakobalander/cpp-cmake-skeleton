#include <gtest/gtest.h>

#include "skeleton/lib.hpp"

TEST(SkeletonTests, BasicAssertions) {
    Skeleton skel{};
    EXPECT_EQ("Foo", skel.getString());
}
