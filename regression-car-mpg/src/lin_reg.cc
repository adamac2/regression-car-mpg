#include "lin_reg.h"

LinReg::LinReg(std::string path) {}

LinReg::LinReg(std::ifstream& is) {}

bool LinReg::GenerateModel(std::string data_path) { return false; }

bool LinReg::SaveModel(std::string model_path) { return false; }

bool LinReg::LoadModel(std::string model_path) { return false; }

int LinReg::Evaluate(std::vector<int> param) { return 0; }

std::vector<int> LinReg::EvaluateDataset(std::string data_path,
                                         std::string output_path) {
  return std::vector<int>();
}

std::ifstream& LinReg::_Load(std::ifstream& is) { return is; }

std::ofstream& LinReg::_Save(std::ofstream& os) { return os; }