/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#ifndef	_S1AP_Presence_H_
#define	_S1AP_Presence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_Presence {
	S1AP_Presence_optional	= 0,
	S1AP_Presence_conditional	= 1,
	S1AP_Presence_mandatory	= 2
} e_S1AP_Presence;

/* S1AP_Presence */
typedef long	 S1AP_Presence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_Presence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_Presence;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_Presence_specs_1;
asn_struct_free_f S1AP_Presence_free;
asn_struct_print_f S1AP_Presence_print;
asn_constr_check_f S1AP_Presence_constraint;
ber_type_decoder_f S1AP_Presence_decode_ber;
der_type_encoder_f S1AP_Presence_encode_der;
xer_type_decoder_f S1AP_Presence_decode_xer;
xer_type_encoder_f S1AP_Presence_encode_xer;
oer_type_decoder_f S1AP_Presence_decode_oer;
oer_type_encoder_f S1AP_Presence_encode_oer;
per_type_decoder_f S1AP_Presence_decode_uper;
per_type_encoder_f S1AP_Presence_encode_uper;
per_type_decoder_f S1AP_Presence_decode_aper;
per_type_encoder_f S1AP_Presence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_Presence_H_ */
#include <asn_internal.h>
