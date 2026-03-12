#pragma once
#include <GLFW/glfw3.h>
#include <memory>

namespace FFG {
class Window {
public:
  Window();
  ~Window();

private:
  std::unique_ptr<GLFWwindow> m_handle;
};
} // namespace FFG
