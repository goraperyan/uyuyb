#include "Deposit.h"
Deposit::Deposit(Account &account, int money, bool &is_done) : account(account), money(money) {
  account.balance += money;
  is_done = true;
}
