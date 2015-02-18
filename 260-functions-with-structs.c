#include <stdio.h>
#include <math.h>

struct Vec3
{
	float x, y, z;
};

float Vec3_length(const struct Vec3* v)
{
	return sqrt(
		v->x * v->x +
		v->y * v->y + 
		v->z * v->z
	);
}

void Vec3_print(const struct Vec3* v)
{
	printf("%g %g %g\n", v->x, v->y, v->z);
}

int main()
{	
	struct Vec3 v = {0, 1, 2};
	printf("%g\n", Vec3_length(&v));
	Vec3_print(&v);
	
	return 0;
}
