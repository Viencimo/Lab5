//
// Created by joelc on 2019-10-18.
//

#ifndef LAB5_OPERATION_HPP
#define LAB5_OPERATION_HPP

class operation {
public:
    virtual char get_code() = 0;
    virtual int perform(int e, int r) = 0;
    virtual ~operation() = default;
};

#endif //LAB5_OPERATION_HPP

