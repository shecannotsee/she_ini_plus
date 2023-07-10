//
// Created by shecannotsee on 23-7-10.
//
#include <iostream>
#include "global_test_set.h"
#include "test_example.h"
#include "t1_disk_io_interface.h"

int main() {
  std::cout << YELLOW_COLOR << "Start test " << RESET_COLOR << std::endl;
  t1_disk_io_interface::main();


  testing::InitGoogleTest();

  if (RUN_ALL_TESTS()==0) {
    std::cout << GREEN_COLOR << "Pass the test." << RESET_COLOR << std::endl;
  } else {
    std::cout << RED_COLOR << "Failed the test." << RESET_COLOR << std::endl;
  }
};