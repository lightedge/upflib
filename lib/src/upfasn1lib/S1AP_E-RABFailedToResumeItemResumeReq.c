/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#include "S1AP_E-RABFailedToResumeItemResumeReq.h"

#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_E_RABFailedToResumeItemResumeReq_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABFailedToResumeItemResumeReq, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABFailedToResumeItemResumeReq, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_S1AP_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_E_RABFailedToResumeItemResumeReq, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6602P18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_E_RABFailedToResumeItemResumeReq_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_E_RABFailedToResumeItemResumeReq_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_E_RABFailedToResumeItemResumeReq_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_E_RABFailedToResumeItemResumeReq_specs_1 = {
	sizeof(struct S1AP_E_RABFailedToResumeItemResumeReq),
	offsetof(struct S1AP_E_RABFailedToResumeItemResumeReq, _asn_ctx),
	asn_MAP_S1AP_E_RABFailedToResumeItemResumeReq_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_E_RABFailedToResumeItemResumeReq_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABFailedToResumeItemResumeReq = {
	"E-RABFailedToResumeItemResumeReq",
	"E-RABFailedToResumeItemResumeReq",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_E_RABFailedToResumeItemResumeReq_tags_1,
	sizeof(asn_DEF_S1AP_E_RABFailedToResumeItemResumeReq_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABFailedToResumeItemResumeReq_tags_1[0]), /* 1 */
	asn_DEF_S1AP_E_RABFailedToResumeItemResumeReq_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_E_RABFailedToResumeItemResumeReq_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABFailedToResumeItemResumeReq_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_E_RABFailedToResumeItemResumeReq_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_E_RABFailedToResumeItemResumeReq_specs_1	/* Additional specs */
};

