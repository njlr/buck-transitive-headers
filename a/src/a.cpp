#include <a/a.hpp>
#include <b/b.hpp>

#include <c/c.hpp>

// extern std::string hidden();

std::string a() {
  return "Hello from a and " + b();
}
