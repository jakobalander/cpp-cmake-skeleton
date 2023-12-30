#pragma once

#include <gmock/gmock.h>

#include "skeleton/lib.hpp"

class MockTurtle : public TurtleIf {
    public:
        MOCK_METHOD(void, penDown, (), (override));
};
