//
// Created by shecannotsee on 23-7-10.
//
#include <iostream>
#include "global_test_set.h"
#include "test_example.h"

int main() {
  testing::InitGoogleTest();;
  return RUN_ALL_TESTS();// 运行所有测试单元
};