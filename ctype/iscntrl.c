
/*
FUNCTION
	<<iscntrl>>---control character predicate

INDEX
	iscntrl

ANSI_SYNOPSIS
	#include <ctype.h>
	int iscntrl(int <[c]>);

TRAD_SYNOPSIS
	#include <ctype.h>
	int iscntrl(<[c]>);

DESCRIPTION
<<iscntrl>> is a macro which classifies ASCII integer values by table
lookup.  It is a predicate returning non-zero for control characters, and 0 
for other characters.  It is defined only when <<isascii>>(<[c]>) is
true or <[c]> is EOF. 

You can use a compiled subroutine instead of the macro definition by
undefining the macro using `<<#undef iscntrl>>'.

RETURNS
<<iscntrl>> returns non-zero if <[c]> is a delete character or ordinary
control character (<<0x7F>> or <<0x00>>--<<0x1F>>).

PORTABILITY
<<iscntrl>> is ANSI C.

No supporting OS subroutines are required.
*/

#include "ctype.h"

#undef iscntrl
int iscntrl(int c)
{
	return((c==0x7F) || (c>=0 && c<=0x1F));
}


