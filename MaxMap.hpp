#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    std::vector<float> search_vec = data.at(search_term);
    float max = 0;
    for (float a : search_vec)
        if (a > max) max = a;
    
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    std::map<std::string, float> out_map;
    for (auto it : in_map)
        out_map[it.first] = consultMax(it.first, in_map);

    return out_map;
}