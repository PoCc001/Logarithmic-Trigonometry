/**
* Copyright Johannes Kloimböck 2021.
* Distributed under the Boost Software License, Version 1.0.
* (See accompanying file LICENSE or copy at
* https://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef LOG_TRIG_H
#define LOG_TRIG_H

#ifdef __cplusplus
#define CPP_SAFE "C"
#else
#define CPP_SAFE
#endif

extern CPP_SAFE float lsinf(float);
extern CPP_SAFE double lsin(double);
extern CPP_SAFE long double lsinl(long double);

extern CPP_SAFE float lcosf(float);
extern CPP_SAFE double lcos(double);
extern CPP_SAFE long double lcosl(long double);

extern CPP_SAFE float ltanf(float);
extern CPP_SAFE double ltan(double);
extern CPP_SAFE long double ltanl(long double);

extern CPP_SAFE float lcotf(float);
extern CPP_SAFE double lcot(double);
extern CPP_SAFE long double lcotl(long double);

#ifdef __cplusplus
#include "logtrig.hpp" // use overloaded functions without suffix
#endif

#endif