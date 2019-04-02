#pragma once

#include "base/stdUtilities.h"


namespace paddyutils
{

/**
 * @brief Get the number of times an item repeats in a set
 *
 * @tparam ITR_T
 * @tparam VALUE_T
 * @param theItr
 * @param value
 * @return std::size_t
 */
template<typename ITR_T, typename VALUE_T>
std::size_t getTimesRepeated(std::set<ITR_T> const & theItr, VALUE_T const & value)
{
    std::size_t n = 0;

    for (auto const & item : theItr)
    {
        if (item == value)
            n++;
    }

    return n;
}


/**
 * @brief Get the number of times an item repeats in a list
 *
 * @tparam ITR_T
 * @tparam VALUE_T
 * @param theItr
 * @param value
 * @return std::size_t
 */
template<typename ITR_T, typename VALUE_T>
std::size_t getTimesRepeated(std::list<ITR_T> const & theItr, VALUE_T const & value)
{
    std::size_t n = 0;

    for (auto const & item : theItr)
    {
        if (item == value)
            n++;
    }

    return n;
}


/**
 * @brief Get the number of times an item repeats in a vector
 *
 * @tparam ITR_T
 * @tparam VALUE_T
 * @param theItr
 * @param value
 * @return std::size_t
 */
template<typename ITR_T, typename VALUE_T>
std::size_t getTimesRepeated(std::vector<ITR_T> const & theItr, VALUE_T const & value)
{
    std::size_t n = 0;

    for (auto const & item : theItr)
    {
        if (item == value)
            n++;
    }

    return n;
}

//https://stackoverflow.com/questions/9683488/repeated-elements-in-a-stdvector

}
