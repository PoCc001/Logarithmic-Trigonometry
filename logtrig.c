/**
* Copyright Johannes Kloimböck 2021.
* Distributed under the Boost Software License, Version 1.0.
* (See accompanying file LICENSE or copy at
* https://www.boost.org/LICENSE_1_0.txt)
*/

#include <math.h>
#include "logtrig.h"

#define INLINE_PI 3.1415926535897932384626
#define INLINE_LGE_HALF 0.217147240951625913826 // log10(E) * 0.5
#define INLINE_LDE_HALF 0.721347520444481703680 // log2(E) * 0.5

const long double PIL = (long double)(INLINE_PI);
const long double HPIL = (long double)(INLINE_PI) * 0.5l;
const long double QPIL = (long double)(INLINE_PI) * 0.25l;
const long double TQPIL = (long double)(INLINE_PI) * 0.75l;
const long double L10D2L = (long double)(INLINE_LGE_HALF);
const long double L2D2L = (long double)(INLINE_LDE_HALF);
const double PI = (double)(INLINE_PI);
const double HPI = (double)(INLINE_PI) * 0.5;
const double QPI = (double)(INLINE_PI) * 0.25;
const double TQPI = (double)(INLINE_PI) * 0.75;
const double L10D2 = (double)(INLINE_LGE_HALF);
const double L2D2 = (double)(INLINE_LDE_HALF);
const float PIF = (float)(INLINE_PI);
const float HPIF = (float)(INLINE_PI) * 0.5f;
const float QPIF = (float)(INLINE_PI) * 0.25f;
const float TQPIF = (float)(INLINE_PI) * 0.75f;
const float L10D2F = (float)(INLINE_LGE_HALF);
const float L2D2F = (float)(INLINE_LDE_HALF);

float lsinf(float x) {
	if (x < 0.0f || x > PIF) {
		return (float)(FP_NAN);
	}

	if (x > QPIF && x < TQPIF) {
		float c = cosf(x);
		return log1pf(-c * c) * 0.5f;	
	}
	else {
		return logf(sinf(x));
	}
}

float l10sinf(float x) {
	if (x < 0.0f || x > PIF) {
		return (float)(FP_NAN);
	}

	if (x > QPIF && x < TQPIF) {
		float c = cosf(x);
		return log1pf(-c * c) * L10D2F;
	}
	else {
		return log10f(sinf(x));
	}
}

float l2sinf(float x) {
	if (x < 0.0f || x > PIF) {
		return (float)(FP_NAN);
	}

	if (x > QPIF && x < TQPIF) {
		float c = cosf(x);
		return log1pf(-c * c) * L2D2F;
	}
	else {
		return log2f(sinf(x));
	}
}

double lsin(double x) {
	if (x < 0.0 || x > PI) {
		return (double)(FP_NAN);
	}

	if (x > QPI && x < TQPI) {
		double c = cos(x);
		return log1p(-c * c) * 0.5;
	}
	else {
		return log(sin(x));
	}
}

double l10sin(double x) {
	if (x < 0.0 || x > PI) {
		return (double)(FP_NAN);
	}

	if (x > QPI && x < TQPI) {
		double c = cos(x);
		return log1p(-c * c) * L10D2;
	}
	else {
		return log10(sin(x));
	}
}

double l2sin(double x) {
	if (x < 0.0 || x > PI) {
		return (double)(FP_NAN);
	}

	if (x > QPI && x < TQPI) {
		double c = cos(x);
		return log1p(-c * c) * L2D2;
	}
	else {
		return log2(sin(x));
	}
}

long double lsinl(long double x) {
	if (x < 0.0l || x > PIL) {
		return (long double)(FP_NAN);
	}

	if (x > QPIL && x < TQPIL) {
		long double c = cosl(x);
		return log1pl(-c * c) * 0.5l;
	}
	else {
		return logl(sinl(x));
	}
}

long double l10sinl(long double x) {
	if (x < 0.0l || x > PIL) {
		return (long double)(FP_NAN);
	}

	if (x > QPIL && x < TQPIL) {
		long double c = cosl(x);
		return log1pl(-c * c) * L10D2L;
	}
	else {
		return log10l(sinl(x));
	}
}

