/** Test cases for functions defined in market.h
@file market_test.cpp
@author YOUR NAME HERE
*/
// TODO: Fill in your name above.

#include "market.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <map>
#include <set>
#include <vector>
using namespace std;
using ::testing::ContainerEq;

MATCHER_P(IsEqualToMap, expected_map, ::testing::PrintToString(expected_map)) {
  if (expected_map.size() != arg.size()) {
    return false;
  }
  return std::all_of(expected_map.cbegin(), expected_map.cend(),
                     [&](const std::pair<string, int>& item) {
                       const auto it = arg.find(item.first);
                       return it != arg.cend() && it->first == item.first &&
                              it->second == item.second;
                     });
}

TEST(MarketTest, IsAdmin) {
  set<string> admins = {"Alice", "Bob"};
  EXPECT_TRUE(is_admin(admins, "Alice"));
  EXPECT_FALSE(is_admin(admins, "bob"));
  EXPECT_FALSE(is_admin(admins, "Carl"));
}

// DO NOT MODIFY CODE ABOVE

TEST(MarketTest, UpsertRemoveItem) {
  // TODO: Fill the admin set.
  set<string> admins = {"Add your admins here"};

  // TODO: Fill the catalog's starting state.
  map<string, int> catalog = {
      {"Add your items here", -1},
  };

  // TODO: Call upsert_item() and remove_item() at least 4 times each.
  // TODO: Wrap each call in EXPECT_FALSE or EXPECT_TRUE.
  EXPECT_FALSE(upsert_item(admins, "user", "item", -1, catalog));
  EXPECT_TRUE(remove_item(admins, "user", "item", catalog));

  // TODO: Fill the catalog's ending state.
  map<string, int> expected = {
      {"Add your items here", -1},
  };

  // Don't modify the next line.
  EXPECT_THAT(catalog, IsEqualToMap(expected));
}

TEST(MarketTest, ApplySale) {
  // TODO: Fill the admin set.
  set<string> admins = {"Add your admins here"};

  // TODO: Fill the catalog's starting state.
  map<string, int> catalog = {
      {"Add your items here", -1},
  };

  // TODO: Call apply_sale() at least 4 times.
  // TODO: Wrap each call in EXPECT_FALSE or EXPECT_TRUE.
  EXPECT_FALSE(apply_sale(admins, "user", -1, catalog));

  // TODO: Fill the catalog's ending state.
  map<string, int> expected = {
      {"Add your items here", -1},
  };

  // Don't modify the next line.
  EXPECT_THAT(catalog, IsEqualToMap(expected));
}

TEST(MarketTest, Sell) {
  int wallet;
  vector<string> to_sell;
  vector<string> expected_leftovers;
  int wallet_after;

  // TODO: Fill the catalog.
  map<string, int> catalog = {
      {"Add your items here", -1},
  };

  // TODO: Copy the code below to have at least 2 test cases total.
  // |--------- Test case ---------|
  // TODO: Fill wallet with a starting amount, to_sell with items to sell,
  // expected_leftovers with unsold items and wallet_after with the wallet
  // amount after sale.
  wallet = -1;
  to_sell = {"Add your items here"};
  expected_leftovers = {"Add your items here"};
  wallet_after = -1;

  // Don't modify the next 2 lines.
  EXPECT_THAT(sell(catalog, to_sell, wallet), ContainerEq(expected_leftovers));
  EXPECT_EQ(wallet, wallet_after);
  // |-----------------------------|
}

TEST(MarketTest, Buy) {
  int wallet;
  vector<string> to_buy;
  vector<string> expected_purchase;
  int wallet_after;

  // TODO: Fill the catalog.
  map<string, int> catalog = {
      {"Add your items here", -1},
  };

  // TODO: Copy the code below to have at least 2 test cases total.
  // |--------- Test case ---------|
  // TODO: Fill wallet with a starting amount, to_buy with items to buy,
  // expected_purchase with purchased items and wallet_after with the wallet
  // amount after purchase.
  wallet = -1;
  to_buy = {"Add your items here"};
  expected_purchase = {"Add your items here"};
  wallet_after = -1;

  // Don't modify the next 2 lines.
  EXPECT_THAT(buy(catalog, to_buy, wallet), ContainerEq(expected_purchase));
  EXPECT_EQ(wallet, wallet_after);
  // |-----------------------------|
}

TEST(MarketTest, Hoard) {
  map<string, int> catalog;
  int wallet;
  int expected_amount_purchased;
  int wallet_after;

  // TODO: Copy the code below to have at least 2 test cases total.
  // |--------- Test case ---------|
  // TODO: Fill the catalog, a starting wallet amount, the expected amount of
  // items purchased and the wallet amount after purchase.
  catalog = {
      {"Add your items here", -1},
  };
  wallet = -1;
  expected_amount_purchased = -1;
  wallet_after = -1;

  // Don't modify the next 2 lines.
  EXPECT_EQ(hoard(catalog, wallet), expected_amount_purchased);
  EXPECT_EQ(wallet, wallet_after);
  // |-----------------------------|
}