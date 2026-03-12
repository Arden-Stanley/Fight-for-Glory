#include "Settings.hpp"
#include <unordered_map>

namespace FFG {
Settings::Settings(const std::string filePath) : _fields() {
  std::ifstream settingsFile(filePath);
  std::string currentLine;

  if (!settingsFile) {
    std::cout << "ERROR: Invalid Settings File Path" << std::endl;
    return;
  }
  std::string currentField = "";
  while (std::getline(settingsFile, currentLine)) {
    if (currentLine.starts_with('[')) {
      currentField = currentLine;
      std::unordered_map<std::string, std::string> _field;
      _fields.insert({currentLine, _field});
    } else if (currentLine.starts_with('#')) {

    } else {
      _fields.at(currentField).insert(currentLine, )
    }
  }
}

Settings::~Settings() {}
} // namespace FFG
