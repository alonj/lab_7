//
// Created by shraga89@st.technion.ac.il on 5/11/17.
//

#include "SumNormalizer.h"


bool SumNormalizer::init(const std::vector<Point> &points) {
    if (points.empty())
        return false;
    for (std::vector<Point>::size_type pi=0; pi<points.size(); pi++)
            sum = sum + points[pi];
    return true;
}

void SumNormalizer::normalize(const Point &oldPoint, Point &newPoint) {
    newPoint=oldPoint/sum;
}

