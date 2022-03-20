#include "Account.h"

Account::Account(const std::string &owner, int balance) {
  this->owner = owner;
  this->balance = balance;
}