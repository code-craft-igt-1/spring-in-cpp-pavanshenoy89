#include "stats.h"
#include <algorithm>
#include <limits>

namespace Statistics {
    
    Stats ComputeStatistics(const std::vector<float>& data) {
        Stats stats;
        
        if (data.empty()) {
            stats.max = std::numeric_limits<float>::quiet_NaN();
            stats.min = std::numeric_limits<float>::quiet_NaN();
            stats.average = std::numeric_limits<float>::quiet_NaN();
        } else {
            stats.max = *std::max_element(data.begin(), data.end());
            stats.min = *std::min_element(data.begin(), data.end());
            
            float sum = 0.0;
            for (const auto& value : data) {
                sum += value;
            }
            stats.average = sum / data.size();
        }
        
        return stats;
    }
    
} // namespace Statistics