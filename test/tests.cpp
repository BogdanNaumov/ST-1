// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime2) {
  EXPECT_EQ(checkPrime(4), false);
}

TEST(st1, checkPrime3) {
  EXPECT_EQ(checkPrime(17), true);
}

TEST(st1, checkPrime4) {
  EXPECT_EQ(checkPrime(9973), true);
}

TEST(st1, checkPrime5) {
  EXPECT_EQ(checkPrime(20000), false);
}

TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(6), 13);
}

TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(st1, nPrime3) {
  EXPECT_EQ(nPrime(15), 47);
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(13), 17);
}

TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(19), 23);
}

TEST(st1, nextPrime3) {
  EXPECT_EQ(nextPrime(1000), 1009);
}

TEST(st1, nextPrime4) {
  EXPECT_EQ(nextPrime(7919), 7927);
}

TEST(st1, edgeCases) {
  EXPECT_EQ(nPrime(100), 541);
}
