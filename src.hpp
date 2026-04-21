// Implementation of GameState for Problem 050 - 恶魔轮盘
#pragma once

#include <exception>

class InvalidOperation : public std::exception {
public:
    const char* what() const noexcept override {
        return invalid
