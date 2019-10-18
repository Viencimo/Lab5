//
// Created by joelc on 2019-10-18.
//

#ifndef LAB5_ABSTRACT_OPERATION_HPP
#define LAB5_ABSTRACT_OPERATION_HPP

#include "operation.hpp"

class abstract_operation : public operation {
private:
    char operation_type;
public:
    explicit abstract_operation(char op) {operation_type = op;}
    char get_code() override {return operation_type;}
    ~abstract_operation() override = default;
};

#endif //LAB5_ABSTRACT_OPERATION_HPP
