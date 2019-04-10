#pragma once

#include "base/stdPaddyUtils.h"


namespace paddyutils
{
    /**
     * @brief Find the maximum key-value pair in an `unorderd_map`.
     *  Based on: https://stackoverflow.com/a/34937216/7706917
     *
     * @tparam KEY_T
     * @tparam VALUE_T
     * @param x
     * @return std::pair<KEY_T, VALUE_T>
     */
    template<typename KEY_T, typename VALUE_T>
    std::pair<KEY_T, VALUE_T> findMaxValuePair(
        std::unordered_map<KEY_T, VALUE_T> const & x
    )
    {
        using pairtype=std::pair<KeyType,ValueType>;

        return *std::max_element(
            x.begin(),
            x.end(),
            [] (const pairtype & p1, const pairtype & p2)
            {
                return p1.second < p2.second;
            }
        );
    }


    /**
     * @brief Find the maximum key-value pair in a `map`.
     *  Based on: https://stackoverflow.com/a/34937216/7706917
     *
     * @tparam KEY_T
     * @tparam VALUE_T
     * @param x
     * @return std::pair<KEY_T, VALUE_T>
     */
    template<typename KEY_T, typename VALUE_T>
    std::pair<KEY_T, VALUE_T> findMaxValuePair(
        std::map<KEY_T, VALUE_T> const & x
    )
    {
        using pairtype=std::pair<KeyType,ValueType>;

        return *std::max_element(
            x.begin(),
            x.end(),
            [] (const pairtype & p1, const pairtype & p2)
            {
                return p1.second < p2.second;
            }
        );
    }
}
