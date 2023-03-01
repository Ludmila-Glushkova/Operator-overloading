#include "Except.h"

Division_by_zero::Division_by_zero(std::string const& message): std::invalid_argument(message) {}
