/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#ifndef	_S1AP_E_RABToBeModifiedItemBearerModInd_H_
#define	_S1AP_E_RABToBeModifiedItemBearerModInd_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_E-RAB-ID.h"
#include "S1AP_TransportLayerAddress.h"
#include "S1AP_GTP-TEID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolExtensionContainer;

/* S1AP_E-RABToBeModifiedItemBearerModInd */
typedef struct S1AP_E_RABToBeModifiedItemBearerModInd {
	S1AP_E_RAB_ID_t	 e_RAB_ID;
	S1AP_TransportLayerAddress_t	 transportLayerAddress;
	S1AP_GTP_TEID_t	 dL_GTP_TEID;
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_E_RABToBeModifiedItemBearerModInd_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABToBeModifiedItemBearerModInd;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_E_RABToBeModifiedItemBearerModInd_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_E_RABToBeModifiedItemBearerModInd_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_E_RABToBeModifiedItemBearerModInd_H_ */
#include <asn_internal.h>
