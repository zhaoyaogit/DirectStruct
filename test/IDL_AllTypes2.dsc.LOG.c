/* It had generated by DirectStruct v1.4.0 */
#include "IDL_AllTypes2.dsc.h"

#ifndef FUNCNAME_DSCLOG_AllTypes2
#define FUNCNAME_DSCLOG_AllTypes2	DSCLOG_AllTypes2
#endif

#ifndef PREFIX_DSCLOG_AllTypes2
#define PREFIX_DSCLOG_AllTypes2	printf( 
#endif

#ifndef NEWLINE_DSCLOG_AllTypes2
#define NEWLINE_DSCLOG_AllTypes2	"\n"
#endif

int FUNCNAME_DSCLOG_AllTypes2( AllTypes2 *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_AllTypes2 "AllTypes2.n4[%d]" NEWLINE_DSCLOG_AllTypes2 , pst->n4 );
	PREFIX_DSCLOG_AllTypes2 "AllTypes2.n8[" LONGLONG_FORMAT_SPEC "d]" NEWLINE_DSCLOG_AllTypes2 , pst->n8 );
	PREFIX_DSCLOG_AllTypes2 "AllTypes2.u4[%u]" NEWLINE_DSCLOG_AllTypes2 , pst->u4 );
	PREFIX_DSCLOG_AllTypes2 "AllTypes2.u8[" LONGLONG_FORMAT_SPEC "u]" NEWLINE_DSCLOG_AllTypes2 , pst->u8 );
	PREFIX_DSCLOG_AllTypes2 "AllTypes2.f4[%f]" NEWLINE_DSCLOG_AllTypes2 , pst->f4 );
	PREFIX_DSCLOG_AllTypes2 "AllTypes2.f8[%lf]" NEWLINE_DSCLOG_AllTypes2 , pst->f8 );
	PREFIX_DSCLOG_AllTypes2 "AllTypes2.str32[%s]" NEWLINE_DSCLOG_AllTypes2 , pst->str32 );
	PREFIX_DSCLOG_AllTypes2 "AllTypes2.str1024[%s]" NEWLINE_DSCLOG_AllTypes2 , pst->str1024 );
	return 0;
}
