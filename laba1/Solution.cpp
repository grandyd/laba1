#include <math.h>

inline double f(const double x, const double v)
{
	return 1/(1+x*x*x*x);
}

inline double k1(const double x, const double v)
{
	return f(x, v);
}

inline double k2(const double x, const double v, const double h)
{
	return f(x + h / 2, v + (h / 2) * k1(x, v));
}

inline double k3(const double x, const double v, const double h)
{
	return f(x + h / 2, v + (h / 2) * k2(x, v, h));
}

inline double k4(const double x, const double v, const double h)
{
	return f(x + h, v + h * k3(x, v, h));
}

inline double nextX(const double x, const double h)
{
	return x + h;
}

inline double nextV(const double x, const double v, const double h)
{
	return v + (h / 6) * (k1(x, v) + 2 * k2(x, v, h) + 2 * k3(x, v, h) + k4(x, v, h));
}

inline double vkrNext(double x, double v, double h)
{
	h /= 2;
	v = nextV(x, v, h);
	return nextV(x, v, h);
}