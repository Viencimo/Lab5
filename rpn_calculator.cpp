//
// Created by joelc on 2019-10-18.
//

#include "rpn_calculator.hpp"

operation *rpn_calculator::operation_type(char type) {
    switch (type) {
        case addition_operation::ADDITION_CODE:
            return new addition_operation();
        case subtraction_operation::SUBTRACTION_CODE:
            return new subtraction_operation();
        case multiplication_operation::MULTIPLICATION_CODE:
            return new multiplication_operation();
        case division_operation::DIVISION_CODE:
            return new division_operation();
        default:
            break;
    }
}

void rpn_calculator::perform(operation *op) {
    
}
