#pragma once

#include <iosfwd>
#include <string>

#include <libcppzmq/export.hxx>

namespace cppzmq
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBCPPZMQ_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
