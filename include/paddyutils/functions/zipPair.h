#pragma once

#include <utility>
#include <vector>

namespace paddyutils
{
/**
 * @brief Fill a zipped vector with pairs consiting of the corresponding
 *  elements of a and b. The vectors should have equal length.
 *
 * @tparam A
 * @tparam B
 * @param a
 * @param b
 * @return std::vector<std::pair<A, B>>
 */
template <typename A, typename B>
std::vector<std::pair<A, B>> zipPair(
    std::vector<A> const & a, std::vector<B> const & b)
{
    // if (a.size() != b.size())
    //    throw std::exception("Zipped vectors must be the same size.");

    std::vector<std::pair<A, B>> zipped;
    zipped.reserve(a.size());
    for (std::size_t i = 0; i < a.size(); ++i)
        zipped.push_back(std::make_pair(a.at(i), b.at(i)));

    return zipped;
}

/**
 * @brief Write the first and second element of the zipped pairs into a pair of
 *  vectors a and b.
 *
 * @tparam A
 * @tparam B
 * @param zipped
 * @return std::pair<std::vector<A>, std::vector<B>>
 */
template <typename A, typename B>
std::pair<std::vector<A>, std::vector<B>> unzipPair(
    std::vector<std::pair<A, B>> const & zipped)
{
    std::vector<A> a;
    std::vector<B> b;
    a.reserve(zipped.size());
    b.reserve(zipped.size());

    for (std::size_t i = 0; i < zipped.size(); ++i)
    {
        a.push_back(zipped.at(i).first);
        b.push_back(zipped.at(i).second);
    }

    return std::make_pair(a, b);
}

}  // namespace paddyutils
