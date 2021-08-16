/**
* Copyright Johannes Kloimböck 2021.
* Distributed under the Boost Software License, Version 1.0.
* (See accompanying file LICENSE or copy at
* https://www.boost.org/LICENSE_1_0.txt)
*/

#include <math.h>
#include "logtrig.h"

const long double PIL = acosl(1.0l);
const long double HPIL = PIL * 0.5l;
const long double QPIL = PIL * 0.25l;
const double PI = (double)(PIL);
const double HPI = PI * 0.5;
const double QPI = PI * 0.25;
const float PIF = (float)(PIL);
const float HPIF = PIF * 0.5f;
const float QPIF = PIF * 0.25f;

float lsinf(float x) {
	if (x < 0.0f || x > PIF) {
		return (float)(FP_NAN);
	}

	if (x < QPIF) {
		return logf(sinf(x));
	}
	else {
		float c = cosf(x);
		return log1pf(-c * c) * 0.5f;
	}
}

double lsin(double x) {
	if (x < 0.0 || x > PI) {
		return (double)(FP_NAN);
	}

	if (x < QPI) {
		return log(sin(x));
	}
	else {
		double c = cos(x);
		return log1p(-c * c) * 0.5;
	}
}

long double lsinl(long double x) {
	if (x < 0.0l || x > PIL) {
		return (long double)(FP_NAN);
	}

	if (x < QPIL) {
		return logl(sinl(x));
	}
	else {
		long double c = cosl(x);
		return log1pl(-c * c) * 0.5l;
	}
}

float lcosf(float x) {
	if (x < -HPIF || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > -QPIF && x < QPIF) {
		float c = sinf(x);
		return log1pf(-c * c) * 0.5f;
	}
	else {
		return logf(cosf(x));
	}
}

double lcos(double x) {
	if (x < -HPI || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > -QPI && x < QPI) {
		double c = sin(x);
		return log1p(-c * c) * 0.5;
	}
	else {
		return log(cos(x));
	}
}

long double lcosl(long double x) {
	if (x < -HPIL || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > -QPIL && x < QPIL) {
		long double c = sinl(x);
		return log1pl(-c * c) * 0.5l;
	}
	else {
		return logl(cosl(x));
	}
}

float ltanf(float x) {
	if (x < 0.0f || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > 0.7f && x < 0.9f) {
		float c = cosf(x);
		float ctc = c * c;
		return log1pf((1.0f - 2.0f * ctc) / ctc) * 0.5f;
	}
	else {
		return logf(tanf(x));
	}
}

double ltan(double x) {
	if (x < 0.0 || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > 0.7 && x < 0.9) {
		double c = cos(x);
		double ctc = c * c;
		return log1p((1.0 - 2.0 * ctc) / ctc) * 0.5;
	}
	else {
		return log(tan(x));
	}
}

long double ltanl(long double x) {
	if (x < 0.0l || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > 0.7l && x < 0.9l) {
		long double c = cosl(x);
		long double ctc = c * c;
		return log1pl((1.0l - 2.0l * ctc) / ctc) * 0.5l;
	}
	else {
		return logl(tanl(x));
	}
}

float lcotf(float x) {
	if (x < 0.0f || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > 0.7f && x < 0.9f) {
		float c = sinf(x);
		float ctc = c * c;
		return log1pf((1.0f - 2.0f * ctc) / ctc) * 0.5f;
	}
	else {
		return -logf(tanf(x));
	}
}

double lcot(double x) {
	if (x < 0.0 || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > 0.7 && x < 0.9) {
		double c = sin(x);
		double ctc = c * c;
		return log1p((1.0 - 2.0 * ctc) / ctc) * 0.5;
	}
	else {
		return -log(tan(x));
	}
}

long double lcotl(long double x) {
	if (x < 0.0l || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > 0.7l && x < 0.9l) {
		long double c = sinl(x);
		long double ctc = c * c;
		return log1pl((1.0l - 2.0l * ctc) / ctc) * 0.5l;
	}
	else {
		return -logl(tanl(x));
	}
}