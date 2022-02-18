#pragma once

#include <vector>
#include "stack.h"

#define FVM_INSTRUCTION(name, index) static constexpr frogl::byte name = index

namespace frogl {
    typedef unsigned char byte;

    class vm {


    public:
        static void init();
        void run(std::vector<byte> &bytecode);

        FVM_INSTRUCTION(PUSH_8, 0);
        FVM_INSTRUCTION(PUSH_16, PUSH_8 + 1);
        FVM_INSTRUCTION(PUSH_32, PUSH_16 + 1);

        FVM_INSTRUCTION(PLUS_I32, PUSH_32 + 1);
        FVM_INSTRUCTION(MINUS_I32, PLUS_I32 + 1);
        FVM_INSTRUCTION(MUL_I32, MINUS_I32 + 1);
        FVM_INSTRUCTION(DIV_I32, MUL_I32 + 1);


        frogl::stack stack;


    };
}


