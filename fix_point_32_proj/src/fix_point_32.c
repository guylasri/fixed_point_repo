#include "fix_point_32.h"

const uint8_t fp32_t_bitsize = 8*sizeof(fp32_t); // GLOBAL VARIABLE

fp32_t double2fix_point(double x)
{

	return (fp32_t)(x*SCALE_FACTOR);
}

double fix_point2double(fp32_t x)
{

	return ((double)x)/((double)SCALE_FACTOR);
}

int fix_point2integer(fp32_t x)
{

	if(SIGN(x)) // if negative
	{
		return (int)((-x)>>FRACTIONAL_BITS);
	}
	else
	{
		return (int)(x>>FRACTIONAL_BITS);
	}
}

long long fix_point2fractional(fp32_t x)
{
	if(x&SIGN_MASK) // if negative
	{
		x *= (-1);
	}

	long long fractional_side = (long long)(x&(FRACTIONAL_MASK)); // 0-2^16

	return  fractional_side*PRECISION/((long long)SCALE_FACTOR);
}

fp32_t multi_fix_point(fp32_t x, fp32_t y)
{
	return (fp32_t)(((fp64_t)x*(fp64_t)y)/SCALE_FACTOR);
}

fp32_t div_fix_point(fp32_t x, fp32_t y)
{
	return (fp32_t)((fp64_t)x*SCALE_FACTOR/y);
}

long long quick_pow10(uint8_t n)
{
    static long long pow10[10] = {
        1, 10, 100, 1000, 10000,
        100000, 1000000, 10000000, 100000000, 1000000000
    };

    return (long long)(pow10[n]);
}
