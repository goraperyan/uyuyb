#include "Withdraw.h"
Withdraw::Withdraw(Account account, int money, bool &is_done) : account(account), money(money) {
  account.balance -= money;
  is_done = true;
}

