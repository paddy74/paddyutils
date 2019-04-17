#pragma once

#include <vector>


namespace paddyutils
{

/**
 * @brief Split a string on a character delimiter.
 *
 * @param str
 * @param delim
 * @return std::vector<std::string>
 */
std::vector<std::string> strSplit(std::string const & str, char const & delim)
{
    std::vector<std::string> tokens;

    // Skip delimiters at the beginning
    std::string::size_type lastPos = str.find_first_not_of(delim, 0);
    // Find first non-delimiter
    std::string::size_type pos = str.find_first_of(delim, lastPos);

    while ((std::string::npos != pos || std::string::npos != lastPos))
    {
        // Found token, add to the token vector
        tokens.push_back(str.substr(lastPos, pos-lastPos));
        // Skip delimiters
        lastPos = str.find_first_not_of(delim, pos);
        // Find next non-delimiter
        pos = str.find_first_of(delim, lastPos);
    }

    return tokens;
}


// TODO: Split on string delim


/**
 * @brief Split a string on spaces
 *
 * @param str
 * @return std::vector<std::string>
 */
std::vector<std::string> strSplit(std::string const & str)
{ return strSplit(str, ' '); }

}
