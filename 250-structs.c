#include <stdio.h>

struct Vec3
{
	float x, y, z;
};

int main()
{	
	struct Vec3 pt = {0, 1, 2};
	printf("%g %g %g\n", pt.x, pt.y, pt.z);
	pt.x = 10;
	printf("%g %g %g\n", pt.x, pt.y, pt.z);
	
	struct Vec3 * ppt = &pt;
	ppt->y = 20;
	printf("%g %g %g\n", ppt->x, ppt->y, ppt->z);
	
	return 0;
}
