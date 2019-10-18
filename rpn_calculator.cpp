//
// Created by joelc on 2019-10-18.
//

#include <cctype>
#include <sstream>
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
    int e = stack.top();
    stack.pop();

    int r = stack.top();
    stack.pop();

    result = op->perform(r, e);
    stack.push(result);


}

int rpn_calculator::process_form(string formula) {
    istringstream iss(formula);
    string operand;
    while (iss >> operand) {
        istringstream iss2(operand);
        int n;
        if (iss2 >> n) {
            stack.push(n);
        } else {
            perform(operation_type(operand[0]));
        }

    }
    return result;
}
