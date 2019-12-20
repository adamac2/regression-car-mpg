#pragma once
#include <string>
#include <vector>

/**
 * A pure virtual interface class that can read data and generate models
 */
class RegAlg {
  public:
    virtual ~RegAlg() {}

    virtual void generate_model(std::string data_path = "../../../regression-car-mpg/data/auto-mpg.data") = 0;
    virtual void save_model(std::string model_path) = 0;
    virtual void load_model(std::string model_path) = 0;
    virtual void evalute(std::vector<int> variables) = 0;
};