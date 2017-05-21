//
// Created by shraga89@st.technion.ac.il on 5/11/17.
//

#include "SumNormalizer.h"


bool SumNormalizer::init(const std::vector<Point> &points) {
    if (points.empty())
        return false;
    unsigned point_dimension = points[0].getDimension();
    double sum[point_dimension];
    for(size_t i = 0; i < point_dimension; i++)
    {
        sum[i] = 0.0;
        for (std::vector<Point>::size_type pi=0; pi<points.size(); pi++){
            sum[i] += points[pi][i];
        }
    }
    return true;
}

void SumNormalizer::normalize(const Point &oldPoint, Point &newPoint) {
    newPoint=oldPoint/sum;
}

