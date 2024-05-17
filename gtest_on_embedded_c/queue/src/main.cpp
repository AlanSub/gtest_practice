#include <iostream>
#include <gtest/gtest.h>

#include "queue.c"


class queueFixtureTest: public ::testing::Test
{
protected:
    void SetUp() override{
         queue_Init();   
    }
};


TEST_F(queueFixtureTest, reset_test)
{
    EXPECT_EQ(0, queue_Push(1));
    EXPECT_EQ(1, queue_Count());
    queue_Reset();
    EXPECT_EQ(0, queue_Count());
}

TEST_F(queueFixtureTest, fill_and_count_test)
{
    for(int i=0; i<QUEUE_SIZE; i++)
    {
        EXPECT_EQ(0, queue_Push(i*10));
    }
    EXPECT_EQ(QUEUE_SIZE, queue_Count());
}

int main(int argc, char** argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
