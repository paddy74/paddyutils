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

/**
 * @brief Trim whitespace from the start of a string.
 *
 * @param s The string to trim.
 */
void ltrim(std::string & s)
{
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
                return !std::isspace(ch);
            }));
}

/**
 * @brief Trim whitespace from the end of a string.
 *
 * @param s The string to trim.
 */
void rtrim(std::string & s)
{
    s.erase(
        std::find_if(
            s.rbegin(), s.rend(), [](int ch) { return !std::isspace(ch); })
            .base(),
        s.end());
}

/**
 * @brief Trim whitespace from both ends of a string.
 *
 * @param s The string to trim.
 */
void trim(std::string & s)
{
    ltrim(s);
    rtrim(s);
}

}  // namespace paddyutils
