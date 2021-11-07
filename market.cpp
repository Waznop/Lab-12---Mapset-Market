/** Implementation of functions related to a free market
@file market.cpp
@author YOUR NAME HERE
*/
// TODO: Fill in your name above.

#include "market.h"
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

bool is_admin(const set<string>& admins, const string& user) {
  // TODO: Implement this function.
  return false;
}

bool upsert_item(const set<string>& admins, const string& user,
                 const string& item, int price, map<string, int>& catalog) {
  // TODO: Implement this function.
  return false;
}

bool remove_item(const set<string>& admins, const string& user,
                 const string& item, map<string, int>& catalog) {
  // TODO: Implement this function.
  return false;
}

bool apply_sale(const set<string>& admins, const string& user, int percentage,
                map<string, int>& catalog) {
  // TODO: Implement this function.
  return false;
}

vector<string> sell(const map<string, int>& catalog, const vector<string>& list,
                    int& wallet) {
  // TODO: Implement this function.
  return {};
}

vector<string> buy(const map<string, int>& catalog, const vector<string>& list,
                   int& wallet) {
  // TODO: Implement this function.
  return {};
}

int hoard(const map<string, int>& catalog, int& wallet) {
  // TODO: Implement this function.
  return -1;
}