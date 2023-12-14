#include <stdio.h>
template<typename T>
void Min(T a, T b) {
	if (a < b) {
		printf("%d\n", static_cast<T> (a));
	}
	else
	{
		printf("%d\n", static_cast<T> (b));
	}
}
template<>
void Min<char>(char a, char b) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
}
template<>
void Min<float>(float a, float b) {
	if (a < b) {
		printf("%f\n",a);
	}
	else
	{
		printf("%f\n",b);
	}
}
template<>
void Min<double>(double a, double b) {
	if (a < b) {
		printf("%lf\n",a);
	}
	else
	{
		printf("%lf\n",b);
	}
}


int main() {
	int a = 10;
	int b = 2;
	float c = 0;
	float d = 7;
	double e = 33;
	double f = 50;
	char g = 'a';
	char h = 'k';
	Min<int>(a, b);
	Min<float>(c, d);
	 Min<double>(e, f);
	Min<char>(g, h);

	return 0;
}