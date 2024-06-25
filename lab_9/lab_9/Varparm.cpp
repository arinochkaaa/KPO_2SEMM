#include "Varparm.h"

namespace Varparm {
	int ivarparm(int n, ...) {// произведение значений всех параметров,
		//начиная со второго
		if (n == 0)// Если не передано целых чисел
		{
			return 0;
		}
		int mul = 1;
		int* p = &n + 1;
		int i = 0;
		while (i < n) {
			mul *= *(p + i);
			i++;
		}
		return mul;
	}

	int svarparm(short n, ...) {//Найти максимальное значение параметров, переданных в
		//функцию, начиная со второго.
		if (n == 0)// Если не передано целых чисел
		{
			return 0;
		}
		int max = 0;
		int* p = (int*)(&n);
		for (int i = 1; i < n + 1; i++)
		{
			if (*(p + i) > max)
			{
				max = *(p + i);
			}
		}
		return max;
	}

	double fvarparm(float n, ...) {//Вычислить сумму значений всех параметров, начиная с
		//первого по предпоследний.
		double* p = (double*)(&n + 1);
		double sum = (double)n;
		if (n == FLT_MAX) {
			return 0;
		}
		for (int i = 0; p[i] != (double)FLT_MAX; i++) {
			sum += p[i];
		}
		return sum;
	}

	double dvarparm(double n, ...) {//Вычислить сумму значений всех параметров, начиная с
		//первого по предпоследний.
		double* p = (&n + 1);
		double sum = n;
		if (n == DBL_MAX) {
			return 0;
		}
		for (int i = 0; p[i] != (double)DBL_MAX; i++) {
			sum += p[i];
		}
		return sum;
	}
}