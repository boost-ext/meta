//
// Copyright (c) 2022 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
#include <algorithm>
#include <mp>

namespace mp = boost::mp;

auto rotate = [](std::ranges::range auto types) {
  std::rotate(std::begin(types), std::begin(types) + 1, std::end(types));
  return types;
};

// clang-format off
static_assert((mp::list<int, double, float>() | rotate) == mp::list<double, float, int>());
// clang-format on

int main() {}
