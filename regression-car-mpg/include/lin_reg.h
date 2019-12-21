#ifndef RCM_LINREG_H_
#define RCM_LINREG_H_

#include "reg_alg.h"

class LinReg : public RegAlg {
  public:

    /**
     * Enter a path of a file to read
     * 
     * Depending on the file at the end of the path, LinReg will be initialized
     * differently. LinReg will determine whether the file is data or a model and initalaize
     * accordingly. LinReg will either generate a model off of data, or load a preexisting model
     * 
     * @Param path path of the file to be read
     */
   explicit LinReg(std::string path = "../../../regression-car-mpg/data/auto-mpg.data");

    /**
     * Use a stream to load a model from the constructor
     *
     * Depending on the file at the end of the path, LinReg will be initialized
     * differently. LinReg will determine whether the file is data or a model and initalaize
     * accordingly. LinReg will either generate a model off of data, or load a preexisting model
     *
     * @Param path path of the file to be read
     */
    explicit LinReg(std::istream& is);

    /**
     * Virtual functions documented in reg_alg.h
     */
    bool GenerateModel(std::string data_path = "../../../regression-car-mpg/data/auto-mpg.data");
    bool SaveModel(std::string model_path);
    friend std::ostream& operator>>(std::ostream& os, LinReg const& reg);
    bool LoadModel(std::string model_path);
    friend std::istream& operator<<(std::istream& is, LinReg& reg);
    int Evaluate(std::vector<int> param);
    std::vector<int> EvaluateDataset(std::string data_path, std::string output_path);

  private:
    void _Load(std::istream& is);
    void _Save(std::ostream& os);

    double n_;
    double r_;
    double sd_y_;
    double sd_x_;

    double slope_;
    double rmse_;
    double se_slope_;
    double se_slope_p_;

    double z_;
    double t_;
    double df_;
};

#endif  // RCM_LINREG_H_