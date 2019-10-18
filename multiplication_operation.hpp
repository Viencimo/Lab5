//
// Created by joelc on 2019-10-18.
//

#ifndef LAB5_MULTIPLICATION_OPERATION_HPP
#define LAB5_MULTIPLICATION_OPERATION_HPP

#include "abstract_operation.hpp"

class multiplication_operation : public abstract_operation {
public:
    const static char MULTIPLICATION_CODE = '*';
    multiplication_operation(): abstract_operation(MULTIPLICATION_CODE){}
    int perform(int e, int r) override {return e * r;}
    ~multiplication_operation() = default;
};

#endif //LAB5_MULTIPLICATION_OPERATION_HPP
