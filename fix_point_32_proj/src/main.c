
#include "fix_point_32.h"
#include <stdio.h> // input output library
#include <stdint.h> // more types of int

int main()
{

	double a = 12.3;
	double b = -3.7;

	fp32_t a_fp = double2fix_point(a);
	fp32_t b_fp = double2fix_point(b);
	//fp32_t sum_fp =  a_fp + b_fp;
	//fp32_t multi_fp = multi_fix_point(a_fp, b_fp);
	fp32_t div_fp = div_fix_point(a_fp, b_fp);
	PRINT_FIX_POINT(div_fp);
	printf("output in double type is %.3lf\n", fix_point2double(div_fp));

    return 0;
}

