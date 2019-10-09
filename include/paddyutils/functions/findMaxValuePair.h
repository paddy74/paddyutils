#pragma once

namespace paddyutils
{
/**
 * @brief Find the maximum key-value pair in std::pair value_type container.
 *
 * @tparam KEY_T
 * @tparam VALUE_T
 * @param x
 * @return std::pair<KEY_T, VALUE_T>
 */
template <class Container>
auto findMaxValuePair(Container const & x) -> typename Container::value_type
{
    using value_t = typename Container::value_type;

    if (x.size() == 0) return value_t();
    if (x.size() == 1) return *x.begin();

    const auto compare = [](value_t const & p1, value_t const & p2) {
        return p1.second < p2.second;
    };
    return *std::max_element(x.begin(), x.end(), compare);
}

}  // namespace paddyutils
