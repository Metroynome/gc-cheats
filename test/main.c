#include <tamtypes.h>

#include <libgc/stdio.h>
#include <libgc/string.h>
#include <libgc/gc.h>

int main(void)
{
	gcPreUpdate();

	// do things

	gcPostUpdate();

	return 0;
}
