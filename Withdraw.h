#pragma once
#include "Account.h"

class Withdraw {
 private:
  Account account;
  int money;
  bool is_done = false;
 public:
  Withdraw(Account account, int money, bool &is_done);
};
