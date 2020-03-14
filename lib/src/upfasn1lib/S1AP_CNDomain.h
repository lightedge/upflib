/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#ifndef	_S1AP_CNDomain_H_
#define	_S1AP_CNDomain_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_CNDomain {
	S1AP_CNDomain_ps	= 0,
	S1AP_CNDomain_cs	= 1
} e_S1AP_CNDomain;

/* S1AP_CNDomain */
typedef long	 S1AP_CNDomain_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_CNDomain_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_CNDomain;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_CNDomain_specs_1;
asn_struct_free_f S1AP_CNDomain_free;
asn_struct_print_f S1AP_CNDomain_print;
asn_constr_check_f S1AP_CNDomain_constraint;
ber_type_decoder_f S1AP_CNDomain_decode_ber;
der_type_encoder_f S1AP_CNDomain_encode_der;
xer_type_decoder_f S1AP_CNDomain_decode_xer;
xer_type_encoder_f S1AP_CNDomain_encode_xer;
oer_type_decoder_f S1AP_CNDomain_decode_oer;
oer_type_encoder_f S1AP_CNDomain_encode_oer;
per_type_decoder_f S1AP_CNDomain_decode_uper;
per_type_encoder_f S1AP_CNDomain_encode_uper;
per_type_decoder_f S1AP_CNDomain_decode_aper;
per_type_encoder_f S1AP_CNDomain_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_CNDomain_H_ */
#include <asn_internal.h>
