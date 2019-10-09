#pragma once

#include <unordered_set>
#include <vector>

namespace paddyutils
{
/**
 * @brief Get the symmetric difference of a `vector` and `unordered_set`.
 *
 * @tparam T
 * @param a
 * @param b
 * @return std::vector<T>
 */
template <typename T>
std::vector<T> getSymDiff(
    std::vector<T> const & a, std::unordered_set<T> const & b)
{
    std::vector<T> diffVect;

    for (auto const & item : a)
    {
        if (b.find(item) != b.end())
            continue;
        else
            diffVect.push_back(item);
    }

    return diffVect;
}

/**
 * @brief Get the symmetric difference of an `unordered_set` and `vector`.
 *
 * @tparam T
 * @param a
 * @param b
 * @return std::vector<T>
 */
template <typename T>
std::unordered_set<T> getSymDiff(
    std::unordered_set<T> const & a, std::vector<T> const & b)
{
    std::unordered_set<T> diffSet = a;  // TODO: improve memory efficiency

    for (auto const & item : b)
    {
        if (a.find(item) != a.end()) diffSet.erase(item);
    }

    return diffSet;
}

}  // namespace paddyutils
