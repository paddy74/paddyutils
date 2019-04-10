#pragma once

#include "base/stdPaddyUtils.h"


namespace paddyutils
{

/**
 * @brief Get the item matching the value from a set
 *
 * @tparam ITR_T
 * @tparam VALUE_T
 * @param theItr
 * @param value
 * @return ITR_T
 */
template<typename ITR_T, typename VALUE_T>
ITR_T getMatchingItem(std::set<ITR_T> const & theItr, VALUE_T const & value)
{
    auto it = std::find(theItr.begin(), theItr.end(), value);

    if (it != theItr.end())
        return *it;
    return ITR_T();
}


/**
 * @brief Get the item matching the value from a list
 *
 * @tparam ITR_T
 * @tparam VALUE_T
 * @param theItr
 * @param value
 * @return ITR_T
 */
template<typename ITR_T, typename VALUE_T>
ITR_T getMatchingItem(std::list<ITR_T> const & theItr, VALUE_T const & value)
{
    auto it = std::find(theItr.begin(), theItr.end(), value);

    if (it != theItr.end())
        return *it;
    return ITR_T();
}


/**
 * @brief Get the item matching the value from a vector
 *
 * @tparam ITR_T
 * @tparam VALUE_T
 * @param theItr
 * @param value
 * @return ITR_T
 */
template<typename ITR_T, typename VALUE_T>
ITR_T getMatchingItem(const std::vector<ITR_T> & theItr, const VALUE_T & value)
{
    auto it = std::find(theItr.begin(), theItr.end(), value);

    if (it != theItr.end())
        return *it;
    return ITR_T();
}

}
