-- It had generated by DirectStruct v1.5.0

CREATE TABLE userinfo
(
	user_id	INTEGER	DEFAULT 1 NOT NULL ,
	user_name	CHARACTER VARYING(16)	DEFAULT '0000' ,
	email	CHARACTER VARYING(128) NULL
) ;

CREATE UNIQUE INDEX userinfo_idx1 ON userinfo ( user_id ) ;
