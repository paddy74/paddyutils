#pragma once

#include <unordered_map>


namespace paddyutils
{

template<typename ITERABLE_T, typename T>
std::unordered_map<T, std::size_t> toFrequencyMap(ITERABLE_T iterable)
{
    std::unordered_map<T, std::size_t> freqMap;
    for (auto const & item : iterable)
    {
        if (freqMap.count(item) == 0)
            freqMap[item] = 1;
        else
            freqMap.at(item)++;
    }

    return freqMap;
}

}
