#ifndef JCHONG_DEBUG_CPP_H
#define JCHONG_DEBUG_CPP_H

#include <iostream>
#define DEBUG(X) (std::cerr << __FILE__ << "-" << __LINE__ << ": " #X << " = " << X << '\n')

#endif // JCHONG_DEBUG_CPP_H
