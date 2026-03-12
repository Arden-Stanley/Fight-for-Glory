#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>

namespace FFG {
class Settings {
public:
  Settings(const std::string filePath);
  ~Settings();

private:
  std::unordered_map<std::string, std::unordered_map<std::string, std::string>>
      _fields;
};
} // namespace FFG
