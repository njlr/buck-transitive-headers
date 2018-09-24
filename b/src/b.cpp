#include <b/b.hpp>
#include <c/c.hpp>

std::string b() {
  return "Hello from b and " + c();
}
