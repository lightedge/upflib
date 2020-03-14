/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#include "S1AP_MDTMode.h"

#include "S1AP_ImmediateMDT.h"
#include "S1AP_LoggedMDT.h"
#include "S1AP_MDTMode-Extension.h"
static asn_oer_constraints_t asn_OER_type_S1AP_MDTMode_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_S1AP_MDTMode_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_MDTMode_1[] = {
	{ ATF_POINTER, 0, offsetof(struct S1AP_MDTMode, choice.immediateMDT),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ImmediateMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"immediateMDT"
		},
	{ ATF_POINTER, 0, offsetof(struct S1AP_MDTMode, choice.loggedMDT),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_LoggedMDT,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggedMDT"
		},
	{ ATF_POINTER, 0, offsetof(struct S1AP_MDTMode, choice.mDTMode_Extension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_MDTMode_Extension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mDTMode-Extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_MDTMode_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* immediateMDT */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggedMDT */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mDTMode-Extension */
};
asn_CHOICE_specifics_t asn_SPC_S1AP_MDTMode_specs_1 = {
	sizeof(struct S1AP_MDTMode),
	offsetof(struct S1AP_MDTMode, _asn_ctx),
	offsetof(struct S1AP_MDTMode, present),
	sizeof(((struct S1AP_MDTMode *)0)->present),
	asn_MAP_S1AP_MDTMode_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_MDTMode = {
	"MDTMode",
	"MDTMode",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_S1AP_MDTMode_constr_1, &asn_PER_type_S1AP_MDTMode_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_MDTMode_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_MDTMode_specs_1	/* Additional specs */
};

