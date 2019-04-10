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
    std::set<T> interLst();

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
    std::list<T> interLst();

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
    std::vector<T> interLst();

    std::set_intersection(
        a.begin(), a.end(),
        b.begin(), b.end(),
        std::back_inserter(interLst));

    return interLst;
}

}
