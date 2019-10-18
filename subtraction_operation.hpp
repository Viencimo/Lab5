//
// Created by joelc on 2019-10-18.
//

#ifndef LAB5_SUBTRACTION_OPERATION_HPP
#define LAB5_SUBTRACTION_OPERATION_HPP

#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation{
public:
    const static char SUBTRACTION_CODE = '-';
    subtraction_operation(): abstract_operation(SUBTRACTION_CODE){}
    int perform(int e, int r) override {return e - r;}
    ~subtraction_operation() = default;
};

#endif //LAB5_SUBTRACTION_OPERATION_HPP
