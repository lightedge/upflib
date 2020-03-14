/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "3GPP_TS_36.413_v14.4.0.asn"
 * 	`asn1c -S /home/daigodevel/GIT3/brchiu-asn1c/skeletons -pdu=all -fcompound-names -findirect-choice -fno-include-deps -gen-PER`
 */

#ifndef	_S1AP_Cdma2000OneXMEID_H_
#define	_S1AP_Cdma2000OneXMEID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_Cdma2000OneXMEID */
typedef OCTET_STRING_t	 S1AP_Cdma2000OneXMEID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_Cdma2000OneXMEID;
asn_struct_free_f S1AP_Cdma2000OneXMEID_free;
asn_struct_print_f S1AP_Cdma2000OneXMEID_print;
asn_constr_check_f S1AP_Cdma2000OneXMEID_constraint;
ber_type_decoder_f S1AP_Cdma2000OneXMEID_decode_ber;
der_type_encoder_f S1AP_Cdma2000OneXMEID_encode_der;
xer_type_decoder_f S1AP_Cdma2000OneXMEID_decode_xer;
xer_type_encoder_f S1AP_Cdma2000OneXMEID_encode_xer;
oer_type_decoder_f S1AP_Cdma2000OneXMEID_decode_oer;
oer_type_encoder_f S1AP_Cdma2000OneXMEID_encode_oer;
per_type_decoder_f S1AP_Cdma2000OneXMEID_decode_uper;
per_type_encoder_f S1AP_Cdma2000OneXMEID_encode_uper;
per_type_decoder_f S1AP_Cdma2000OneXMEID_decode_aper;
per_type_encoder_f S1AP_Cdma2000OneXMEID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_Cdma2000OneXMEID_H_ */
#include <asn_internal.h>
