#include <gtest/gtest.h>
#include "queue.h"

TEST(queue, can_get_front_element) {
  Queue q;
  q.push(2);
  q.push(3);
  q.push(5);
  EXPECT_EQ(5, q.front());
}

TEST(queue, can_not_get_front_element_if_queue_is_empty) {
  Queue q;
  ASSERT_ANY_THROW(q.front());
}

TEST(queue, can_get_back_element) {
  Queue q;
  q.push(2);
  q.push(3);
  q.push(5);
  EXPECT_EQ(2, q.back());
}

TEST(queue, can_not_get_back_element_if_queue_is_empty) {
  Queue q;
  ASSERT_ANY_THROW(q.back());
}
TEST(queue, can_pop_element_in_queue_isnt_empty) {
  Queue q;
  q.push(2);
  q.push(3);
  q.push(5);
  q.pop();
  EXPECT_EQ(3,q.back());
}

TEST(queue, can_not_pop_element_in_is_empty) {
  Queue q;

  ASSERT_ANY_THROW(q.pop());
}

TEST(queue, can_correct_size_is_empty_queue){
  Queue q;
  q.push(3);
  EXPECT_FALSE(q.empty());
}
TEST(queue, can_correct_size_isnt_empty_queue){
  Queue q;
  EXPECT_TRUE(q.empty());
}
int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}