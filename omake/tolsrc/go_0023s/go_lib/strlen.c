//*****************************************************************************
// strlen.c : string function
// 2002/02/04 by Gaku : this is rough sketch
//*****************************************************************************

#include <stddef.h>

//=============================================================================
// return the length of D
//=============================================================================
size_t GO_strlen (char *d)
{
	char *tmp = d;

	while ('\0' != *d)
		d++;

	return d - tmp;
}
