#pragma once

#include <string>
#include <algorithm>


namespace paddyutils
{

/**
 * @brief Transform every character in a string to lower case.
 *
 * @param str
 */
void toLowerInplace(std::string & str)
{ std::transform(str.begin(), str.end(), str.begin(), ::tolower); }

/**
 * @brief Transfor every character in a string to lower case.
 *
 * @param str
 * @return std::string
 */
std::string toLowerCopy(std::string const & str)
{
    std::string outStr = str;
    toLowerInplace(outStr);
    return outStr;
}


/**
 * @brief Transform every character in a string to upper case.
 *
 * @param str
 */
void toUpperInplace(std::string & str)
{ std::transform(str.begin(), str.end(), str.begin(), ::toupper); }

/**
 * @brief Transform every character in a string to upper case.
 *
 * @param str
 * @return std::string
 */
std::string toUpperCopy(std::string const & str)
{
    std::string outStr = str;
    toUpperInplace(outStr);
    return outStr;
}

}
