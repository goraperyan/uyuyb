cmake_minimum_required(VERSION 3.21)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 Account.cpp Account.h cmake-build-debug/Deposit.h Deposit.h Deposit.cpp Withdraw.h Withdraw.cpp Transfer.h Transfer.cpp)
