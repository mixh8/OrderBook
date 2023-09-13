//
// Created by Michel Maalouli on 9/12/23.
//
#include "gtest/gtest.h"
#include "OrderBook.h"


TEST(OrderBookTests, OrderBookEmptyByDefault)
{
    OrderBook book;
    EXPECT_TRUE(book.is_empty());
}

