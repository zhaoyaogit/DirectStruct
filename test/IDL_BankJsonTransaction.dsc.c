/* It had generated by DirectStruct v1.1.0 */
#include "IDL_BankJsonTransaction.dsc.h"

int DSCINIT_BankJsonTransaction( BankJsonTransaction *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(BankJsonTransaction) );
	pst->version = 1 ;
		pst->ResponseHeader.response_code = 0 ;
		strcpy( pst->ResponseHeader.response_desc , "OK" );
				for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
				{
				pst->QueryTransactionDetails.AddonMessages._AddonMessage_size = 3 ;
				}
				for( index[3] = 0 ; index[3] < 10 ; index[3]++ )
				{
				pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_size = 10 ;
				}
				for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
				{
				pst->QueryTransactionDetails.TransactionDetails._TransactionTailDetail_size = 3 ;
				}
	return 0;
}

#include "fasterjson.h"

int DSCSERIALIZE_JSON_BankJsonTransaction( BankJsonTransaction *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) - 1 ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	BankJsonTransaction : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		version : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->version); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		ResponseHeader : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			transaction_code : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ResponseHeader.transaction_code); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			trans_jnlsno : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->ResponseHeader.trans_jnlsno); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			response_code : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->ResponseHeader.response_code); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			response_desc : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ResponseHeader.response_desc); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		} ,\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		QueryTransactionDetails : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			AddonMessages : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				AddonMessage : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				[\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
						for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
						{
	len=SNPRINTF(buf,remain_len,"				{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"					message_text : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
						if(index[3]<3-1)
						{ len=SNPRINTF(buf,remain_len,"				} ,\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len; }
						else
						{ len=SNPRINTF(buf,remain_len,"				}\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len; }
						}
	len=SNPRINTF(buf,remain_len,"				]\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			} ,\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			TransactionDetailTitle : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				title_text : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetailTitle.title_text); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				page_no : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%hd",pst->QueryTransactionDetails.TransactionDetailTitle.page_no); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				page_size : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%hd",pst->QueryTransactionDetails.TransactionDetailTitle.page_size); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			} ,\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			TransactionDetails : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				TransactionDetail : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				[\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
						for( index[3] = 0 ; index[3] < 10 ; index[3]++ )
						{
	len=SNPRINTF(buf,remain_len,"				{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"					trans_date : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"					trans_time : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"					outlet_id : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"					card_no : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"					trans_amount : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%f",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
						if(index[3]<10-1)
						{ len=SNPRINTF(buf,remain_len,"				} ,\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len; }
						else
						{ len=SNPRINTF(buf,remain_len,"				}\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len; }
						}
	len=SNPRINTF(buf,remain_len,"				] ,\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				TransactionTailDetail : \n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				[\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
						for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
						{
	len=SNPRINTF(buf,remain_len,"				{\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"					message_text : "); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionTailDetail[index[3]].message_text); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\n"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
						if(index[3]<3-1)
						{ len=SNPRINTF(buf,remain_len,"				} ,\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len; }
						else
						{ len=SNPRINTF(buf,remain_len,"				}\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len; }
						}
	len=SNPRINTF(buf,remain_len,"				]\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
					len=SNPRINTF(buf,remain_len,"			}\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
				len=SNPRINTF(buf,remain_len,"		}\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
			len=SNPRINTF(buf,remain_len,"	}\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"}\n"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len)-1 - remain_len ;
	
	return 0;
}

funcCallbackOnJsonNode CallbackOnJsonNode_BankJsonTransaction ;
int CallbackOnJsonNode_BankJsonTransaction( int type , char *jpath , int jpath_len , int jpath_size , char *nodename , int nodename_len , char *content , int content_len , void *p )
{
	BankJsonTransaction	*pst = (BankJsonTransaction*)p ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	
	if( type & FASTERJSON_NODE_BRANCH )
	{
		if( type & FASTERJSON_NODE_ENTER )
		{
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/AddonMessages/AddonMessage" , jpath_len ) == 0 )
				{if( pst->QueryTransactionDetails.AddonMessages._AddonMessage_count > 3 ) return -8;}
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail" , jpath_len ) == 0 )
				{if( pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count > 10 ) return -8;}
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionTailDetail" , jpath_len ) == 0 )
				{if( pst->QueryTransactionDetails.TransactionDetails._TransactionTailDetail_count > 3 ) return -8;}
		}
		else if( type & FASTERJSON_NODE_LEAVE )
		{
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/AddonMessages/AddonMessage" , jpath_len ) == 0 )
				{pst->QueryTransactionDetails.AddonMessages._AddonMessage_count++;}
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail" , jpath_len ) == 0 )
				{pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count++;}
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionTailDetail" , jpath_len ) == 0 )
				{pst->QueryTransactionDetails.TransactionDetails._TransactionTailDetail_count++;}
		}
	}
	else if( type & FASTERJSON_NODE_LEAF )
	{
		/* version */
		if( strncmp( jpath , "/BankJsonTransaction/version" , jpath_len ) == 0 )
		{NATOC(content,content_len,pst->version);}
			/* transaction_code */
			if( strncmp( jpath , "/BankJsonTransaction/ResponseHeader/transaction_code" , jpath_len ) == 0 )
			{JSONUNESCAPE_FOLD(content,content_len,pst->ResponseHeader.transaction_code);
			{if( content_len > sizeof(pst->ResponseHeader.transaction_code)-1 ) return -7;}}
			/* trans_jnlsno */
			if( strncmp( jpath , "/BankJsonTransaction/ResponseHeader/trans_jnlsno" , jpath_len ) == 0 )
			{NATOI(content,content_len,pst->ResponseHeader.trans_jnlsno);}
			/* response_code */
			if( strncmp( jpath , "/BankJsonTransaction/ResponseHeader/response_code" , jpath_len ) == 0 )
			{NATOI(content,content_len,pst->ResponseHeader.response_code);}
			/* response_desc */
			if( strncmp( jpath , "/BankJsonTransaction/ResponseHeader/response_desc" , jpath_len ) == 0 )
			{JSONUNESCAPE_FOLD(content,content_len,pst->ResponseHeader.response_desc);
			{if( content_len > sizeof(pst->ResponseHeader.response_desc)-1 ) return -7;}}
					/* message_text */
					if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/AddonMessages/AddonMessage/message_text" , jpath_len ) == 0 )
					{JSONUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.AddonMessages.AddonMessage[pst->QueryTransactionDetails.AddonMessages._AddonMessage_count].message_text);
					{if( content_len > sizeof(pst->QueryTransactionDetails.AddonMessages.AddonMessage[pst->QueryTransactionDetails.AddonMessages._AddonMessage_count].message_text)-1 ) return -7;}}
				/* title_text */
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetailTitle/title_text" , jpath_len ) == 0 )
				{JSONUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetailTitle.title_text);
				{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetailTitle.title_text)-1 ) return -7;}}
				/* page_no */
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetailTitle/page_no" , jpath_len ) == 0 )
				{NATOS(content,content_len,pst->QueryTransactionDetails.TransactionDetailTitle.page_no);}
				/* page_size */
				if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetailTitle/page_size" , jpath_len ) == 0 )
				{NATOS(content,content_len,pst->QueryTransactionDetails.TransactionDetailTitle.page_size);}
					/* trans_date */
					if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/trans_date" , jpath_len ) == 0 )
					{JSONUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_date);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_date)-1 ) return -7;}}
					/* trans_time */
					if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/trans_time" , jpath_len ) == 0 )
					{JSONUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_time);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_time)-1 ) return -7;}}
					/* outlet_id */
					if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/outlet_id" , jpath_len ) == 0 )
					{JSONUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].outlet_id);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].outlet_id)-1 ) return -7;}}
					/* card_no */
					if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/card_no" , jpath_len ) == 0 )
					{JSONUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].card_no);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].card_no)-1 ) return -7;}}
					/* trans_amount */
					if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/trans_amount" , jpath_len ) == 0 )
					{NATOF(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_amount);}
					/* message_text */
					if( strncmp( jpath , "/BankJsonTransaction/QueryTransactionDetails/TransactionDetails/TransactionTailDetail/message_text" , jpath_len ) == 0 )
					{JSONUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionTailDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionTailDetail_count].message_text);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionTailDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionTailDetail_count].message_text)-1 ) return -7;}}
	}
	
	return 0;
}

int DSCDESERIALIZE_JSON_BankJsonTransaction( char *encoding , char *buf , int *p_len , BankJsonTransaction *pst )
{
	char	jpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( jpath , 0x00 , sizeof(jpath) );
	nret = TravelJsonBuffer( buf , jpath , sizeof(jpath) , & CallbackOnJsonNode_BankJsonTransaction , (void*)pst ) ;
	if( nret && nret != FASTERJSON_INFO_END_OF_BUFFER )
		return nret;
	
	return 0;
}