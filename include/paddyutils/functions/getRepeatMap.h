#pragma once

#include "base/stdUtilities.h"


namespace paddyutils
{

/**
 * @brief Get a map indicating repeating objects (key) and times repeated (value)
 *
 * @tparam ITR_T
 * @param theItr
 * @return std::size_t
 */
template<typename ITR_T, typename KEY_T>
std::size_t getRepeatMap(std::vector<ITR_T> const & theItr)
{
    // Hash function for the hash table
    auto h = [](const std::string& s) {
        return std::hash<std::string>()(*s);
    };

    // Equality comparer for the hashtable
    auto eq = [](const std::string* s1, const std::string* s2) {
        return s1->compare(*s2) == 0;
    }

    // The hashtable
    //  Key: Pointer to element of 'theItr'.
    //  Value: Occurence count.
    std::unordered_map<const std::string*, std::size_t, decltype(eq) > m(theItr.size()), h, eq);

    // Count occurences
    for (auto i = theItr.cbegin(); i != theItr.cend(); ++i)
        ++m[&(*i)];

    return m;
}

}
