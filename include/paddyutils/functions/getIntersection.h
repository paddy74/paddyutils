#pragma once

#include "base/stdPaddyUtils.h"


namespace paddyutils
{

/**
 * @brief Get the intersecting terms of two sets
 *
 * @tparam T
 * @param a
 * @param b
 * @return std::list<T>
 */
template<typename T>
std::set<T> getIntersection(std::set<T> const & a, std::set<T> const & b)
{
    std::set<T> interLst;

    std::set_intersection(
        a.begin(), a.end(),
        b.begin(), b.end(),
        std::back_inserter(interLst));

    return interLst;
}


/**
 * @brief Get the intersecting terms of two lists
 *
 * @tparam T
 * @param a
 * @param b
 * @return std::list<T>
 */
template<typename T>
std::list<T> getIntersection(std::list<T> const & a, std::list<T> const & b)
{
    std::list<T> interLst;

    std::set_intersection(
        a.begin(), a.end(),
        b.begin(), b.end(),
        std::back_inserter(interLst));

    return interLst;
}


/**
 * @brief Get the intersecting terms of two vectors
 *
 * @tparam T
 * @param a
 * @param b
 * @return std::list<T>
 */
template<typename T>
std::vector<T> getIntersection(std::vector<T> const & a, std::vector<T> const & b)
{
    std::vector<T> interLst;

    std::set_intersection(
        a.begin(), a.end(),
        b.begin(), b.end(),
        std::back_inserter(interLst));

    return interLst;
}


/**
 * @brief Get the intersecting keys of two maps whose values are of `mapA`.
 *
 * @tparam KEY_T
 * @tparam VALUE_T
 * @param a The maps whose values are kept.
 * @param b
 * @return std::unordered_map<KEY_T, VALUE_T>
 */
template<typename KEY_T, typename VALUE_T>
std::unordered_map<KEY_T, VALUE_T> getKeyIntersection(
    std::unordered_map<KEY_T, VALUE_T> const & a,
    std::unordered_map<KEY_T, VALUE_T> const & b
)
{
    std::unordered_map<KEY_T, VALUE_T> interMap;

    for (auto const & pair : a)
    {
        if (b.find(pair.first) != b.end())
            result.insert(pair);
    }

    return interMap;
}

}
