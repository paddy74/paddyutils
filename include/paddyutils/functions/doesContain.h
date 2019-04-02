#pragma once

#include "base/stdUtilities.h"


namespace paddyUtils
{

/**
 * @brief Check if a set contains an value
 *
 * @tparam T
 * @param theItr
 * @param value
 * @return true
 * @return false
 */
template<typename T>
bool contains(std::set<T> const & theItr, T const & value)
{
    return std::find(theItr.begin(), theItr.end(), value) != theItr.end();
}


/**
 * @brief Check if a list contains an value
 *
 * @tparam T
 * @param theItr
 * @param value
 * @return true
 * @return false
 */
template<typename T>
bool contains(std::list<T> const & theItr, T const & value)
{
    return std::find(theItr.begin(), theItr.end(), value) != theItr.end();
}


/**
 * @brief Check if a vector contains an value
 *
 * @tparam T
 * @param theItr
 * @param value
 * @return true
 * @return false
 */
template<typename T>
bool contains(std::vector<T> const & theItr, T const & value)
{
    return std::find(theItr.begin(), theItr.end(), value) != theItr.end();
}

}
