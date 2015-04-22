/* It had generated by DirectStruct v1.5.0 */

#include "IDL_userinfo.dsc.ESQL.eh"

EXEC SQL BEGIN DECLARE SECTION ;
	int userinfo_user_id ;	short userinfo_user_id_id ;
	char userinfo_user_name[ 16 + 1 ] ;	short userinfo_user_name_id ;
	char userinfo_email[ 128 + 1 ] ;	short userinfo_email_id ;
EXEC SQL END DECLARE SECTION ;

void DSCINITV_userinfo()
{
	userinfo_user_id = 0 ;
	userinfo_user_id_id = 0 ;
	memset( userinfo_user_name , 0x00 , sizeof(userinfo_user_name) );
	userinfo_user_name_id = 0 ;
	memset( userinfo_email , 0x00 , sizeof(userinfo_email) );
	userinfo_email_id = 0 ;
	return;
}

void DSCVTOS_userinfo( userinfo *pst )
{
	pst->user_id = userinfo_user_id ;
	strcpy( pst->user_name , userinfo_user_name );
	strcpy( pst->email , userinfo_email );
	return;
}

void DSCSTOV_userinfo( userinfo *pst )
{
	userinfo_user_id = pst->user_id ;
	strcpy( userinfo_user_name , pst->user_name );
	strcpy( userinfo_email , pst->email );
	return;
}

#ifndef TRIM
#define TRIM(_str_) {char *p=(_str_)+strlen(_str_)-1; for(;((*p)==' ')&&(p>=(_str_));p--){(*p)='\0';}}
#endif

void DSCTRIM_userinfo( userinfo *pst )
{
	TRIM( pst->user_name )
	TRIM( pst->email )
	return;
}

void DSCSQLACTION_SELECT_user_name_email_FROM_userinfo_WHERE_user_id_E( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		SELECT	user_name,email
		INTO	:userinfo_user_name :userinfo_user_name_id , :userinfo_email :userinfo_email_id
		FROM	userinfo
		WHERE	user_id = :userinfo_user_id
		;
	if( SQLCODE )
		return;
	
	DSCVTOS_userinfo( pst );
	
	return;
}

void DSCSQLACTION_SELECT_A_FROM_userinfo_WHERE_user_id_E_AND_user_name_E( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		SELECT	*
		INTO	DBVLLIST_userinfo
		FROM	userinfo
		WHERE	user_id = :userinfo_user_id AND user_name = :userinfo_user_name
		;
	if( SQLCODE )
		return;
	
	DSCVTOS_userinfo( pst );
	
	return;
}

void DSCSQLACTION_INSERT_INTO_userinfo( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		INSERT INTO	userinfo
		VALUES ( DBVLLIST_userinfo )
		;
	return;
}

void DSCSQLACTION_UPDATE_userinfo_SET_A_WHERE_user_id_E( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		UPDATE	userinfo
		SET	user_id = :userinfo_user_id , user_name = :userinfo_user_name , email = :userinfo_email 
		WHERE	user_id = :userinfo_user_id
		;
	return;
}

void DSCSQLACTION_UPDATE_userinfo_SET_email( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		UPDATE	userinfo
		SET	email = :userinfo_email
		;
	return;
}

void DSCSQLACTION_DELETE_FROM_userinfo_WHERE_user_id_GE( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		DELETE
		FROM	userinfo
		WHERE	user_id >= :userinfo_user_id
		;
	return;
}

void DSCSQLACTION_DELETE_FROM_userinfo( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		DELETE
		FROM	userinfo
		;
	return;
}

void DSCSQLACTION_OPEN_CURSOR_mycursor_SELECT_A_FROM_userinfo( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		DECLARE	userinfo_mycursor CURSOR FOR
		SELECT	*
		FROM	userinfo
		;
	if( SQLCODE )
		return;
	
	EXEC SQL
		OPEN	userinfo_mycursor
		;
	if( SQLCODE )
		return;
	
	return;
}

void DSCSQLACTION_FETCH_CURSOR_mycursor( userinfo *pst )
{
	EXEC SQL
		FETCH	userinfo_mycursor
		INTO	DBVLLIST_userinfo
		;
	if( SQLCODE )
		return;
	
	DSCVTOS_userinfo( pst );
	
	return;
}

void DSCSQLACTION_CLOSE_CURSOR_mycursor()
{
	EXEC SQL
		CLOSE	userinfo_mycursor
		;
	return;
}

