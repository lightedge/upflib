/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#include "S1AP_HandoverRestrictionList.h"

#include "S1AP_EPLMNs.h"
#include "S1AP_ForbiddenTAs.h"
#include "S1AP_ForbiddenLAs.h"
#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_HandoverRestrictionList_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_HandoverRestrictionList, servingPLMN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_PLMNidentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"servingPLMN"
		},
	{ ATF_POINTER, 5, offsetof(struct S1AP_HandoverRestrictionList, equivalentPLMNs),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_EPLMNs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"equivalentPLMNs"
		},
	{ ATF_POINTER, 4, offsetof(struct S1AP_HandoverRestrictionList, forbiddenTAs),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ForbiddenTAs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"forbiddenTAs"
		},
	{ ATF_POINTER, 3, offsetof(struct S1AP_HandoverRestrictionList, forbiddenLAs),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ForbiddenLAs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"forbiddenLAs"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_HandoverRestrictionList, forbiddenInterRATs),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ForbiddenInterRATs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"forbiddenInterRATs"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_HandoverRestrictionList, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6602P59,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_HandoverRestrictionList_oms_1[] = { 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_S1AP_HandoverRestrictionList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_HandoverRestrictionList_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* servingPLMN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* equivalentPLMNs */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* forbiddenTAs */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* forbiddenLAs */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* forbiddenInterRATs */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_HandoverRestrictionList_specs_1 = {
	sizeof(struct S1AP_HandoverRestrictionList),
	offsetof(struct S1AP_HandoverRestrictionList, _asn_ctx),
	asn_MAP_S1AP_HandoverRestrictionList_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_S1AP_HandoverRestrictionList_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_HandoverRestrictionList = {
	"HandoverRestrictionList",
	"HandoverRestrictionList",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_HandoverRestrictionList_tags_1,
	sizeof(asn_DEF_S1AP_HandoverRestrictionList_tags_1)
		/sizeof(asn_DEF_S1AP_HandoverRestrictionList_tags_1[0]), /* 1 */
	asn_DEF_S1AP_HandoverRestrictionList_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_HandoverRestrictionList_tags_1)
		/sizeof(asn_DEF_S1AP_HandoverRestrictionList_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_HandoverRestrictionList_1,
	6,	/* Elements count */
	&asn_SPC_S1AP_HandoverRestrictionList_specs_1	/* Additional specs */
};

