
/*
FUNCTION
	<<isspace>>---whitespace character predicate

INDEX
	isspace

ANSI_SYNOPSIS
	#include <ctype.h>
	int isspace(int <[c]>);

TRAD_SYNOPSIS
	#include <ctype.h>
	int isspace(<[c]>);

DESCRIPTION
<<isspace>> is a macro which classifies ASCII integer values by table
lookup.  It is a predicate returning non-zero for whitespace
characters, and 0 for other characters.  It is defined only when <<isascii>>(<[c]>) is true or <[c]> is EOF.

You can use a compiled subroutine instead of the macro definition by
undefining the macro using `<<#undef isspace>>'.

RETURNS
<<isspace>> returns non-zero if <[c]> is a space, tab, carriage return, new
line, vertical tab, or formfeed (<<0x09>>--<<0x0D>>, <<0x20>>).

PORTABILITY
<<isspace>> is ANSI C.

No supporting OS subroutines are required.
*/

#include "ctype.h"

#undef isspace
int isspace(int c)
{
	return ((c>=0x09 && c<=0x0D) || (c==0x20));
}
