
/* Varicodes for THOR
 *
 * The 4 MSBs specify the number of bits the code uses, n.
 * The n LSBs are the code. These are sent MSB first.
*/

/* THOR uses the same varicodes as MFSK for the primary character set */
PROGMEM static const uint16_t _varicode[] = {
	0xB75C, 0xB760, 0xB768, 0xB76C, 0xB770, 0xB774, 0xB778, 0xB77C,
	0x80A8, 0xB780, 0xB7A0, 0xB7A8, 0xB7AC, 0x80AC, 0xB7B0, 0xB7B4,
	0xB7B8, 0xB7BC, 0xB7C0, 0xB7D0, 0xB7D4, 0xB7D8, 0xB7DC, 0xB7E0,
	0xB7E8, 0xB7EC, 0xB7F0, 0xB7F4, 0xB7F8, 0xB7FC, 0xC800, 0xCA00,
	0x3004, 0x91C0, 0x91FC, 0xA2D8, 0xA2A8, 0xA2A0, 0xA200, 0x91BC,
	0x91F4, 0x91F0, 0xA2B4, 0x91E0, 0x80A0, 0x91D8, 0x91D4, 0x91E8,
	0x80E0, 0x80F0, 0x9140, 0x9154, 0x9174, 0x9160, 0x916C, 0x91A0,
	0x9180, 0x91AC, 0x91EC, 0x91F8, 0xA2C0, 0x91DC, 0xA2BC, 0x91D0,
	0xA280, 0x80BC, 0x9100, 0x80D4, 0x80DC, 0x80B8, 0x80F8, 0x9150,
	0x9158, 0x80C0, 0x91B4, 0x917C, 0x80F4, 0x80E8, 0x80FC, 0x80D0,
	0x80EC, 0x91B0, 0x80D8, 0x80B4, 0x80B0, 0x915C, 0x91A8, 0x9168,
	0x9170, 0x9178, 0x91B8, 0xA2E8, 0xA2D0, 0xA2EC, 0xA2D4, 0xA2B0,
	0xA2AC, 0x5014, 0x7060, 0x6038, 0x6034, 0x4008, 0x7050, 0x7058,
	0x6030, 0x5018, 0x8080, 0x7070, 0x602C, 0x7040, 0x501C, 0x5010,
	0x7054, 0x7078, 0x6020, 0x6028, 0x400C, 0x603C, 0x706C, 0x7068,
	0x7074, 0x705C, 0x707C, 0xA2DC, 0xA2B8, 0xA2E0, 0xA2F0, 0xCA80,
	0xCAA0, 0xCAA8, 0xCAAC, 0xCAB0, 0xCAB4, 0xCAB8, 0xCABC, 0xCAC0,
	0xCAD0, 0xCAD4, 0xCAD8, 0xCADC, 0xCAE0, 0xCAE8, 0xCAEC, 0xCAF0,
	0xCAF4, 0xCAF8, 0xCAFC, 0xCB00, 0xCB40, 0xCB50, 0xCB54, 0xCB58,
	0xCB5C, 0xCB60, 0xCB68, 0xCB6C, 0xCB70, 0xCB74, 0xCB78, 0xCB7C,
	0xA2F4, 0xA2F8, 0xA2FC, 0xA300, 0xA340, 0xA350, 0xA354, 0xA358,
	0xA35C, 0xA360, 0xA368, 0xA36C, 0xA370, 0xA374, 0xA378, 0xA37C,
	0xA380, 0xA3A0, 0xA3A8, 0xA3AC, 0xA3B0, 0xA3B4, 0xA3B8, 0xA3BC,
	0xA3C0, 0xA3D0, 0xA3D4, 0xA3D8, 0xA3DC, 0xA3E0, 0xA3E8, 0xA3EC,
	0xA3F0, 0xA3F4, 0xA3F8, 0xA3FC, 0xB400, 0xB500, 0xB540, 0xB550,
	0xB554, 0xB558, 0xB55C, 0xB560, 0xB568, 0xB56C, 0xB570, 0xB574,
	0xB578, 0xB57C, 0xB580, 0xB5A0, 0xB5A8, 0xB5AC, 0xB5B0, 0xB5B4,
	0xB5B8, 0xB5BC, 0xB5C0, 0xB5D0, 0xB5D4, 0xB5D8, 0xB5DC, 0xB5E0,
	0xB5E8, 0xB5EC, 0xB5F0, 0xB5F4, 0xB5F8, 0xB5FC, 0xB600, 0xB680,
	0xB6A0, 0xB6A8, 0xB6AC, 0xB6B0, 0xB6B4, 0xB6B8, 0xB6BC, 0xB6C0,
	0xB6D0, 0xB6D4, 0xB6D8, 0xB6DC, 0xB6E0, 0xB6E8, 0xB6EC, 0xB6F0,
	0xB6F4, 0xB6F8, 0xB6FC, 0xB700, 0xB740, 0xB750, 0xB754, 0xB758,
};

/* Secondary character set */
PROGMEM static const uint16_t _varicode_sec[] = {
	0xCB80, 0xCBA0, 0xCBA8, 0xCBAC, 0xCBB0, 0xCBB4, 0xCBB8, 0xCBBC,
	0xCBC0, 0xCBD0, 0xCBD4, 0xCBD8, 0xCBDC, 0xCBE0, 0xCBE8, 0xCBEC,
	0xCBF0, 0xCBF4, 0xCBF8, 0xCBFC, 0xCC00, 0xCD00, 0xCD40, 0xCD54,
	0xCD58, 0xCD5C, 0xCD60, 0xCD68, 0xCD6C, 0xCD70, 0xCD74, 0xCD78,
	0xCD7C, 0xCD80, 0xCDA0, 0xCDA8, 0xCDAC, 0xCDB0, 0xCDB4, 0xCDB8,
	0xCDBC, 0xCDC0, 0xCDD0, 0xCDD4, 0xCDD8, 0xCDDC, 0xCDE0, 0xCDE8,
	0xCDEC, 0xCDF0, 0xCDF4, 0xCDF8, 0xCDFC, 0xCE00, 0xCE80, 0xCEA0,
	0xCEAC, 0xCEB0, 0xCEB4, 0xCEB8, 0xCEBC, 0xCEC0, 0xCED0, 0xCED4,
	0xCED8, 0xCEDC, 0xCEE0, 0xCEE8, 0xCEEC, 0xCEF0, 0xCEF4, 0xCEF8,
	0xCEFC, 0xCF00, 0xCF40, 0xCF50, 0xCF54, 0xCF58, 0xCF5C, 0xCF60,
	0xCF68, 0xCF6C, 0xCF70, 0xCF74, 0xCF78, 0xCF7C, 0xCF80, 0xCFA0,
	0xCFA8, 0xCFAC, 0xCFB0,
};

