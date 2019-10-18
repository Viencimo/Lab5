//
// Created by joelc on 2019-10-18.
//

#ifndef LAB5_ADDITION_OPERATION_HPP
#define LAB5_ADDITION_OPERATION_HPP

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation {
public:
    const static char ADDITION_CODE = '+';
    addition_operation(): abstract_operation(ADDITION_CODE){}
    int perform(int e, int r) override {return e + r;}
    virtual ~addition_operation() = default;
};

#endif //LAB5_ADDITION_OPERATION_HPP
