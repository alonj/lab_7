cmake_minimum_required(VERSION 3.7)
project(lab7_students)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES
        DataReader.cpp
        DataReader.h
        Evaluation.cpp
        Evaluation.h
        EvaluationMeasures.cpp
        EvaluationMeasures.h
        KNN.cpp
        KNN.h
        "Lab7 - Data Normalization.pdf"
        main.cpp
        MinMaxNormalizer.cpp
        MinMaxNormalizer.h
        Normalizer.h
        Point.cpp
        Point.h
        SumNormalizer.cpp
        SumNormalizer.h
        ZNormalizer.cpp
        ZNormalizer.h)

add_executable(lab7_students ${SOURCE_FILES})