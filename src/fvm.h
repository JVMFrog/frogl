#pragma once

#include <vector>
#include "stack.h"

namespace frogl {
    typedef unsigned char byte;

    class vm {
    public:
        long long registers[4];

        bool compareFlag = false;
        unsigned int stackFrame;
        static void init();
        void run(std::vector<byte> &bytecode);

        frogl::stack stack;
    };
}


