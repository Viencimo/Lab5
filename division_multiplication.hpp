//
// Created by joelc on 2019-10-18.
//

#ifndef LAB5_DIVISION_MULTIPLICATION_HPP
#define LAB5_DIVISION_MULTIPLICATION_HPP

#include "abstract_operation.hpp"

class division_operation : public abstract_operation {
public:
    const static char DIVISION_CODE = '/';
    division_operation(): abstract_operation(DIVISION_CODE){}
    int perform(int e, int r) override {return e / r;}
    ~division_operation() = default;
};

#endif //LAB5_DIVISION_MULTIPLICATION_HPP
