#include "Settings.hpp"

namespace FFG {
Settings::Settings(const std::string file_path) : m_window_props() {
  std::ifstream settings_file(file_path);
  std::string current_line;
  if (!settings_file) {
    std::cout << "ERROR: Invalid Settings File Path" << std::endl;
    return;
  }
  while (std::getline(settings_file, current_line)) {
    if (current_line.starts_with('[')) {
    }
  }
}

Settings::~Settings() {}
} // namespace FFG
