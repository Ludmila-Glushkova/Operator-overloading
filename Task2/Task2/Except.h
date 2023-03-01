#pragma once
#include <stdexcept>

class Division_by_zero : public std::invalid_argument
{
public:
	Division_by_zero(std::string const& message);
};