
#ifndef _CLASSE_REG_H_
#define _CLASSE_REG_H_
#include <boost/regex.h>
#include <iostream>
using namespace std;

class _reg{
public:
    regex_t *first;
    int num_reg;
    regmatch_t result;
    _reg();
    void reg_comp();
    int reg_exec(string, int&);
};
#endif
