/*
 * Copyright (C) Internet Systems Consortium, Inc. ("ISC")
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * See the COPYRIGHT file distributed with this work for additional
 * information regarding copyright ownership.
 */

#ifndef GENERIC_SIG_24_H
#define GENERIC_SIG_24_H 1


/*!
 *  \brief Per RFC2535 */

typedef struct dns_rdata_sig_t {
	dns_rdatacommon_t	common;
	isc_mem_t *		mctx;
	dns_rdatatype_t		covered;
	dns_secalg_t		algorithm;
	uint8_t		labels;
	uint32_t		originalttl;
	uint32_t		timeexpire;
	uint32_t		timesigned;
	uint16_t		keyid;
	dns_name_t		signer;
	uint16_t		siglen;
	unsigned char *		signature;
} dns_rdata_sig_t;


#endif /* GENERIC_SIG_24_H */