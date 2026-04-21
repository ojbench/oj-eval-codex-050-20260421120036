#pragma once
#include <exception>

class InvalidOperation : public std::exception {
public:
    const char* what() const noexcept override { return invalid
