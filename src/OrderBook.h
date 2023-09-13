//
// Created by Michel Maalouli on 9/12/23.
//

#pragma once

#include <map>

class OrderBook {
    // std::map sorts elements by key
    // maps price to amount to buy (bids) / sell (asks)
    std::map<int, int> bids, asks;
public:
    inline bool is_empty() const {
        return bids.empty() && asks.empty();
    }
};