void DSCSQLACTION_OPEN_CURSOR_mycursor1_SELECT_user_name_FROM_userinfo_WHERE_user_id_GE( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		DECLARE	userinfo_mycursor1 CURSOR FOR
		SELECT	user_name
		FROM	userinfo
		WHERE	user_id >= :userinfo_user_id
		;
	if( SQLCODE )
		return;
	
	EXEC SQL
		OPEN	userinfo_mycursor1
		;
	if( SQLCODE )
		return;
	
	return;
}

void DSCSQLACTION_FETCH_CURSOR_mycursor1( userinfo *pst )
{
	EXEC SQL
		FETCH	userinfo_mycursor1
		INTO	:userinfo_user_name :userinfo_user_name_id
		;
	if( SQLCODE )
		return;
	
	DSCVTOS_userinfo( pst );
	
	return;
}

void DSCSQLACTION_CLOSE_CURSOR_mycursor1()
{
	EXEC SQL
		CLOSE	userinfo_mycursor1
		;
	return;
}

void DSCSQLACTION_OPEN_CURSOR_mycursor2_SELECT_user_name_email_FROM_userinfo_ORDER_BY_user_id_ASC( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		DECLARE	userinfo_mycursor2 CURSOR FOR
		SELECT	user_name,email
		FROM	userinfo
		ORDER BY  user_id  ASC 
		;
	if( SQLCODE )
		return;
	
	EXEC SQL
		OPEN	userinfo_mycursor2
		;
	if( SQLCODE )
		return;
	
	return;
}

void DSCSQLACTION_FETCH_CURSOR_mycursor2( userinfo *pst )
{
	EXEC SQL
		FETCH	userinfo_mycursor2
		INTO	:userinfo_user_name :userinfo_user_name_id, :userinfo_email :userinfo_email_id
		;
	if( SQLCODE )
		return;
	
	DSCVTOS_userinfo( pst );
	
	return;
}

void DSCSQLACTION_CLOSE_CURSOR_mycursor2()
{
	EXEC SQL
		CLOSE	userinfo_mycursor2
		;
	return;
}

void DSCSQLACTION_OPEN_CURSOR_mycursor3_SELECT_A_FROM_userinfo_WHERE_user_id_GE_ORDER_BY_user_id_ASC( userinfo *pst )
{
	DSCSTOV_userinfo( pst );
	
	EXEC SQL
		DECLARE	userinfo_mycursor3 CURSOR FOR
		SELECT	*
		FROM	userinfo
		WHERE	user_id >= :userinfo_user_id
		ORDER BY  user_id  ASC 
		;
	if( SQLCODE )
		return;
	
	EXEC SQL
		OPEN	userinfo_mycursor3
		;
	if( SQLCODE )
		return;
	
	return;
}

void DSCSQLACTION_FETCH_CURSOR_mycursor3( userinfo *pst )
{
	EXEC SQL
		FETCH	userinfo_mycursor3
		INTO	DBVLLIST_userinfo
		;
	if( SQLCODE )
		return;
	
	DSCVTOS_userinfo( pst );
	
	return;
}

void DSCSQLACTION_CLOSE_CURSOR_mycursor3()
{
	EXEC SQL
		CLOSE	userinfo_mycursor3
		;
	return;
}

EXEC SQL BEGIN DECLARE SECTION ;
	char    DBNAME[ 1024 + 1 ] ;
	char    DBUSER[ 128 + 1 ] ;
	char    DBPASS[ 128 + 1 ] ;
EXEC SQL END DECLARE SECTION ;

void DSCDBCONN( char *host , int port , char *dbname , char *user , char *pass )
{
	strcpy( DBNAME , dbname );
	if( host )
	{
		strcat( DBNAME , "@" );
		strcat( DBNAME , host );
	}
	if( port )
	{
		strcat( DBNAME , ":" );
		sprintf( DBNAME + strlen(DBNAME) , "%d" , port );
	}
	strcpy( DBUSER , user );
	strcpy( DBPASS , pass );
	
	EXEC SQL
		CONNECT TO	:DBNAME
		USER		:DBUSER
		IDENTIFIED BY	:DBPASS ;
	
	return;
}
void DSCDBDISCONN()
{
	EXEC SQL
		DISCONNECT ;
	
	return;
}
void DSCDBBEGINWORK()
{
	EXEC SQL
		BEGIN WORK ;
	
	return;
}
void DSCDBCOMMIT()
{
	EXEC SQL
		COMMIT WORK ;
	
	return;
}
void DSCDBROLLBACK()
{
	EXEC SQL
		ROLLBACK WORK ;
	
	return;
}
