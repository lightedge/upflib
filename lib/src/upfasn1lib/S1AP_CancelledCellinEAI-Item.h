/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#ifndef	_S1AP_CancelledCellinEAI_Item_H_
#define	_S1AP_CancelledCellinEAI_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_EUTRAN-CGI.h"
#include "S1AP_NumberOfBroadcasts.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_CancelledCellinEAI-Item */
typedef struct S1AP_CancelledCellinEAI_Item {
	S1AP_EUTRAN_CGI_t	 eCGI;
	S1AP_NumberOfBroadcasts_t	 numberOfBroadcasts;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_CancelledCellinEAI_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CancelledCellinEAI_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_CancelledCellinEAI_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_CancelledCellinEAI_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CancelledCellinEAI_Item_H_ */
#include <asn_internal.h>
