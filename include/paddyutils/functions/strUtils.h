#pragma once

#include <regex>

namespace paddyutils
{
/**
 * @brief Determine if a std::string exclusively contains a number.
 *
 * @param str
 * @return true
 * @return false
 */
bool isNumber(std::string const & str)
{
    return std::regex_match(
        str, std::regex(("((\\+|-)?[[:digit:]]+)(\\.(([[:digit:]]+)?))?")));
}

}  // namespace paddyutils
