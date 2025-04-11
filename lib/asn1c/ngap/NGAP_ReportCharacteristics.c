/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r17.3.0/38413-h30.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER -no-gen-JER`
 */

#include "NGAP_ReportCharacteristics.h"

int
NGAP_ReportCharacteristics_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_NGAP_ReportCharacteristics_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_NGAP_ReportCharacteristics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NGAP_ReportCharacteristics = {
	"ReportCharacteristics",
	"ReportCharacteristics",
	&asn_OP_BIT_STRING,
	asn_DEF_NGAP_ReportCharacteristics_tags_1,
	sizeof(asn_DEF_NGAP_ReportCharacteristics_tags_1)
		/sizeof(asn_DEF_NGAP_ReportCharacteristics_tags_1[0]), /* 1 */
	asn_DEF_NGAP_ReportCharacteristics_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_ReportCharacteristics_tags_1)
		/sizeof(asn_DEF_NGAP_ReportCharacteristics_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_NGAP_ReportCharacteristics_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NGAP_ReportCharacteristics_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};

