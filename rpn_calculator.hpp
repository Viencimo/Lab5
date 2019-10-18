//
// Created by joelc on 2019-10-18.
//

#ifndef LAB5_RPN_CALCULATOR_HPP
#define LAB5_RPN_CALCULATOR_HPP

#include <stack>
#include <string>
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "multiplication_operation.hpp"
#include "division_multiplication.hpp"

using namespace std;

class rpn_calculator {
private:
    int result;
    stack<int> stack;
    operation* operation_type(char type);
    void perform(operation* op);
public:
    int process_form(string formula);
};


#endif //LAB5_RPN_CALCULATOR_HPP
