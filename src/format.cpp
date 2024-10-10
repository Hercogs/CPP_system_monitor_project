#include "format.h"

#include <iomanip>
#include <sstream>
#include <string>

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
string Format::ElapsedTime(long total_seconds) {
  int days, hours, minutes, seconds = total_seconds;

  days = seconds / (60 * 60 * 24);
  seconds -= days * (60 * 60 * 24);

  hours = seconds / (60 * 60);
  seconds -= hours * (60 * 60);

  minutes = seconds / (60);
  seconds -= minutes * (60);

  if (days > 0) {
    std::ostringstream oss;
    oss << days << "d " << std::setw(2) << std::setfill('0') << hours << ":"
        << std::setw(2) << std::setfill('0') << minutes << ":" << std::setw(2)
        << std::setfill('0') << seconds;
    return oss.str();
  } else {
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hours << ":" << std::setw(2)
        << std::setfill('0') << minutes << ":" << std::setw(2)
        << std::setfill('0') << seconds;
    return oss.str();
  }
}