#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "qcat.h"
//#include "../../../src/qcat.h"

using namespace testing;

TEST(isValueOk, TestForHelloWorld)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}

TEST(isValueOk, DefaultCatNameIsKisa) {
    QCat cat;
    int i = cat.name() == "kisa" ? 1 : 0;
    EXPECT_EQ(i, 1);
}


