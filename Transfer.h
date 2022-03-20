#pragma once
#include "Account.h"

class Transfer {
 private:
  Account account_from, account_to;
  int money;
  bool is_done;
  Transfer(Account account_from, Account account_to, int money, bool &is_done);
};
