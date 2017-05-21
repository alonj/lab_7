//
// Created by shraga89@st.technion.ac.il on 5/11/17.
//

#include <limits>
#include "MinMaxNormalizer.h"

bool MinMaxNormalizer::init(const std::vector<Point> &points) {
    if (points.empty())
        return false;
    double double_max = std::numeric_limits<double>::max(), double_min = std::numeric_limits<double>::min();
    unsigned point_dimension = points[0].getDimension();
    double min[point_dimension],max[point_dimension];
    for(size_t i = 0; i < point_dimension; i++)
    {
        min[i] = double_max;
        max[i] = double_min;
        for (std::vector<Point>::size_type pi=0; pi<points.size(); pi++){
            if(points[pi][i] < min[i]) min[i] = points[pi][i];  // comparing two doubles.
            if(max[i] < points[pi][i]) max[i] = points[pi][i];  // comparing two doubles.
        }
    }
    return true;
}

void MinMaxNormalizer::normalize(const Point &oldPoint, Point &newPoint) {
    newPoint=(oldPoint - min)/(max-min);
}