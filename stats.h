#include <vector>

namespace Statistics {
    

    /**
     * @brief Represents statistical information.
     * 
     * This struct stores the maximum, minimum, and average values of a dataset.
     */
    struct Stats {
        float max;      // maximum value
        float min;      // minimum value
        float average;  // average value
    };
    
    Stats ComputeStatistics(const std::vector<float>& );
}
