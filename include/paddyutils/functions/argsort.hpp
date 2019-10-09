#pragma once

#include <algorithm>  // std::algorithm
#include <numeric>    // std::iota
#include <vector>

namespace paddyutils
{
/**
 * @brief Get the sorted old indexes of a vector.
 *
 * @tparam T
 * @param vect
 * @return std::vector<std::size_t>
 */
template <typename T>
std::vector<std::size_t> argsort(std::vector<T> const & vect)
{
    // Initialize original index locations
    std::vector<std::size_t> idxVect(vect.size());
    std::iota(idxVect.begin(), idxVect.end(), 0);

    // Sort indexes based on comparing values in vect
    sort(
        idxVect.begin(), idxVect.end(),
        [&vect](std::size_t i1, std::size_t i2) {
            return vect[i1] < vect[i2];
        });

    return idxVect;
}

/**
 * @brief Get the sorted old indexes of a vector.
 *
 * @tparam RAIter
 * @tparam Compare
 * @param iterBegin
 * @param iterEnd
 * @param comp
 * @return std::vector<std::size_t>
 */
template <class RAIter, class Compare>
std::vector<std::size_t> argsort(
    RAIter iterBegin, RAIter iterEnd, Compare comp)
{
    std::vector<std::pair<std::size_t, RAIter>> pv;
    pv.reserve(iterEnd - iterBegin);

    RAIter iter;
    std::size_t k;
    for (iter = iterBegin, k = 0; iter != iterEnd; ++iter, ++k)
        pv.push_back(std::pair<int, RAIter>(k, iter));

    std::sort(
        pv.begin(), pv.end(),
        [&comp](
            std::pair<std::size_t, RAIter> const & a,
            std::pair<std::size_t, RAIter> const & b) -> bool {
            return comp(*a.second, *b.second);
        });

    std::vector<std::size_t> idxVector(pv.size());
    std::transform(
        pv.begin(), pv.end(), idxVector.begin(),
        [](std::pair<std::size_t, RAIter> const & a) -> std::size_t {
            return a.first;
        });

    return idxVector;
}

/**
 * @brief Reorder a vector by a vector of target indexes.
 *
 * @tparam T
 * @param orderable
 * @param idxVect
 */
template <typename T>
void orderByIndex(
    std::vector<T> & orderable, std::vector<std::size_t> const & idxVect)
{
    std::size_t const & nIdxs = idxVect.size();

    std::vector<T> ordered;
    ordered.reserve(nIdxs);

    for (auto const & oldIdx : idxVect)
        ordered.push_back(orderable.at(oldIdx));

    // Insert the new order
    for (std::size_t i = 0; i < nIdxs; ++i) orderable.at(i) = ordered.at(i);
}
}  // namespace paddyutils
