#include "lin_reg.h"

LinReg::LinReg(std::string path) {}

LinReg::LinReg(std::istream& is) {}

bool LinReg::GenerateModel(std::string data_path) { return false; }

bool LinReg::SaveModel(std::string model_path) { return false; }

bool LinReg::LoadModel(std::string model_path) { return false; }

int LinReg::Evaluate(std::vector<int> param) { return 0; }

std::vector<int> LinReg::EvaluateDataset(std::string data_path,
                                         std::string output_path) {
  return std::vector<int>();
}

void LinReg::_Load(std::istream& is) {}

void LinReg::_Save(std::ostream& os) {}

std::ostream& operator>>(std::ostream& os, LinReg const& reg) {
  // TODO: implement
  return os;
}

std::istream& operator<<(std::istream& is, LinReg& reg) {
  // TODO: implement
  return is;
}
