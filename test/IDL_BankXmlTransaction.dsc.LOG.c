/* It had generated by DirectStruct v1.10.0 */
#include "IDL_BankXmlTransaction.dsc.h"

#ifndef FUNCNAME_DSCLOG_BankXmlTransaction
#define FUNCNAME_DSCLOG_BankXmlTransaction	DSCLOG_BankXmlTransaction
#endif

#ifndef PREFIX_DSCLOG_BankXmlTransaction
#define PREFIX_DSCLOG_BankXmlTransaction	printf( 
#endif

#ifndef NEWLINE_DSCLOG_BankXmlTransaction
#define NEWLINE_DSCLOG_BankXmlTransaction	"\n"
#endif

int FUNCNAME_DSCLOG_BankXmlTransaction( BankXmlTransaction *pst )
{
	int	index[10] = { 0 } ; index[0]++; index[0] = 0 ;
	PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.version[%d]" NEWLINE_DSCLOG_BankXmlTransaction , pst->version );
		PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.ResponseHeader.transaction_code[%s]" NEWLINE_DSCLOG_BankXmlTransaction , pst->ResponseHeader.transaction_code );
		PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.ResponseHeader.trans_jnlsno[%d]" NEWLINE_DSCLOG_BankXmlTransaction , pst->ResponseHeader.trans_jnlsno );
		PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.ResponseHeader.response_code[%d]" NEWLINE_DSCLOG_BankXmlTransaction , pst->ResponseHeader.response_code );
		PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.ResponseHeader.response_desc[%s]" NEWLINE_DSCLOG_BankXmlTransaction , pst->ResponseHeader.response_desc );
				PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.AddonMessages._AddonMessage_count[%d]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.AddonMessages._AddonMessage_count );
				for( index[3] = 0 ; index[3] < pst->QueryTransactionDetails.AddonMessages._AddonMessage_count ; index[3]++ )
				{
				PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text[%s]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text );
				}
			PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetailTitle.title_text[%s]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.title_text );
			PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetailTitle.page_no[%hd]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.page_no );
			PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetailTitle.page_size[%hd]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetailTitle.page_size );
				PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetails._TransactionDetail_count[%d]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count );
				for( index[3] = 0 ; index[3] < pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count ; index[3]++ )
				{
				PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date[%s]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date );
				PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time[%s]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time );
				PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id[%s]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id );
				PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no[%s]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no );
				PREFIX_DSCLOG_BankXmlTransaction "BankXmlTransaction.QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount[%f]" NEWLINE_DSCLOG_BankXmlTransaction , pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount );
				}
	return 0;
}
