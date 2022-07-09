#include <gtest/gtest.h>

#include "lib.h"

#define POSITION_OF_LAST_DIGIT  (4)

TEST(test_version, test_valid_version)
{
    ASSERT_TRUE(version()[POSITION_OF_LAST_DIGIT] - '0' > 0);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}