long double l2sinl(long double x) {
	if (x < 0.0l || x > PIL) {
		return (long double)(FP_NAN);
	}

	if (x > QPIL && x < TQPIL) {
		long double c = cosl(x);
		return log1pl(-c * c) * L2D2L;
	}
	else {
		return log2l(sinl(x));
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

float l10cosf(float x) {
	if (x < -HPIF || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > -QPIF && x < QPIF) {
		float c = sinf(x);
		return log1pf(-c * c) * L10D2F;
	}
	else {
		return log10f(cosf(x));
	}
}

float l2cosf(float x) {
	if (x < -HPIF || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > -QPIF && x < QPIF) {
		float c = sinf(x);
		return log1pf(-c * c) * L2D2F;
	}
	else {
		return log2f(cosf(x));
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

double l10cos(double x) {
	if (x < -HPI || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > -QPI && x < QPI) {
		double c = sin(x);
		return log1p(-c * c) * L10D2;
	}
	else {
		return log10(cos(x));
	}
}

double l2cos(double x) {
	if (x < -HPI || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > -QPI && x < QPI) {
		double c = sin(x);
		return log1p(-c * c) * L2D2;
	}
	else {
		return log2(cos(x));
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

long double l10cosl(long double x) {
	if (x < -HPIL || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > -QPIL && x < QPIL) {
		long double c = sinl(x);
		return log1pl(-c * c) * L10D2L;
	}
	else {
		return log10l(cosl(x));
	}
}

long double l2cosl(long double x) {
	if (x < -HPIL || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > -QPIL && x < QPIL) {
		long double c = sinl(x);
		return log1pl(-c * c) * L2D2L;
	}
	else {
		return log2l(cosl(x));
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

float l10tanf(float x) {
	if (x < 0.0f || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > 0.7f && x < 0.9f) {
		float c = cosf(x);
		float ctc = c * c;
		return log1pf((1.0f - 2.0f * ctc) / ctc) * L10D2F;
	}
	else {
		return log10f(tanf(x));
	}
}

float l2tanf(float x) {
	if (x < 0.0f || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > 0.7f && x < 0.9f) {
		float c = cosf(x);
		float ctc = c * c;
		return log1pf((1.0f - 2.0f * ctc) / ctc) * L2D2F;
	}
	else {
		return log2f(tanf(x));
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

double l10tan(double x) {
	if (x < 0.0 || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > 0.7 && x < 0.9) {
		double c = cos(x);
		double ctc = c * c;
		return log1p((1.0 - 2.0 * ctc) / ctc) * L10D2;
	}
	else {
		return log10(tan(x));
	}
}

double l2tan(double x) {
	if (x < 0.0 || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > 0.7 && x < 0.9) {
		double c = cos(x);
		double ctc = c * c;
		return log1p((1.0 - 2.0 * ctc) / ctc) * L2D2;
	}
	else {
		return log2(tan(x));
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

long double l10tanl(long double x) {
	if (x < 0.0l || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > 0.7l && x < 0.9l) {
		long double c = cosl(x);
		long double ctc = c * c;
		return log1pl((1.0l - 2.0l * ctc) / ctc) * L10D2L;
	}
	else {
		return log10l(tanl(x));
	}
}

long double l2tanl(long double x) {
	if (x < 0.0l || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > 0.7l && x < 0.9l) {
		long double c = cosl(x);
		long double ctc = c * c;
		return log1pl((1.0l - 2.0l * ctc) / ctc) * L2D2L;
	}
	else {
		return log2l(tanl(x));
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

float l10cotf(float x) {
	if (x < 0.0f || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > 0.7f && x < 0.9f) {
		float c = sinf(x);
		float ctc = c * c;
		return log1pf((1.0f - 2.0f * ctc) / ctc) * L10D2F;
	}
	else {
		return -log10f(tanf(x));
	}
}

float l2cotf(float x) {
	if (x < 0.0f || x > HPIF) {
		return (float)(FP_NAN);
	}

	if (x > 0.7f && x < 0.9f) {
		float c = sinf(x);
		float ctc = c * c;
		return log1pf((1.0f - 2.0f * ctc) / ctc) * L2D2F;
	}
	else {
		return -log2f(tanf(x));
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

double l10cot(double x) {
	if (x < 0.0 || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > 0.7 && x < 0.9) {
		double c = sin(x);
		double ctc = c * c;
		return log1p((1.0 - 2.0 * ctc) / ctc) * L10D2;
	}
	else {
		return -log10(tan(x));
	}
}

double l2cot(double x) {
	if (x < 0.0 || x > HPI) {
		return (double)(FP_NAN);
	}

	if (x > 0.7 && x < 0.9) {
		double c = sin(x);
		double ctc = c * c;
		return log1p((1.0 - 2.0 * ctc) / ctc) * L2D2;
	}
	else {
		return -log2(tan(x));
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

long double l10cotl(long double x) {
	if (x < 0.0l || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > 0.7l && x < 0.9l) {
		long double c = sinl(x);
		long double ctc = c * c;
		return log1pl((1.0l - 2.0l * ctc) / ctc) * L10D2L;
	}
	else {
		return -log10l(tanl(x));
	}
}

long double l2cotl(long double x) {
	if (x < 0.0l || x > HPIL) {
		return (long double)(FP_NAN);
	}

	if (x > 0.7l && x < 0.9l) {
		long double c = sinl(x);
		long double ctc = c * c;
		return log1pl((1.0l - 2.0l * ctc) / ctc) * L2D2L;
	}
	else {
		return -log2l(tanl(x));
	}
}
