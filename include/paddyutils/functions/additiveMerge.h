#pragma once

#include "base/stdPaddyUtils.h"


namespace paddyutils
{

/**
 * @brief Merge b into a (inplace). The values of matching keys are summed.
 *
 * @tparam KEY_T
 * @tparam VALUE_T
 * @param a
 * @param b
 */
template<typename KEY_T, typename VALUE_T>
void additiveMergeInplace(
    std::unordered_map<KEY_T, VALUE_T> & a,
    std::unordered_map<KEY_T, VALUE_T> const & b
)
{
    for (auto const & [key, value] : b)
        a[key] += value;
}


/**
 * @brief Merge b into a new copy of a. The values of matching keys are summed.
 *
 * @tparam KEY_T
 * @tparam VALUE_T
 * @param a
 * @param b
 * @return std::unordered_map<KEY_T, VALUE_T>
 */
template<typename KEY_T, typename VALUE_T>
std::unordered_map<KEY_T, VALUE_T> additiveMerge(
    std::unordered_map<KEY_T, VALUE_T> a,
    std::unordered_map<KEY_T, VALUE_T> const & b
)
{
    additiveMergeInplace(a, b);

    return a;
}

}
