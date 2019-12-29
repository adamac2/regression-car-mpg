#ifndef RCM_REGALG_H_
#define RCM_REGALG_H_

#include <string>
#include <vector>
#include <fstream>

/**
 * A pure virtual interface class that can read data and generate models
 */
class RegAlg {
  public:
    virtual ~RegAlg() {}

    /**
     * Given a path, accesses the data and generates a regression model
     *
     * @Param data_path path to data
     * @Return whether model was generated successfully
     */
    virtual bool GenerateModel(std::string data_path) = 0;

    /**
     * Saves the generated model to a location, ready to be loaded later
     *
     * @Param model_path path to where to save the model file
     * @Return whether model was saved successfully
     */
    virtual bool SaveModel(std::string model_path) = 0;
    friend std::ofstream& operator<<(std::ofstream& os, RegAlg& reg) { return reg._Save(os); };

    /**
     * Loads a model from a location
     *
     * @Param model_path path to the model file to be loaded
     * @Return whether model was loaded successfully
     */
    virtual bool LoadModel(std::string model_path) = 0;
    friend std::ifstream& operator>>(std::ifstream& is, RegAlg& reg) { return reg._Load(is); };

    /**
     * Given inputs, uses the regression model to predict the output
     *
     * @Param variables a vector of arguments to predict the output
     * @Return the prediction of the given data.
     */
    virtual int Evaluate(std::vector<int> param) = 0;

    /**
     * Given a dataset, evaluates the output for all entries and writes to a file
     *
     * @Param data_path path to data to evalute
     * @Param output_path path to write evaluation
     * @Return A vector of all outputs.
     */
    virtual std::vector<int> EvaluateDataset(std::string data_path, std::string output_path) = 0;
    virtual std::vector<int> EvaluateDataset(std::istream& dis, std::ostream& eos) = 0;
  
  private:
    /**
     * Helper functions
     */
   virtual std::ifstream& _Load(std::ifstream& is) = 0;
   virtual std::ofstream& _Save(std::ofstream& os) = 0;
};

#endif  // RCM_REGALG_H_