-- It had generated by DirectStruct v1.1.0

CREATE TABLE userinfo
(
	user_id	INTEGER ,
	user_name	CHARACTER VARYING(16) ,
	email	CHARACTER VARYING(128)
) ;

CREATE UNIQUE INDEX userinfo_idx1 ON userinfo ( user_id ) ;