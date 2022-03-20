#pragma once
#include <iostream>
#include <string>

class Account {
 public:
  std::string owner;
  int balance;
  Account(const std::string &owner, int balance);
};