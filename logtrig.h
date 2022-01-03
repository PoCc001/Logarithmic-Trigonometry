/**
* Copyright Johannes Kloimböck 2021 - 2022.
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
extern CPP_SAFE float l10sinf(float);
extern CPP_SAFE double l10sin(double);
extern CPP_SAFE long double l10sinl(long double);
extern CPP_SAFE float l2sinf(float);
extern CPP_SAFE double l2sin(double);
extern CPP_SAFE long double l2sinl(long double);

extern CPP_SAFE float lcosf(float);
extern CPP_SAFE double lcos(double);
extern CPP_SAFE long double lcosl(long double);
extern CPP_SAFE float l10cosf(float);
extern CPP_SAFE double l10cos(double);
extern CPP_SAFE long double l10cosl(long double);
extern CPP_SAFE float l2cosf(float);
extern CPP_SAFE double l2cos(double);
extern CPP_SAFE long double l2cosl(long double);

extern CPP_SAFE float ltanf(float);
extern CPP_SAFE double ltan(double);
extern CPP_SAFE long double ltanl(long double);
extern CPP_SAFE float l10tanf(float);
extern CPP_SAFE double l10tan(double);
extern CPP_SAFE long double l10tanl(long double);
extern CPP_SAFE float l2tanf(float);
extern CPP_SAFE double l2tan(double);
extern CPP_SAFE long double l2tanl(long double);

extern CPP_SAFE float lcotf(float);
extern CPP_SAFE double lcot(double);
extern CPP_SAFE long double lcotl(long double);
extern CPP_SAFE float l10cotf(float);
extern CPP_SAFE double l10cot(double);
extern CPP_SAFE long double l10cotl(long double);
extern CPP_SAFE float l2cotf(float);
extern CPP_SAFE double l2cot(double);
extern CPP_SAFE long double l2cotl(long double);

#ifdef __cplusplus
#include "logtrig.hpp" // use overloaded functions without suffix
#endif

#endif
