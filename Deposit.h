#pragma once
#include "Account.h"

class Deposit {
 private:
  Account account;
  int money;
  bool is_done = false;
 public:
  Deposit(Account account, int money, bool &is_done);
};
