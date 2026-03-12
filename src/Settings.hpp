#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

namespace FFG {
class Settings {
public:
  Settings(const std::string file_path);
  ~Settings();

private:
  std::unordered_map<std::string, std::unordered_map<std::string, std::string>>
      _field;
};
} // namespace FFG
