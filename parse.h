typedef union {
	char *string;
	int number;
	struct link_drop drop;
	struct addr addr;
	struct action action;
	struct template *tmpl;
	struct personality *pers;
	struct addrinfo *ai;
	enum fragpolicy fragp;
	float floatp;
	struct condition condition;
	struct tm time;
	struct condition_time timecondition;
} YYSTYPE;
#define	CREATE	257
#define	ADD	258
#define	PORT	259
#define	BIND	260
#define	CLONE	261
#define	DOT	262
#define	BLOCK	263
#define	OPEN	264
#define	RESET	265
#define	DEFAULT	266
#define	SET	267
#define	ACTION	268
#define	PERSONALITY	269
#define	RANDOM	270
#define	ANNOTATE	271
#define	NO	272
#define	FINSCAN	273
#define	FRAGMENT	274
#define	DROP	275
#define	OLD	276
#define	NEW	277
#define	COLON	278
#define	PROXY	279
#define	UPTIME	280
#define	DROPRATE	281
#define	IN	282
#define	SYN	283
#define	UID	284
#define	GID	285
#define	ROUTE	286
#define	ENTRY	287
#define	LINK	288
#define	NET	289
#define	UNREACH	290
#define	SLASH	291
#define	LATENCY	292
#define	MS	293
#define	LOSS	294
#define	BANDWIDTH	295
#define	SUBSYSTEM	296
#define	OPTION	297
#define	TO	298
#define	SHARED	299
#define	NETWORK	300
#define	SPOOF	301
#define	FROM	302
#define	TEMPLATE	303
#define	TUNNEL	304
#define	TARPIT	305
#define	DYNAMIC	306
#define	USE	307
#define	IF	308
#define	OTHERWISE	309
#define	EQUAL	310
#define	SOURCE	311
#define	OS	312
#define	IP	313
#define	BETWEEN	314
#define	DELETE	315
#define	LIST	316
#define	ETHERNET	317
#define	DHCP	318
#define	ON	319
#define	MAXFDS	320
#define	RESTART	321
#define	DEBUG	322
#define	DASH	323
#define	TIME	324
#define	INTERNAL	325
#define	STRING	326
#define	CMDSTRING	327
#define	IPSTRING	328
#define	NUMBER	329
#define	PROTO	330
#define	FLOAT	331


extern YYSTYPE yylval;
