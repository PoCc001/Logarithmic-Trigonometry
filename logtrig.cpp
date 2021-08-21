/**
* Copyright Johannes Kloimböck 2021.
* Distributed under the Boost Software License, Version 1.0.
* (See accompanying file LICENSE or copy at
* https://www.boost.org/LICENSE_1_0.txt)
*/

#include "logtrig.h"
#include "logtrig.hpp"

inline float lsin(float x) noexcept { return lsinf(x); }
inline long double lsin(long double x) noexcept { return lsinl(x); }
inline float l10sin(float x) noexcept { return l10sinf(x); }
inline long double l10sin(long double x) noexcept { return l10sinl(x); }
inline float l2sin(float x) noexcept { return l2sinf(x); }
inline long double l2sin(long double x) noexcept { return l2sinl(x); }

inline float lcos(float x) noexcept { return lcosf(x); }
inline long double lcos(long double x) noexcept { return lcosl(x); }
inline float l10cos(float x) noexcept { return l10cosf(x); }
inline long double l10cos(long double x) noexcept { return l10cosl(x); }
inline float l2cos(float x) noexcept { return l2cosf(x); }
inline long double l2cos(long double x) noexcept { return l2cosl(x); }

inline float ltan(float x) noexcept { return ltanf(x); }
inline long double ltan(long double x) noexcept { return ltanl(x); }
inline float l10tan(float x) noexcept { return l10tanf(x); }
inline long double l10tan(long double x) noexcept { return l10tanl(x); }
inline float l2tan(float x) noexcept { return l2tanf(x); }
inline long double l2tan(long double x) noexcept { return l2tanl(x); }

inline float lcot(float x) noexcept { return lcotf(x); }
inline long double lcot(long double x) noexcept { return lcotl(x); }
inline float l10cot(float x) noexcept { return l10cotf(x); }
inline long double l10cot(long double x) noexcept { return l10cotl(x); }
inline float l2cot(float x) noexcept { return l2cotf(x); }
inline long double l2cot(long double x) noexcept { return l2cotl(x); }
