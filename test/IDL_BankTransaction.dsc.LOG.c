/* It had generated by DirectStruct v1.0.4 */
#include "IDL_BankTransaction.dsc.h"

#ifndef FUNCNAME_DSCLOG_BankTransaction
#define FUNCNAME_DSCLOG_BankTransaction	DSCLOG_BankTransaction
#endif

#ifndef PREFIX_DSCLOG_BankTransaction
#define PREFIX_DSCLOG_BankTransaction	printf( 
#endif

#ifndef NEWLINE_DSCLOG_BankTransaction
#define NEWLINE_DSCLOG_BankTransaction	"\n"
#endif

int FUNCNAME_DSCLOG_BankTransaction( BankTransaction *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	PREFIX_DSCLOG_BankTransaction "BankTransaction.version[%d]" NEWLINE_DSCLOG_BankTransaction , pst->version );
		PREFIX_DSCLOG_BankTransaction "BankTransaction.ResponseHeader.transaction_code[%s]" NEWLINE_DSCLOG_BankTransaction , pst->ResponseHeader.transaction_code );
		PREFIX_DSCLOG_BankTransaction "BankTransaction.ResponseHeader.trans_jnlsno[%d]" NEWLINE_DSCLOG_BankTransaction , pst->ResponseHeader.trans_jnlsno );
		PREFIX_DSCLOG_BankTransaction "BankTransaction.ResponseHeader.response_code[%d]" NEWLINE_DSCLOG_BankTransaction , pst->ResponseHeader.response_code );
		PREFIX_DSCLOG_BankTransaction "BankTransaction.ResponseHeader.response_desc[%s]" NEWLINE_DSCLOG_BankTransaction , pst->ResponseHeader.response_desc );
			for( index[2] = 0 ; index[2] < 3 ; index[2]++ )
			{
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.AddonMessages[index[2]].message_text[%s]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.AddonMessages[index[2]].message_text );
			}
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.TransactionDetailTitle.title_text[%s]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.title_text );
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.TransactionDetailTitle.page_no[%hd]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.page_no );
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.TransactionDetailTitle.page_size[%hd]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.page_size );
			for( index[2] = 0 ; index[2] < 10 ; index[2]++ )
			{
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.TransactionDetails[index[2]].trans_date[%s]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.TransactionDetails[index[2]].trans_date );
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.TransactionDetails[index[2]].trans_time[%s]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.TransactionDetails[index[2]].trans_time );
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.TransactionDetails[index[2]].outlet_id[%s]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.TransactionDetails[index[2]].outlet_id );
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.TransactionDetails[index[2]].card_no[%s]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.TransactionDetails[index[2]].card_no );
			PREFIX_DSCLOG_BankTransaction "BankTransaction.QueryTransactionDetails.TransactionDetails[index[2]].trans_amount[%f]" NEWLINE_DSCLOG_BankTransaction , pst->QueryTransactionDetails.TransactionDetails[index[2]].trans_amount );
			}
	return 0;
}
