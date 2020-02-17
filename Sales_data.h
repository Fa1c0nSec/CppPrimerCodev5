#ifndef SALES_DATA_H
#define SALES_DATA_H
#pragma once

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
} accum, trans, *salesptr;
#endif
