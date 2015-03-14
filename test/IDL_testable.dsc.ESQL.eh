/* It had generated by DirectStruct v1.3.0 */
#ifndef _H_testable_ESQL_
#define _H_testable_ESQL_

#define _PQSQL

#include <ecpglib.h>
#include <ecpgerrno.h>
#include <sqlca.h>

#include "IDL_testable.dsc.h"

#undef SQLCODE
#define SQLCODE		(int)(sqlca.sqlcode)

#undef SQLSTATE
#define SQLSTATE	sqlca.sqlstate

#undef SQLDESC
#define SQLDESC		sqlca.sqlerrm.sqlerrmc

#ifndef SQLNOTFOUND
#define SQLNOTFOUND	100
#endif


EXEC SQL BEGIN DECLARE SECTION ;
	extern short testable_n2 ;	extern short testable_n2_id ;
	extern int testable_n4 ;	extern short testable_n4_id ;
	extern float testable_f4 ;	extern short testable_f4_id ;
	extern double testable_f8 ;	extern short testable_f8_id ;
	extern char testable_str32[ 32 + 1 ] ;	extern short testable_str32_id ;
	extern char testable_str1024[ 1024 + 1 ] ;	extern short testable_str1024_id ;
EXEC SQL END DECLARE SECTION ;

#define	TFLIST_testable \
	n2 , \
	n4 , \
	f4 , \
	f8 , \
	str32 , \
	str1024

#define	DBVLIST_testable \
	:testable_n2 , \
	:testable_n4 , \
	:testable_f4 , \
	:testable_f8 , \
	:testable_str32 , \
	:testable_str1024

#define	DBVLLIST_testable \
	:testable_n2 :testable_n2_id , \
	:testable_n4 :testable_n4_id , \
	:testable_f4 :testable_f4_id , \
	:testable_f8 :testable_f8_id , \
	:testable_str32 :testable_str32_id , \
	:testable_str1024 :testable_str1024_id

void DSCINITV_testable();
void DSCVTOS_testable( testable *pst );
void DSCSTOV_testable( testable *pst );
void DSCTRIM_testable( testable *pst );


#endif
