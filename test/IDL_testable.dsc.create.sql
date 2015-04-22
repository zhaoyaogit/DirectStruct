-- It had generated by DirectStruct v1.5.0

CREATE TABLE testable
(
	n2	SMALLINT ,
	n4	INTEGER ,
	f4	REAL ,
	f8	DOUBLE PRECISION ,
	str32	CHARACTER VARYING(32) ,
	str1024	CHARACTER VARYING(1024) ,
	b1	BOOLEAN
) ;

CREATE INDEX testable_idx1 ON testable ( n2 ) ;

CREATE UNIQUE INDEX testable_idx2 ON testable ( str32 , str1024 ) ;
