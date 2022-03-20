#include "Transfer.h"

Transfer::Transfer(Account account_from, Account account_to, int money, bool &is_done) : account_from(account_from), account_to(account_to), money(money) {
  account_from.balance -= money;
  account_to.balance += money;
  is_done = true;
}