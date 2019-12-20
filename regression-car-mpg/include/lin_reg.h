#pragma once
#include "reg_alg.h"
class LinReg : public RegAlg {
  public:
    /**
     * Default constructor
     */
    LinReg();

    /**
     * Enter a path of a file to read
     * 
     * Depending on the file at the end of the path, LinReg will be initialized
     * differently. LinReg will determine whether the file is data or a model and initalaize
     * accordingly. LinReg will either generate a model off of data, or load a preexisting model
     * 
     * @Param path path of the file to be read
     */
    LinReg(std::string path);

    /**
     * Virtual functions documented in reg_alg.h
     */
    bool GenerateModel(std::string data_path = "../../../regression-car-mpg/data/auto-mpg.data");
    bool SaveModel(std::string model_path);
    bool LoadModel(std::string model_path);
    int Evaluate(std::vector<int> variables);
    std::vector<int> EvaluateDataset(std::string data_path, std::string output_path);
};

