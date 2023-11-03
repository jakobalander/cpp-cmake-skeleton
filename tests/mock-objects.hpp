#ifndef MOCK_OBJECTS_H
#define MOCK_OBEJCTS_H

#include <gmock/gmock.h>

#include "skeleton/lib.hpp"

class MockTurtle : public TurtleIf {
    public:
        MOCK_METHOD(void, penDown, (), (override));
};

#endif
