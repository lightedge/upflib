/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#ifndef	_S1AP_WarningAreaList_H_
#define	_S1AP_WarningAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_WarningAreaList_PR {
	S1AP_WarningAreaList_PR_NOTHING,	/* No components present */
	S1AP_WarningAreaList_PR_cellIDList,
	S1AP_WarningAreaList_PR_trackingAreaListforWarning,
	S1AP_WarningAreaList_PR_emergencyAreaIDList
	/* Extensions may appear below */
	
} S1AP_WarningAreaList_PR;

/* Forward declarations */
struct S1AP_ECGIList;
struct S1AP_TAIListforWarning;
struct S1AP_EmergencyAreaIDList;

/* S1AP_WarningAreaList */
typedef struct S1AP_WarningAreaList {
	S1AP_WarningAreaList_PR present;
	union S1AP_WarningAreaList_u {
		struct S1AP_ECGIList	*cellIDList;
		struct S1AP_TAIListforWarning	*trackingAreaListforWarning;
		struct S1AP_EmergencyAreaIDList	*emergencyAreaIDList;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_WarningAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_WarningAreaList;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_WarningAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_WarningAreaList_1[3];
extern asn_per_constraints_t asn_PER_type_S1AP_WarningAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_WarningAreaList_H_ */
#include <asn_internal.h>
