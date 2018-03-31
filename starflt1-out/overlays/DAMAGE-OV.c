// ====== OVERLAY 'DAMAGE-OV' ======
// store offset = 0xeaa0
// overlay size   = 0x0ac0

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== VOCABULARY ==========
// =================================
//            'OVS  codep:0x1d29 parp:0xeabd size:0x0002 C-string:'_i_OVS'
//      UNK_0xeac1  codep:0x224c parp:0xeac1 size:0x0006 C-string:'UNK_0xeac1'
//      UNK_0xeac9  codep:0x224c parp:0xeac9 size:0x000a C-string:'UNK_0xeac9'
//      UNK_0xead5  codep:0x224c parp:0xead5 size:0x000a C-string:'UNK_0xead5'
//      UNK_0xeae1  codep:0x224c parp:0xeae1 size:0x0006 C-string:'UNK_0xeae1'
//      UNK_0xeae9  codep:0x224c parp:0xeae9 size:0x000a C-string:'UNK_0xeae9'
//      UNK_0xeaf5  codep:0x224c parp:0xeaf5 size:0x0006 C-string:'UNK_0xeaf5'
//      UNK_0xeafd  codep:0x2214 parp:0xeafd size:0x0002 C-string:'UNK_0xeafd'
//      UNK_0xeb01  codep:0x73ea parp:0xeb01 size:0x0006 C-string:'UNK_0xeb01'
//      UNK_0xeb09  codep:0x73ea parp:0xeb09 size:0x0006 C-string:'UNK_0xeb09'
//      UNK_0xeb11  codep:0x73ea parp:0xeb11 size:0x0006 C-string:'UNK_0xeb11'
//      UNK_0xeb19  codep:0x73ea parp:0xeb19 size:0x0006 C-string:'UNK_0xeb19'
//      UNK_0xeb21  codep:0x73ea parp:0xeb21 size:0x0006 C-string:'UNK_0xeb21'
//      UNK_0xeb29  codep:0x73ea parp:0xeb29 size:0x0006 C-string:'UNK_0xeb29'
//      UNK_0xeb31  codep:0x744d parp:0xeb31 size:0x0003 C-string:'UNK_0xeb31'
//      UNK_0xeb36  codep:0x744d parp:0xeb36 size:0x0003 C-string:'UNK_0xeb36'
//      UNK_0xeb3b  codep:0x744d parp:0xeb3b size:0x0003 C-string:'UNK_0xeb3b'
//      UNK_0xeb40  codep:0x744d parp:0xeb40 size:0x0003 C-string:'UNK_0xeb40'
//      UNK_0xeb45  codep:0x744d parp:0xeb45 size:0x0003 C-string:'UNK_0xeb45'
//      UNK_0xeb4a  codep:0x744d parp:0xeb4a size:0x0003 C-string:'UNK_0xeb4a'
//      UNK_0xeb4f  codep:0x2214 parp:0xeb4f size:0x0002 C-string:'UNK_0xeb4f'
//      UNK_0xeb53  codep:0x744d parp:0xeb53 size:0x0003 C-string:'UNK_0xeb53'
//      UNK_0xeb58  codep:0x744d parp:0xeb58 size:0x0003 C-string:'UNK_0xeb58'
//      UNK_0xeb5d  codep:0x744d parp:0xeb5d size:0x0003 C-string:'UNK_0xeb5d'
//      UNK_0xeb62  codep:0x744d parp:0xeb62 size:0x0003 C-string:'UNK_0xeb62'
//      UNK_0xeb67  codep:0x744d parp:0xeb67 size:0x0003 C-string:'UNK_0xeb67'
//      UNK_0xeb6c  codep:0x744d parp:0xeb6c size:0x0012 C-string:'UNK_0xeb6c'
//      UNK_0xeb80  codep:0x744d parp:0xeb80 size:0x0003 C-string:'UNK_0xeb80'
//      UNK_0xeb85  codep:0x744d parp:0xeb85 size:0x0003 C-string:'UNK_0xeb85'
//      UNK_0xeb8a  codep:0x744d parp:0xeb8a size:0x0003 C-string:'UNK_0xeb8a'
//      UNK_0xeb8f  codep:0x744d parp:0xeb8f size:0x0003 C-string:'UNK_0xeb8f'
//      UNK_0xeb94  codep:0x744d parp:0xeb94 size:0x0003 C-string:'UNK_0xeb94'
//      UNK_0xeb99  codep:0x744d parp:0xeb99 size:0x0003 C-string:'UNK_0xeb99'
//      UNK_0xeb9e  codep:0x744d parp:0xeb9e size:0x0003 C-string:'UNK_0xeb9e'
//      UNK_0xeba3  codep:0x744d parp:0xeba3 size:0x0003 C-string:'UNK_0xeba3'
//      UNK_0xeba8  codep:0x744d parp:0xeba8 size:0x0003 C-string:'UNK_0xeba8'
//      UNK_0xebad  codep:0x744d parp:0xebad size:0x0003 C-string:'UNK_0xebad'
//      UNK_0xebb2  codep:0x744d parp:0xebb2 size:0x0003 C-string:'UNK_0xebb2'
//      UNK_0xebb7  codep:0x73ea parp:0xebb7 size:0x0006 C-string:'UNK_0xebb7'
//      UNK_0xebbf  codep:0x744d parp:0xebbf size:0x0003 C-string:'UNK_0xebbf'
//            RSRC  codep:0x1d29 parp:0xebcb size:0x0009 C-string:'RSRC'
//      UNK_0xebd6  codep:0x1d29 parp:0xebd6 size:0x0002 C-string:'UNK_0xebd6'
//      UNK_0xebda  codep:0x1d29 parp:0xebda size:0x0002 C-string:'UNK_0xebda'
//      UNK_0xebde  codep:0x1d29 parp:0xebde size:0x0004 C-string:'UNK_0xebde'
//      UNK_0xebe4  codep:0x224c parp:0xebe4 size:0x000c C-string:'UNK_0xebe4'
//      UNK_0xebf2  codep:0x224c parp:0xebf2 size:0x0008 C-string:'UNK_0xebf2'
//      UNK_0xebfc  codep:0x224c parp:0xebfc size:0x000c C-string:'UNK_0xebfc'
//      UNK_0xec0a  codep:0x224c parp:0xec0a size:0x0006 C-string:'UNK_0xec0a'
//      UNK_0xec12  codep:0x224c parp:0xec12 size:0x001c C-string:'UNK_0xec12'
//      UNK_0xec30  codep:0x224c parp:0xec30 size:0x0014 C-string:'UNK_0xec30'
//      UNK_0xec46  codep:0x224c parp:0xec46 size:0x0022 C-string:'UNK_0xec46'
//      UNK_0xec6a  codep:0x224c parp:0xec6a size:0x001e C-string:'UNK_0xec6a'
//      UNK_0xec8a  codep:0x224c parp:0xec8a size:0x0014 C-string:'UNK_0xec8a'
//      UNK_0xeca0  codep:0x224c parp:0xeca0 size:0x001a C-string:'UNK_0xeca0'
//      UNK_0xecbc  codep:0x224c parp:0xecbc size:0x001a C-string:'UNK_0xecbc'
//      UNK_0xecd8  codep:0x224c parp:0xecd8 size:0x0018 C-string:'UNK_0xecd8'
//      UNK_0xecf2  codep:0x224c parp:0xecf2 size:0x0006 C-string:'UNK_0xecf2'
//         LDAMAGE  codep:0x1d29 parp:0xed04 size:0x000c C-string:'LDAMAGE'
//      UNK_0xed12  codep:0x224c parp:0xed12 size:0x0022 C-string:'UNK_0xed12'
//      UNK_0xed36  codep:0x224c parp:0xed36 size:0x0016 C-string:'UNK_0xed36'
//      UNK_0xed4e  codep:0x224c parp:0xed4e size:0x000a C-string:'UNK_0xed4e'
//      UNK_0xed5a  codep:0x1d29 parp:0xed5a size:0x0002 C-string:'UNK_0xed5a'
//      UNK_0xed5e  codep:0x224c parp:0xed5e size:0x000a C-string:'UNK_0xed5e'
//      UNK_0xed6a  codep:0x224c parp:0xed6a size:0x001c C-string:'UNK_0xed6a'
//         WOUNDED  codep:0x1d29 parp:0xed92 size:0x0006 C-string:'WOUNDED'
//      UNK_0xed9a  codep:0x1d29 parp:0xed9a size:0x0002 C-string:'UNK_0xed9a'
//      UNK_0xed9e  codep:0x224c parp:0xed9e size:0x0040 C-string:'UNK_0xed9e'
//      UNK_0xede0  codep:0x224c parp:0xede0 size:0x0010 C-string:'UNK_0xede0'
//      UNK_0xedf2  codep:0x224c parp:0xedf2 size:0x0010 C-string:'UNK_0xedf2'
//      UNK_0xee04  codep:0x224c parp:0xee04 size:0x0021 C-string:'UNK_0xee04'
//      UNK_0xee27  codep:0x224c parp:0xee27 size:0x001d C-string:'UNK_0xee27'
//      UNK_0xee46  codep:0x224c parp:0xee46 size:0x001d C-string:'UNK_0xee46'
//      UNK_0xee65  codep:0x224c parp:0xee65 size:0x0027 C-string:'UNK_0xee65'
//      UNK_0xee8e  codep:0x224c parp:0xee8e size:0x0010 C-string:'UNK_0xee8e'
//         ENGINE-  codep:0xee6d parp:0xeeaa size:0x0004 C-string:'ENGINE_dash_'
//         SENSOR-  codep:0xee6d parp:0xeeba size:0x0004 C-string:'SENSOR_dash_'
//         COMM-CH  codep:0xee6d parp:0xeeca size:0x0004 C-string:'COMM_dash_CH'
//         MISS-CH  codep:0xee6d parp:0xeeda size:0x0004 C-string:'MISS_dash_CH'
//         LASER-C  codep:0xee6d parp:0xeeea size:0x0004 C-string:'LASER_dash_C'
//         SHIELD-  codep:0xee6d parp:0xeefa size:0x0004 C-string:'SHIELD_dash_'
//      UNK_0xef00  codep:0x224c parp:0xef00 size:0x000a C-string:'UNK_0xef00'
//         #>?FIEL  codep:0x4a4f parp:0xef16 size:0x0024 C-string:'_n__gt__ask_FIEL'
//      UNK_0xef3c  codep:0x224c parp:0xef3c size:0x0038 C-string:'UNK_0xef3c'
//      UNK_0xef76  codep:0x224c parp:0xef76 size:0x0016 C-string:'UNK_0xef76'
//      UNK_0xef8e  codep:0x224c parp:0xef8e size:0x009e C-string:'UNK_0xef8e'
//      UNK_0xf02e  codep:0x224c parp:0xf02e size:0x0051 C-string:'UNK_0xf02e'
//      UNK_0xf081  codep:0x1d29 parp:0xf081 size:0x0007 C-string:'UNK_0xf081'
//      UNK_0xf08a  codep:0x224c parp:0xf08a size:0x0054 C-string:'UNK_0xf08a'
//      UNK_0xf0e0  codep:0x224c parp:0xf0e0 size:0x0054 C-string:'UNK_0xf0e0'
//      UNK_0xf136  codep:0x224c parp:0xf136 size:0x002a C-string:'UNK_0xf136'
//      UNK_0xf162  codep:0x224c parp:0xf162 size:0x0036 C-string:'UNK_0xf162'
//      UNK_0xf19a  codep:0x224c parp:0xf19a size:0x0050 C-string:'UNK_0xf19a'
//      UNK_0xf1ec  codep:0x224c parp:0xf1ec size:0x0032 C-string:'UNK_0xf1ec'
//         MDAMAGE  codep:0x1d29 parp:0xf22a size:0x000e C-string:'MDAMAGE'
//      UNK_0xf23a  codep:0x224c parp:0xf23a size:0x000c C-string:'UNK_0xf23a'
//      UNK_0xf248  codep:0x224c parp:0xf248 size:0x0020 C-string:'UNK_0xf248'
//      UNK_0xf26a  codep:0x224c parp:0xf26a size:0x0036 C-string:'UNK_0xf26a'
//      UNK_0xf2a2  codep:0x224c parp:0xf2a2 size:0x0008 C-string:'UNK_0xf2a2'
//      UNK_0xf2ac  codep:0x224c parp:0xf2ac size:0x003a C-string:'UNK_0xf2ac'
//      UNK_0xf2e8  codep:0x224c parp:0xf2e8 size:0x0008 C-string:'UNK_0xf2e8'
//      UNK_0xf2f2  codep:0x224c parp:0xf2f2 size:0x0008 C-string:'UNK_0xf2f2'
//      UNK_0xf2fc  codep:0x224c parp:0xf2fc size:0x0008 C-string:'UNK_0xf2fc'
//      UNK_0xf306  codep:0x224c parp:0xf306 size:0x0016 C-string:'UNK_0xf306'
//      UNK_0xf31e  codep:0x224c parp:0xf31e size:0x0008 C-string:'UNK_0xf31e'
//         #>DAMAG  codep:0x4a4f parp:0xf332 size:0x0024 C-string:'_n__gt_DAMAG'
//      UNK_0xf358  codep:0x224c parp:0xf358 size:0x001e C-string:'UNK_0xf358'
//      UNK_0xf378  codep:0x224c parp:0xf378 size:0x002a C-string:'UNK_0xf378'
//      UNK_0xf3a4  codep:0x224c parp:0xf3a4 size:0x0044 C-string:'UNK_0xf3a4'
//      UNK_0xf3ea  codep:0x224c parp:0xf3ea size:0x000c C-string:'UNK_0xf3ea'
//      UNK_0xf3f8  codep:0x224c parp:0xf3f8 size:0x000a C-string:'UNK_0xf3f8'
//      UNK_0xf404  codep:0x224c parp:0xf404 size:0x0036 C-string:'UNK_0xf404'
//      UNK_0xf43c  codep:0x224c parp:0xf43c size:0x0041 C-string:'UNK_0xf43c'
//      UNK_0xf47f  codep:0x224c parp:0xf47f size:0x0064 C-string:'UNK_0xf47f'
//      UNK_0xf4e5  codep:0x224c parp:0xf4e5 size:0x0010 C-string:'UNK_0xf4e5'
//      UNK_0xf4f7  codep:0x224c parp:0xf4f7 size:0x000e C-string:'UNK_0xf4f7'
//      UNK_0xf507  codep:0x224c parp:0xf507 size:0x000e C-string:'UNK_0xf507'
//         DO-DAMA  codep:0x224c parp:0xf521 size:0x0000 C-string:'DO_dash_DAMA'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IsA_dash_SHIE; // ?A-SHIE
extern const unsigned short int cc_MPS; // MPS
extern const unsigned short int pp_IsSOUND; // ?SOUND
extern const unsigned short int pp_A_dash_STRENGTH; // A-STRENGTH
extern const unsigned short int pp_IsAUTO; // ?AUTO
extern const unsigned short int pp__n_VESS; // #VESS
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IsHEAL; // ?HEAL
extern const unsigned short int pp_IsROD; // ?ROD
extern const unsigned short int pp_IsNEB; // ?NEB
extern const unsigned short int pp__n_AUX; // #AUX
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_XWLD_c_XPIX; // XWLD:XPIX
extern const unsigned short int pp__ro_ENCOUNTER; // (ENCOUNTER
extern const unsigned short int pp_ROSTER; // ROSTER
extern Color RED; // RED
extern Color LT_dash_BLUE; // LT-BLUE
extern Color YELLOW; // YELLOW
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void COUNT(); // COUNT
void _star__slash_(); // */
void MAX(); // MAX
void MIN(); // MIN
void _co_(); // ,
void _dash_TRAILING(); // -TRAILING
void Draw(); // .
void WITHIN(); // WITHIN
void KEY_2(); // KEY_2
void _3_star_(); // 3*
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex_(); // C!
void Store_3(); // !_3
void _plus__ex__2(); // +!_2
void StoreD(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void CMOVE(); // CMOVE
void FILL_1(); // FILL_1
void StoreINST_dash_SPECIES(); // !INST-SPECIES
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void SET_dash_CURRENT(); // SET-CURRENT
void ICLOSE(); // ICLOSE
void _gt_C_plus_S(); // >C+S
void Get_gt_C_plus_S(); // @>C+S
void IFLD_at_(); // IFLD@
void IFLD_ex_(); // IFLD!
void StoreCOLOR(); // !COLOR
void VCLIPSET(); // VCLIPSET
void DCLIPSET(); // DCLIPSET
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void BYE(); // BYE
void DrawCIRCLE(); // .CIRCLE
void GetIX(); // @IX
void GetIY(); // @IY
void GetIL(); // @IL
void GetIH(); // @IH
void StoreID(); // !ID
void POINT_gt_ICON(); // POINT>ICON
void IsICONS_dash_AT(); // ?ICONS-AT
void CTERASE(); // CTERASE
void BEEPON(); // BEEPON
void CTINIT(); // CTINIT
void DrawTTY(); // .TTY
void _i_KEY(); // 'KEY
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _st_(); // <
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void _1_dot_5_at_(); // 1.5@
void _st_C_ex__gt_(); // <C!>
void _st__ex__gt_(); // <!>
void _st__plus__ex__gt_(); // <+!>
void V_gt_DISPLAY(); // V>DISPLAY
void WLD_gt_SCR(); // WLD>SCR
void SCR_gt_BLT(); // SCR>BLT
void ENGINE_dash_(); // ENGINE-
void SENSOR_dash_(); // SENSOR-
void COMM_dash_CH(); // COMM-CH
void MISS_dash_CH(); // MISS-CH
void LASER_dash_C(); // LASER-C
void SHIELD_dash_(); // SHIELD-


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp__i_OVS = 0xeabd; // 'OVS size: 2
// {0x4e, 0xcb}

const unsigned short int pp_RSRC = 0xebcb; // RSRC size: 9
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x41, 0x53}

const unsigned short int pp_UNK_0xebd6 = 0xebd6; // UNK_0xebd6 size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xebda = 0xebda; // UNK_0xebda size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xebde = 0xebde; // UNK_0xebde size: 4
// {0x56, 0x3a, 0x20, 0x53}

const unsigned short int pp_LDAMAGE = 0xed04; // LDAMAGE size: 12
// {0x00, 0x00, 0x5a, 0x00, 0xd2, 0x00, 0x68, 0x01, 0xfe, 0x01, 0x94, 0x02}

const unsigned short int pp_UNK_0xed5a = 0xed5a; // UNK_0xed5a size: 2
// {0x3a, 0x20}

const unsigned short int pp_WOUNDED = 0xed92; // WOUNDED size: 6
// {0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54}

const unsigned short int pp_UNK_0xed9a = 0xed9a; // UNK_0xed9a size: 2
// {0x00, 0x00}

const unsigned short int pp_UNK_0xf081 = 0xf081; // UNK_0xf081 size: 7
// {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f}

const unsigned short int pp_MDAMAGE = 0xf22a; // MDAMAGE size: 14
// {0x00, 0x00, 0xc8, 0x00, 0x90, 0x01, 0xbc, 0x02, 0xe8, 0x03, 0xdc, 0x05, 0xa0, 0x0f}


const unsigned short int cc_UNK_0xeafd = 0xeafd; // UNK_0xeafd
const unsigned short int cc_UNK_0xeb4f = 0xeb4f; // UNK_0xeb4f


// 0xeab2: db 0xa9 0x00 '  '

// ================================================
// 0xeab4: WORD ''OVS' codep=0x1d29 parp=0xeabd
// ================================================
// 0xeabd: db 0x4e 0xcb 'N '

// ================================================
// 0xeabf: WORD 'UNK_0xeac1' codep=0x224c parp=0xeac1 params=1 returns=1
// ================================================

void UNK_0xeac1() // UNK_0xeac1
{
  Push((Pop()==0?1:0)==0?1:0); //  0= 0=
}


// ================================================
// 0xeac7: WORD 'UNK_0xeac9' codep=0x224c parp=0xeac9 params=0 returns=1
// ================================================

void UNK_0xeac9() // UNK_0xeac9
{
  Push(1);
  Push(0x0064);
  RRND(); // RRND
}


// ================================================
// 0xead3: WORD 'UNK_0xead5' codep=0x224c parp=0xead5 params=0 returns=2
// ================================================

void UNK_0xead5() // UNK_0xead5
{
  Push(Read16(pp_XABS)); // XABS @
  Push(Read16(pp_YABS)); // YABS @
}


// ================================================
// 0xeadf: WORD 'UNK_0xeae1' codep=0x224c parp=0xeae1
// ================================================
// orphan

void UNK_0xeae1() // UNK_0xeae1
{
  GetIX(); // @IX
  GetIY(); // @IY
}


// ================================================
// 0xeae7: WORD 'UNK_0xeae9' codep=0x224c parp=0xeae9 params=0 returns=2
// ================================================

void UNK_0xeae9() // UNK_0xeae9
{
  Push(Read16(0x63ef+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x63ef+INST_dash_Y.offset)); // INST-Y<IFIELD> @
}


// ================================================
// 0xeaf3: WORD 'UNK_0xeaf5' codep=0x224c parp=0xeaf5 params=0 returns=0
// ================================================

void UNK_0xeaf5() // UNK_0xeaf5
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xeafb: WORD 'UNK_0xeafd' codep=0x2214 parp=0xeafd
// ================================================
// orphan
// 0xeafd: dw 0x0019

// ================================================
// 0xeaff: WORD 'UNK_0xeb01' codep=0x73ea parp=0xeb01
// ================================================
LoadDataType UNK_0xeb01 = {VESSELIDX, 0x0c, 0x04, 0x49, 0x6491};

// ================================================
// 0xeb07: WORD 'UNK_0xeb09' codep=0x73ea parp=0xeb09
// ================================================
LoadDataType UNK_0xeb09 = {VESSELIDX, 0x05, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb0f: WORD 'UNK_0xeb11' codep=0x73ea parp=0xeb11
// ================================================
// orphan
LoadDataType UNK_0xeb11 = {VESSELIDX, 0x13, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb17: WORD 'UNK_0xeb19' codep=0x73ea parp=0xeb19
// ================================================
// orphan
LoadDataType UNK_0xeb19 = {VESSELIDX, 0x12, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb1f: WORD 'UNK_0xeb21' codep=0x73ea parp=0xeb21
// ================================================
LoadDataType UNK_0xeb21 = {VESSELIDX, 0x15, 0x07, 0x49, 0x6491};

// ================================================
// 0xeb27: WORD 'UNK_0xeb29' codep=0x73ea parp=0xeb29
// ================================================
LoadDataType UNK_0xeb29 = {VESSELIDX, 0x10, 0x01, 0x49, 0x6491};

// ================================================
// 0xeb2f: WORD 'UNK_0xeb31' codep=0x744d parp=0xeb31
// ================================================
IFieldType UNK_0xeb31 = {VESSELIDX, 0x0c, 0x01};

// ================================================
// 0xeb34: WORD 'UNK_0xeb36' codep=0x744d parp=0xeb36
// ================================================
// orphan
IFieldType UNK_0xeb36 = {VESSELIDX, 0x17, 0x04};

// ================================================
// 0xeb39: WORD 'UNK_0xeb3b' codep=0x744d parp=0xeb3b
// ================================================
IFieldType UNK_0xeb3b = {VESSELIDX, 0x12, 0x02};

// ================================================
// 0xeb3e: WORD 'UNK_0xeb40' codep=0x744d parp=0xeb40
// ================================================
IFieldType UNK_0xeb40 = {VESSELIDX, 0x14, 0x02};

// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x744d parp=0xeb45
// ================================================
IFieldType UNK_0xeb45 = {VESSELIDX, 0x0b, 0x01};

// ================================================
// 0xeb48: WORD 'UNK_0xeb4a' codep=0x744d parp=0xeb4a
// ================================================
IFieldType UNK_0xeb4a = {VESSELIDX, 0x12, 0x07};

// ================================================
// 0xeb4d: WORD 'UNK_0xeb4f' codep=0x2214 parp=0xeb4f
// ================================================
// orphan
// 0xeb4f: dw 0x0014

// ================================================
// 0xeb51: WORD 'UNK_0xeb53' codep=0x744d parp=0xeb53
// ================================================
IFieldType UNK_0xeb53 = {SHIPIDX, 0x11, 0x01};

// ================================================
// 0xeb56: WORD 'UNK_0xeb58' codep=0x744d parp=0xeb58
// ================================================
IFieldType UNK_0xeb58 = {SHIPIDX, 0x12, 0x01};

// ================================================
// 0xeb5b: WORD 'UNK_0xeb5d' codep=0x744d parp=0xeb5d
// ================================================
// orphan
IFieldType UNK_0xeb5d = {SHIPIDX, 0x13, 0x01};

// ================================================
// 0xeb60: WORD 'UNK_0xeb62' codep=0x744d parp=0xeb62
// ================================================
// orphan
IFieldType UNK_0xeb62 = {SHIPIDX, 0x14, 0x01};

// ================================================
// 0xeb65: WORD 'UNK_0xeb67' codep=0x744d parp=0xeb67
// ================================================
// orphan
IFieldType UNK_0xeb67 = {SHIPIDX, 0x15, 0x01};

// ================================================
// 0xeb6a: WORD 'UNK_0xeb6c' codep=0x744d parp=0xeb6c
// ================================================
// orphan
IFieldType UNK_0xeb6c = {SHIPIDX, 0x16, 0x01};
// 0xeb6f: db 0x4d 0x74 0x14 0x17 0x01 0x4d 0x74 0x14 0x18 0x01 0x4d 0x74 0x14 0x19 0x01 'Mt   Mt   Mt   '

// ================================================
// 0xeb7e: WORD 'UNK_0xeb80' codep=0x744d parp=0xeb80
// ================================================
IFieldType UNK_0xeb80 = {SHIPIDX, 0x1a, 0x01};

// ================================================
// 0xeb83: WORD 'UNK_0xeb85' codep=0x744d parp=0xeb85
// ================================================
// orphan
IFieldType UNK_0xeb85 = {SHIPIDX, 0x1b, 0x01};

// ================================================
// 0xeb88: WORD 'UNK_0xeb8a' codep=0x744d parp=0xeb8a
// ================================================
// orphan
IFieldType UNK_0xeb8a = {SHIPIDX, 0x1c, 0x01};

// ================================================
// 0xeb8d: WORD 'UNK_0xeb8f' codep=0x744d parp=0xeb8f
// ================================================
// orphan
IFieldType UNK_0xeb8f = {SHIPIDX, 0x1d, 0x01};

// ================================================
// 0xeb92: WORD 'UNK_0xeb94' codep=0x744d parp=0xeb94
// ================================================
// orphan
IFieldType UNK_0xeb94 = {SHIPIDX, 0x1e, 0x01};

// ================================================
// 0xeb97: WORD 'UNK_0xeb99' codep=0x744d parp=0xeb99
// ================================================
IFieldType UNK_0xeb99 = {SHIPIDX, 0x30, 0x02};

// ================================================
// 0xeb9c: WORD 'UNK_0xeb9e' codep=0x744d parp=0xeb9e
// ================================================
IFieldType UNK_0xeb9e = {SHIPIDX, 0x45, 0x04};

// ================================================
// 0xeba1: WORD 'UNK_0xeba3' codep=0x744d parp=0xeba3
// ================================================
IFieldType UNK_0xeba3 = {SHIPIDX, 0x32, 0x02};

// ================================================
// 0xeba6: WORD 'UNK_0xeba8' codep=0x744d parp=0xeba8
// ================================================
// orphan
IFieldType UNK_0xeba8 = {SHIPIDX, 0x49, 0x01};

// ================================================
// 0xebab: WORD 'UNK_0xebad' codep=0x744d parp=0xebad
// ================================================
IFieldType UNK_0xebad = {ENCOUNTERIDX, 0x14, 0x01};

// ================================================
// 0xebb0: WORD 'UNK_0xebb2' codep=0x744d parp=0xebb2
// ================================================
IFieldType UNK_0xebb2 = {CREWMEMBERIDX, 0x1f, 0x01};

// ================================================
// 0xebb5: WORD 'UNK_0xebb7' codep=0x73ea parp=0xebb7
// ================================================
LoadDataType UNK_0xebb7 = {CREWMEMBERIDX, 0x13, 0x01, 0x14, 0x6489};

// ================================================
// 0xebbd: WORD 'UNK_0xebbf' codep=0x744d parp=0xebbf
// ================================================
IFieldType UNK_0xebbf = {CREWMEMBERIDX, 0x0b, 0x0f};

// ================================================
// 0xebc2: WORD 'RSRC' codep=0x1d29 parp=0xebcb
// ================================================
// 0xebcb: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x41 0x53 ' ALLOT AS'

// ================================================
// 0xebd4: WORD 'UNK_0xebd6' codep=0x1d29 parp=0xebd6
// ================================================
// 0xebd6: db 0x00 0x00 '  '

// ================================================
// 0xebd8: WORD 'UNK_0xebda' codep=0x1d29 parp=0xebda
// ================================================
// 0xebda: db 0x3a 0x20 ': '

// ================================================
// 0xebdc: WORD 'UNK_0xebde' codep=0x1d29 parp=0xebde
// ================================================
// 0xebde: db 0x56 0x3a 0x20 0x53 'V: S'

// ================================================
// 0xebe2: WORD 'UNK_0xebe4' codep=0x224c parp=0xebe4 params=0 returns=1
// ================================================

void UNK_0xebe4() // UNK_0xebe4
{
  Push((Read16(pp_UNK_0xebda)&0xFF) & 0x000f); // UNK_0xebda C@ 0x000f AND
}


// ================================================
// 0xebf0: WORD 'UNK_0xebf2' codep=0x224c parp=0xebf2 params=1 returns=1
// ================================================

void UNK_0xebf2() // UNK_0xebf2
{
  Push((Read16(Pop())&0xFF) & 7); //  C@ 7 AND
}


// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x224c parp=0xebfc params=0 returns=1
// ================================================

void UNK_0xebfc() // UNK_0xebfc
{
  Push((Read16(0x63ef+UNK_0xeb9e.offset)&0xFF) & 8); // UNK_0xeb9e<IFIELD> C@ 8 AND
  UNK_0xeac1(); // UNK_0xeac1
}


// ================================================
// 0xec08: WORD 'UNK_0xec0a' codep=0x224c parp=0xec0a params=0 returns=2
// ================================================

void UNK_0xec0a() // UNK_0xec0a
{
  Push(pp_UNK_0xebde); // UNK_0xebde
  _2_at_(); // 2@
}


// ================================================
// 0xec10: WORD 'UNK_0xec12' codep=0x224c parp=0xec12 params=4 returns=1
// ================================================

void UNK_0xec12() // UNK_0xec12
{
  unsigned short int a;
  ROT(); // ROT
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  a = Pop(); // >R
  _dash_(); // -
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
}


// ================================================
// 0xec2e: WORD 'UNK_0xec30' codep=0x224c parp=0xec30
// ================================================

void UNK_0xec30() // UNK_0xec30
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(a)); // R@
  IFLD_at_(); // IFLD@
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(a); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xec44: WORD 'UNK_0xec46' codep=0x224c parp=0xec46
// ================================================

void UNK_0xec46() // UNK_0xec46
{
  unsigned short int a, b;
  a = Pop(); // >R
  Push(Read16(a)); // R@
  IFLD_at_(); // IFLD@
  Push(Read16(regsp)); // DUP
  Push(Pop() & 0x0080); //  0x0080 AND
  b = Pop(); // >R
  SWAP(); // SWAP
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(Pop() | b); //  R> OR
  Push(a); // R>
  IFLD_ex_(); // IFLD!
}


// ================================================
// 0xec68: WORD 'UNK_0xec6a' codep=0x224c parp=0xec6a params=0 returns=0
// ================================================

void UNK_0xec6a() // UNK_0xec6a
{
  Push(pp__ro_ENCOUNTER); // (ENCOUNTER
  Get_gt_C_plus_S(); // @>C+S
  Push(1);
  Push(0x63ef+UNK_0xebad.offset); // UNK_0xebad<IFIELD>
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())&0xFF); //  C@
  ROT(); // ROT
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  C_ex_(); // C!
  ICLOSE(); // ICLOSE
  Push(-1);
  Push(pp__n_VESS); // #VESS
  _plus__ex__2(); // +!_2
}


// ================================================
// 0xec88: WORD 'UNK_0xec8a' codep=0x224c parp=0xec8a params=0 returns=1
// ================================================

void UNK_0xec8a() // UNK_0xec8a
{
  Push(Read16(0x63ef+UNK_0xeb99.offset)); // UNK_0xeb99<IFIELD> @
  UNK_0xeac1(); // UNK_0xeac1
  UNK_0xebfc(); // UNK_0xebfc
  Push(Pop() & Pop()); // AND
  Push(Pop() & (Read16(pp_IsNEB)==0?1:0)); //  ?NEB @ 0= AND
}


// ================================================
// 0xec9e: WORD 'UNK_0xeca0' codep=0x224c parp=0xeca0 params=0 returns=1
// ================================================

void UNK_0xeca0() // UNK_0xeca0
{
  Push(Read16(pp__n_AUX)==1?1:0); // #AUX @ 1 =
  if (Pop() != 0)
  {
    Push(0xbf05); // probable 'OV/STXT'
    return;
  }
  Push(0xbef3); // probable 'OV/STATUS'
}


// ================================================
// 0xecba: WORD 'UNK_0xecbc' codep=0x224c parp=0xecbc params=0 returns=1
// ================================================

void UNK_0xecbc() // UNK_0xecbc
{
  Push(Read16(pp__n_AUX)==3?1:0); // #AUX @ 3 =
  if (Pop() != 0)
  {
    Push(0xbe4b); // probable 'OVDBA'
    return;
  }
  Push(0xbe2b); // probable 'OV/DA'
}


// ================================================
// 0xecd6: WORD 'UNK_0xecd8' codep=0x224c parp=0xecd8 params=0 returns=1
// ================================================

void UNK_0xecd8() // UNK_0xecd8
{
  Push(Read16(0x63ef+UNK_0xeba3.offset)); // UNK_0xeba3<IFIELD> @
  UNK_0xeac1(); // UNK_0xeac1
  UNK_0xec8a(); // UNK_0xec8a
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    UNK_0xeca0(); // UNK_0xeca0
    return;
  }
  UNK_0xecbc(); // UNK_0xecbc
}


// ================================================
// 0xecf0: WORD 'UNK_0xecf2' codep=0x224c parp=0xecf2 params=0 returns=0
// ================================================

void UNK_0xecf2() // UNK_0xecf2
{
  UNK_0xecd8(); // UNK_0xecd8
  MODULE(); // MODULE
}


// ================================================
// 0xecf8: WORD 'LDAMAGE' codep=0x1d29 parp=0xed04
// ================================================
// 0xed04: db 0x00 0x00 0x5a 0x00 0xd2 0x00 0x68 0x01 0xfe 0x01 0x94 0x02 '  Z   h     '

// ================================================
// 0xed10: WORD 'UNK_0xed12' codep=0x224c parp=0xed12
// ================================================

void UNK_0xed12() // UNK_0xed12
{
  unsigned short int a;
  a = Pop(); // >R
  UNK_0xead5(); // UNK_0xead5
  UNK_0xec12(); // UNK_0xec12
  Push(0x000a);
  SWAP(); // SWAP
  _dash_(); // -
  Push(a); // R>
  IFLD_at_(); // IFLD@
  Push(Read16(Pop() * 2 + pp_LDAMAGE)); //  2* LDAMAGE + @
  Push(0x000a);
  _star__slash_(); // */
}


// ================================================
// 0xed34: WORD 'UNK_0xed36' codep=0x224c parp=0xed36
// ================================================

void UNK_0xed36() // UNK_0xed36
{
  UNK_0xeae9(); // UNK_0xeae9
  Push(0xeb19); // probable 'UNK_0xeb19'
  UNK_0xed12(); // UNK_0xed12
  Push(Read16(pp_IsROD)); // ?ROD @
  if (Pop() == 0) return;
  Push(4);
  _slash_(); // /
}


// ================================================
// 0xed4c: WORD 'UNK_0xed4e' codep=0x224c parp=0xed4e
// ================================================

void UNK_0xed4e() // UNK_0xed4e
{
  _2DUP(); // 2DUP
  Push(0xeb94); // probable 'UNK_0xeb94'
  UNK_0xed12(); // UNK_0xed12
}


// ================================================
// 0xed58: WORD 'UNK_0xed5a' codep=0x1d29 parp=0xed5a
// ================================================
// 0xed5a: db 0x3a 0x20 ': '

// ================================================
// 0xed5c: WORD 'UNK_0xed5e' codep=0x224c parp=0xed5e params=0 returns=1
// ================================================

void UNK_0xed5e() // UNK_0xed5e
{
  UNK_0xeac9(); // UNK_0xeac9
  Push(0x0046);
  _st_(); // <
}


// ================================================
// 0xed68: WORD 'UNK_0xed6a' codep=0x224c parp=0xed6a
// ================================================

void UNK_0xed6a() // UNK_0xed6a
{
  Push(1);
  Push(Read16(pp_UNK_0xed5a) + 1); // UNK_0xed5a @ 1+
  RRND(); // RRND
  LoadData(UNK_0xebb7); // from 'CREWMEMBER'
  Push(Read16(Pop())&0xFF); //  C@
  _slash_(); // /
  Push(0x000a);
  _slash_(); // /
  Push(5);
  MAX(); // MAX
}


// ================================================
// 0xed86: WORD 'WOUNDED' codep=0x1d29 parp=0xed92
// ================================================
// 0xed92: db 0x05 0x41 0x4c 0x4c 0x4f 0x54 ' ALLOT'

// ================================================
// 0xed98: WORD 'UNK_0xed9a' codep=0x1d29 parp=0xed9a
// ================================================
// 0xed9a: db 0x00 0x00 '  '

// ================================================
// 0xed9c: WORD 'UNK_0xed9e' codep=0x224c parp=0xed9e params=1 returns=1
// ================================================

void UNK_0xed9e() // UNK_0xed9e
{
  unsigned short int i, imax;
  Push(pp_WOUNDED); // WOUNDED
  Push(Read16(regsp)); // DUP
  Push(Pop() + 6); //  6 +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(Read16(i)&0xFF); // I C@
    OVER(); // OVER
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Pop(); // DROP
      imax = i; // LEAVE
    } else
    {
      Push((Read16(i)&0xFF)==0x00ff?1:0); // I C@ 0x00ff =
      if (Pop() != 0)
      {
        Push(i); // I
        C_ex_(); // C!
        Push(1);
        Push(pp_UNK_0xed9a); // UNK_0xed9a
        _st__plus__ex__gt_(); // <+!>
        imax = i; // LEAVE
      }
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xedde: WORD 'UNK_0xede0' codep=0x224c parp=0xede0 params=0 returns=0
// ================================================

void UNK_0xede0() // UNK_0xede0
{
  Push(pp_WOUNDED); // WOUNDED
  Push(6);
  Push(0x00ff);
  FILL_1(); // FILL_1
  Push(pp_UNK_0xed9a); // UNK_0xed9a
  OFF(); // OFF
}


// ================================================
// 0xedf0: WORD 'UNK_0xedf2' codep=0x224c parp=0xedf2 params=0 returns=0
// ================================================

void UNK_0xedf2() // UNK_0xedf2
{
  GetColor(YELLOW);
  Push(0x4f0c); // probable 'BLACK'
  Store_3(); // !_3
  CTERASE(); // CTERASE
  Push(0);
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xee02: WORD 'UNK_0xee04' codep=0x224c parp=0xee04
// ================================================

void UNK_0xee04() // UNK_0xee04
{
  SET_STR_AS_PARAM("**  GAME  OVER  **");
  DrawTTY(); // .TTY
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  BYE(); // BYE
}


// ================================================
// 0xee25: WORD 'UNK_0xee27' codep=0x224c parp=0xee27
// ================================================

void UNK_0xee27() // UNK_0xee27
{
  UNK_0xedf2(); // UNK_0xedf2
  SET_STR_AS_PARAM("!!HULL DESTROYED!!");
  DrawTTY(); // .TTY
  UNK_0xee04(); // UNK_0xee04
}


// ================================================
// 0xee44: WORD 'UNK_0xee46' codep=0x224c parp=0xee46
// ================================================

void UNK_0xee46() // UNK_0xee46
{
  UNK_0xedf2(); // UNK_0xedf2
  SET_STR_AS_PARAM("!!CREW  DECEASED!!");
  DrawTTY(); // .TTY
  UNK_0xee04(); // UNK_0xee04
}


// ================================================
// 0xee63: WORD 'UNK_0xee65' codep=0x224c parp=0xee65
// ================================================

void UNK_0xee65() // UNK_0xee65
{
  unsigned short int a;
  Exec("CREATE"); // call of word 0x1cbb '(CREATE)'
  _co_(); // ,
  _co_(); // ,
  CODE(); // (;CODE) inlined assembler code
// 0xee6d: call   1649
  _2_at_(); // 2@
  IFLD_at_(); // IFLD@
  Push(Pop() & 7); //  7 AND
  UNK_0xeac1(); // UNK_0xeac1
  a = Pop(); // >R
  IFLD_at_(); // IFLD@
  Push(Pop() & 0x007f); //  0x007f AND
  UNK_0xeac1(); // UNK_0xeac1
  Push(Pop() & a); //  R> AND
}


// ================================================
// 0xee8c: WORD 'UNK_0xee8e' codep=0x224c parp=0xee8e params=0 returns=1
// ================================================

void UNK_0xee8e() // UNK_0xee8e
{
  Push(0xeb53); // probable 'UNK_0xeb53'
  Push((Read16(Pop())&0xFF) & 0x007f); //  C@ 0x007f AND
  UNK_0xeac1(); // UNK_0xeac1
}


// ================================================
// 0xee9e: WORD 'ENGINE-' codep=0xee6d parp=0xeeaa
// ================================================
// 0xeeaa: db 0x62 0xeb 0x5d 0xeb 'b ] '

// ================================================
// 0xeeae: WORD 'SENSOR-' codep=0xee6d parp=0xeeba
// ================================================
// 0xeeba: db 0x6c 0xeb 0x67 0xeb 'l g '

// ================================================
// 0xeebe: WORD 'COMM-CH' codep=0xee6d parp=0xeeca
// ================================================
// 0xeeca: db 0x76 0xeb 0x71 0xeb 'v q '

// ================================================
// 0xeece: WORD 'MISS-CH' codep=0xee6d parp=0xeeda
// ================================================
// 0xeeda: db 0x8a 0xeb 0x85 0xeb '    '

// ================================================
// 0xeede: WORD 'LASER-C' codep=0xee6d parp=0xeeea
// ================================================
// 0xeeea: db 0x94 0xeb 0x8f 0xeb '    '

// ================================================
// 0xeeee: WORD 'SHIELD-' codep=0xee6d parp=0xeefa
// ================================================
// 0xeefa: db 0x80 0xeb 0x7b 0xeb '  { '

// ================================================
// 0xeefe: WORD 'UNK_0xef00' codep=0x224c parp=0xef00 params=0 returns=1
// ================================================

void UNK_0xef00() // UNK_0xef00
{
  Push(pp_ROSTER); // ROSTER
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  UNK_0xeac1(); // UNK_0xeac1
}


// ================================================
// 0xef0a: WORD '#>?FIEL' codep=0x4a4f parp=0xef16
// ================================================

void _n__gt__ask_FIEL() // #>?FIEL
{
  switch(Pop()) // #>?FIEL
  {
  case 1:
    UNK_0xee8e(); // UNK_0xee8e
    break;
  case 2:
    ENGINE_dash_(); // ENGINE-
    break;
  case 3:
    SENSOR_dash_(); // SENSOR-
    break;
  case 4:
    COMM_dash_CH(); // COMM-CH
    break;
  case 5:
    MISS_dash_CH(); // MISS-CH
    break;
  case 6:
    LASER_dash_C(); // LASER-C
    break;
  case 7:
    UNK_0xef00(); // UNK_0xef00
    break;
  case 8:
    SHIELD_dash_(); // SHIELD-
    break;
  default:
    if (Pop() == 0) Push(1); else Push(0); // 0=
    break;

  }
}

// ================================================
// 0xef3a: WORD 'UNK_0xef3c' codep=0x224c parp=0xef3c
// ================================================

void UNK_0xef3c() // UNK_0xef3c
{
  unsigned short int i, imax;
  Push(pp_RSRC); // RSRC
  Push(9);
  Push(0);
  FILL_1(); // FILL_1
  Push(pp_UNK_0xebd6); // UNK_0xebd6
  OFF(); // OFF
  Push(0);
  Push(9);
  Push(1);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _n__gt__ask_FIEL(); // #>?FIEL case
    Push(Read16(regsp)); // DUP
    if (Pop() != 0)
    {
      Push(i); // I
      Push(Read16(pp_UNK_0xebd6) + pp_RSRC); // UNK_0xebd6 @ RSRC +
      _st_C_ex__gt_(); // <C!>
      Push(1);
      Push(pp_UNK_0xebd6); // UNK_0xebd6
      _st__plus__ex__gt_(); // <+!>
    }
    Push(Pop() | Pop()); // OR
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xef74: WORD 'UNK_0xef76' codep=0x224c parp=0xef76
// ================================================

void UNK_0xef76() // UNK_0xef76
{
  UNK_0xef3c(); // UNK_0xef3c
  if (Pop() == 0) return;
  Push(0);
  Push(Read16(pp_UNK_0xebd6)); // UNK_0xebd6 @
  RRND(); // RRND
  Push(Read16(Pop() + pp_RSRC)&0xFF); //  RSRC + C@
}


// ================================================
// 0xef8c: WORD 'UNK_0xef8e' codep=0x224c parp=0xef8e params=0 returns=0
// ================================================

void UNK_0xef8e() // UNK_0xef8e
{
  unsigned short int a;
  Push(Read16(0x63ef+UNK_0xebb2.offset)&0xFF); // UNK_0xebb2<IFIELD> C@
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    SET_STR_AS_PARAM("KILLED");
  } else
  {
    Push(Read16(a)); // R@
    Push(1);
    Push(0x0015);
    WITHIN(); // WITHIN
    if (Pop() != 0)
    {
      SET_STR_AS_PARAM("CRITICALLY ");
    } else
    {
      Push(Read16(a)); // R@
      Push(0x0015);
      Push(0x0033);
      WITHIN(); // WITHIN
      if (Pop() != 0)
      {
        SET_STR_AS_PARAM("HEAVILIY ");
      } else
      {
        Push(Read16(a)); // R@
        Push(0x0033);
        Push(0x0051);
        WITHIN(); // WITHIN
        if (Pop() != 0)
        {
          SET_STR_AS_PARAM("MODERATELY ");
        } else
        {
          SET_STR_AS_PARAM("SLIGHTLY ");
        }
      }
    }
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    SET_STR_AS_PARAM("WOUNDED ");
  }
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf02c: WORD 'UNK_0xf02e' codep=0x224c parp=0xf02e params=0 returns=0
// ================================================

void UNK_0xf02e() // UNK_0xf02e
{
  unsigned short int i, imax;
  Push(Read16(pp_UNK_0xed9a)); // UNK_0xed9a @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    CTINIT(); // CTINIT
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(i + pp_WOUNDED)&0xFF); // I WOUNDED + C@
      _3_star_(); // 3*
      Push(Pop() + pp_ROSTER); //  ROSTER +
      _1_dot_5_at_(); // 1.5@
      _2DUP(); // 2DUP
      Push(Pop() | Pop()); // OR
      if (Pop() != 0)
      {
        _gt_C_plus_S(); // >C+S
        Push(0x63ef+UNK_0xebbf.offset); // UNK_0xebbf<IFIELD>
        COUNT(); // COUNT
        _dash_TRAILING(); // -TRAILING
        DrawTTY(); // .TTY
        PRINT(" IS ", 4); // (.")
        UNK_0xef8e(); // UNK_0xef8e
        ICLOSE(); // ICLOSE
      } else
      {
        Pop(); Pop(); // 2DROP
      }
      i++;
    } while(i<imax); // (LOOP)

    Push(pp_IsHEAL); // ?HEAL
    ON_3(); // ON_3
  }
  Push(pp_UNK_0xed9a); // UNK_0xed9a
  OFF(); // OFF
}


// ================================================
// 0xf07f: WORD 'UNK_0xf081' codep=0x1d29 parp=0xf081
// ================================================
// 0xf081: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f ':  ALLO'

// ================================================
// 0xf088: WORD 'UNK_0xf08a' codep=0x224c parp=0xf08a
// ================================================

void UNK_0xf08a() // UNK_0xf08a
{
  Push(0x002b);
  StoreID(); // !ID
  Push(8);
  Push(0x63ef+UNK_0xeb45.offset); // UNK_0xeb45<IFIELD>
  C_ex_(); // C!
  CTINIT(); // CTINIT
  _gt_DISPLAY(); // >DISPLAY
  DCLIPSET(); // DCLIPSET
  SET_STR_AS_PARAM("ALIEN SHIP DESTROYED ");
  DrawTTY(); // .TTY
  Push(0);
  Push(0x63ef+UNK_0xeb31.offset); // UNK_0xeb31<IFIELD>
  C_ex_(); // C!
  LoadData(UNK_0xeb21); // from 'VESSEL'
  Push(pp_UNK_0xf081); // UNK_0xf081
  Push(7);
  CMOVE(); // CMOVE
  Push(0x0018);
  StoreINST_dash_SPECIES(); // !INST-SPECIES
  SET_dash_CURRENT(); // SET-CURRENT
  Push(pp_UNK_0xf081); // UNK_0xf081
  Push(0x63ef+UNK_0xeb4a.offset); // UNK_0xeb4a<IFIELD>
  Push(7);
  CMOVE(); // CMOVE
  UNK_0xec6a(); // UNK_0xec6a
  Push(0xc27d); // probable 'DA-STR'
  MODULE(); // MODULE
}


// ================================================
// 0xf0de: WORD 'UNK_0xf0e0' codep=0x224c parp=0xf0e0
// ================================================

void UNK_0xf0e0() // UNK_0xf0e0
{
  unsigned short int i, imax;
  Push(pp_UNK_0xed5a); // UNK_0xed5a
  _st__ex__gt_(); // <!>
  UNK_0xede0(); // UNK_0xede0
  Push(pp_ROSTER); // ROSTER
  Push(Read16(regsp)); // DUP
  Push(Pop() + 0x0012); //  0x0012 +
  SWAP(); // SWAP

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    _1_dot_5_at_(); // 1.5@
    _2DUP(); // 2DUP
    Push(Pop() | Pop()); // OR
    if (Pop() != 0)
    {
      UNK_0xed5e(); // UNK_0xed5e
      if (Pop() != 0)
      {
        _gt_C_plus_S(); // >C+S
        UNK_0xed6a(); // UNK_0xed6a
        Push(0xebb2); // probable 'UNK_0xebb2'
        UNK_0xec30(); // UNK_0xec30
        ICLOSE(); // ICLOSE
        Push(i - pp_ROSTER); // I ROSTER -
        Push(3);
        _slash_(); // /
        UNK_0xed9e(); // UNK_0xed9e
      } else
      {
        Pop(); Pop(); // 2DROP
      }
    } else
    {
      Pop(); Pop(); // 2DROP
      imax = i; // LEAVE
    }
    Push(3);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xf134: WORD 'UNK_0xf136' codep=0x224c parp=0xf136
// ================================================

void UNK_0xf136() // UNK_0xf136
{
  LoadData(UNK_0xeb09); // from 'VESSEL'
  Push(Read16(Pop())&0xFF); //  C@
  Push(Read16(regsp)); // DUP
  Push(-Pop()); //  NEGATE
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  _plus__ex__2(); // +!_2
  Push(0x63ef+UNK_0xeb3b.offset); // UNK_0xeb3b<IFIELD>
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  LoadData(UNK_0xeb01); // from 'VESSEL'
  _2_at_(); // 2@
  Push(Pop() + Pop()); // +
  _star__slash_(); // */
  Push(Pop() + Read16(pp_A_dash_STRENGTH)); //  A-STRENGTH @ +
  Push(0);
  MAX(); // MAX
  Push(pp_A_dash_STRENGTH); // A-STRENGTH
  Store_3(); // !_3
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  Push(((Read16(0x63ef+UNK_0xeb40.offset)==0?1:0) | (Read16(cc_IsA_dash_SHIE)==0?1:0)) | Read16(pp_IsNEB)); // UNK_0xeb40<IFIELD> @ 0= ?A-SHIE 0= OR ?NEB @ OR
  if (Pop() != 0)
  {
    Push(0xeb3b); // probable 'UNK_0xeb3b'
    UNK_0xec30(); // UNK_0xec30
  } else
  {
    Push(0xeb40); // probable 'UNK_0xeb40'
    UNK_0xec30(); // UNK_0xec30
  }
  UNK_0xf136(); // UNK_0xf136
  Push(Read16(0x63ef+UNK_0xeb3b.offset)==0?1:0); // UNK_0xeb3b<IFIELD> @ 0=
  if (Pop() == 0) return;
  UNK_0xf08a(); // UNK_0xf08a
}


// ================================================
// 0xf198: WORD 'UNK_0xf19a' codep=0x224c parp=0xf19a params=1 returns=0
// ================================================

void UNK_0xf19a() // UNK_0xf19a
{
  unsigned short int i, imax;
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(Pop()==0x0018?1:0); //  0x0018 =
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(Pop()==0x0014?1:0); //  0x0014 =
  Push(Pop() | Pop()); // OR
  Push(!Pop()); //  NOT
  if (Pop() != 0)
  {
    Push(Read16(pp_IsSOUND)); // ?SOUND @
    if (Pop() != 0)
    {
      BEEPON(); // BEEPON
      Push(0x0514 * (Read16(cc_MPS) - 1)); // 0x0514 MPS 1- *
      Push(0x01f4);
      MAX(); // MAX
      Push(0);

      i = Pop();
      imax = Pop();
      do // (DO)
      {
        Push(0);
        Push(i); // I
        RRND(); // RRND
        TONE(); // TONE
        i++;
      } while(i<imax); // (LOOP)

      BEEPOFF(); // BEEPOFF
    }
    UNK_0xf162(); // UNK_0xf162
  } else
  {
    Pop(); // DROP
  }
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1ea: WORD 'UNK_0xf1ec' codep=0x224c parp=0xf1ec
// ================================================

void UNK_0xf1ec() // UNK_0xf1ec
{
  unsigned short int a, i, imax;
  UNK_0xed4e(); // UNK_0xed4e
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    SWAP(); // SWAP
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      ROT(); // ROT
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      UNK_0xf19a(); // UNK_0xf19a
      i++;
    } while(i<imax); // (LOOP)

    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
}


// ================================================
// 0xf21e: WORD 'MDAMAGE' codep=0x1d29 parp=0xf22a
// ================================================
// 0xf22a: db 0x00 0x00 0xc8 0x00 0x90 0x01 0xbc 0x02 0xe8 0x03 0xdc 0x05 0xa0 0x0f '              '

// ================================================
// 0xf238: WORD 'UNK_0xf23a' codep=0x224c parp=0xf23a params=0 returns=1
// ================================================

void UNK_0xf23a() // UNK_0xf23a
{
  UNK_0xebe4(); // UNK_0xebe4
  Push(Read16(Pop() * 2 + pp_MDAMAGE)); //  2* MDAMAGE + @
}


// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x224c parp=0xf248 params=1 returns=1
// ================================================

void UNK_0xf248() // UNK_0xf248
{
  Push(Read16(0x63ef+UNK_0xeb99.offset)); // UNK_0xeb99<IFIELD> @
  SWAP(); // SWAP
  Push(6);
  Push(0x63ef+UNK_0xeb80.offset); // UNK_0xeb80<IFIELD>
  UNK_0xebf2(); // UNK_0xebf2
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(5);
  _slash_(); // /
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x63ef+UNK_0xeb99.offset); // UNK_0xeb99<IFIELD>
  Store_3(); // !_3
}


// ================================================
// 0xf268: WORD 'UNK_0xf26a' codep=0x224c parp=0xf26a params=1 returns=1
// ================================================

void UNK_0xf26a() // UNK_0xf26a
{
  Push(Read16(0x63ef+UNK_0xeba3.offset)); // UNK_0xeba3<IFIELD> @
  SWAP(); // SWAP
  Push(6);
  Push(0x63ef+UNK_0xeb58.offset); // UNK_0xeb58<IFIELD>
  UNK_0xebf2(); // UNK_0xebf2
  _dash_(); // -
  Push(Pop() * Pop()); // *
  Push(5);
  _slash_(); // /
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(0x63ef+UNK_0xeba3.offset); // UNK_0xeba3<IFIELD>
  Store_3(); // !_3
  Push(Read16(0x63ef+UNK_0xeba3.offset)==0?1:0); // UNK_0xeba3<IFIELD> @ 0=
  if (Pop() == 0) return;
  Push(0xbe2b); // probable 'OV/DA'
  MODULE(); // MODULE
  Push(3);
  Push(pp__n_AUX); // #AUX
  _st__ex__gt_(); // <!>
}


// ================================================
// 0xf2a0: WORD 'UNK_0xf2a2' codep=0x224c parp=0xf2a2
// ================================================

void UNK_0xf2a2() // UNK_0xf2a2
{
  Push(0xeb53); // probable 'UNK_0xeb53'
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf2aa: WORD 'UNK_0xf2ac' codep=0x224c parp=0xf2ac
// ================================================

void UNK_0xf2ac() // UNK_0xf2ac
{
  Push(0xeb5d); // probable 'UNK_0xeb5d'
  UNK_0xec46(); // UNK_0xec46
  ENGINE_dash_(); // ENGINE-
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(!Read16(pp_IsAUTO)); // ?AUTO @ NOT
  if (Pop() != 0)
  {
    Push(5);
    Push(0xbdef); // probable 'OV?.EQUIP-OK'
    MODULE(); // MODULE
    Pop(); // DROP
  }
  Push(0xeb62); // probable 'UNK_0xeb62'
  IFLD_at_(); // IFLD@
  Push(Pop() | 0x0080); //  0x0080 OR
  Push(0xeb62); // probable 'UNK_0xeb62'
  IFLD_ex_(); // IFLD!
  Push(pp_IsAUTO); // ?AUTO
  ON_3(); // ON_3
}


// ================================================
// 0xf2e6: WORD 'UNK_0xf2e8' codep=0x224c parp=0xf2e8
// ================================================

void UNK_0xf2e8() // UNK_0xf2e8
{
  Push(0xeb67); // probable 'UNK_0xeb67'
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf2f0: WORD 'UNK_0xf2f2' codep=0x224c parp=0xf2f2
// ================================================

void UNK_0xf2f2() // UNK_0xf2f2
{
  Push(0xeb71);
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc
// ================================================

void UNK_0xf2fc() // UNK_0xf2fc
{
  Push(0xeb85); // probable 'UNK_0xeb85'
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf304: WORD 'UNK_0xf306' codep=0x224c parp=0xf306
// ================================================

void UNK_0xf306() // UNK_0xf306
{
  Push(0xeb7b);
  UNK_0xec46(); // UNK_0xec46
  SHIELD_dash_(); // SHIELD-
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  Push(Read16(pp__i_OVS)); // 'OVS @
  MODULE(); // MODULE
}


// ================================================
// 0xf31c: WORD 'UNK_0xf31e' codep=0x224c parp=0xf31e
// ================================================

void UNK_0xf31e() // UNK_0xf31e
{
  Push(0xeb8f); // probable 'UNK_0xeb8f'
  UNK_0xec46(); // UNK_0xec46
}


// ================================================
// 0xf326: WORD '#>DAMAG' codep=0x4a4f parp=0xf332
// ================================================

void _n__gt_DAMAG() // #>DAMAG
{
  switch(Pop()) // #>DAMAG
  {
  case 1:
    UNK_0xf2a2(); // UNK_0xf2a2
    break;
  case 2:
    UNK_0xf2ac(); // UNK_0xf2ac
    break;
  case 3:
    UNK_0xf2e8(); // UNK_0xf2e8
    break;
  case 4:
    UNK_0xf2f2(); // UNK_0xf2f2
    break;
  case 5:
    UNK_0xf2fc(); // UNK_0xf2fc
    break;
  case 6:
    UNK_0xf31e(); // UNK_0xf31e
    break;
  case 7:
    UNK_0xf0e0(); // UNK_0xf0e0
    break;
  case 8:
    UNK_0xf306(); // UNK_0xf306
    break;
  default:
    Pop(); // DROP
    break;

  }
}

// ================================================
// 0xf356: WORD 'UNK_0xf358' codep=0x224c parp=0xf358 params=1 returns=2
// ================================================

void UNK_0xf358() // UNK_0xf358
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  Push(1);
  SWAP(); // SWAP
  Push(Pop() + 1); //  1+
  RRND(); // RRND
  Push(0x000a);
  MAX(); // MAX
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  _dash_(); // -
  Push(0);
  MAX(); // MAX
  Push(a); // R>
}


// ================================================
// 0xf376: WORD 'UNK_0xf378' codep=0x224c parp=0xf378
// ================================================

void UNK_0xf378() // UNK_0xf378
{
  UNK_0xec8a(); // UNK_0xec8a
  if (Pop() != 0)
  {
    UNK_0xf248(); // UNK_0xf248
    return;
  }
  Push(Read16(0x63ef+UNK_0xeba3.offset)); // UNK_0xeba3<IFIELD> @
  if (Pop() != 0)
  {
    UNK_0xf26a(); // UNK_0xf26a
    return;
  }
  Push(0x000a);
  Push(Read16(0x63ef+UNK_0xeb53.offset)&0xFF); // UNK_0xeb53<IFIELD> C@
  _star__slash_(); // */
  UNK_0xef76(); // UNK_0xef76
  _n__gt_DAMAG(); // #>DAMAG case
}


// ================================================
// 0xf3a2: WORD 'UNK_0xf3a4' codep=0x224c parp=0xf3a4
// ================================================

void UNK_0xf3a4() // UNK_0xf3a4
{

  label2:
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  Push(!(Pop()==0?1:0)); //  0= NOT
  if (Pop() == 0) goto label1;
  UNK_0xf358(); // UNK_0xf358
  UNK_0xf378(); // UNK_0xf378
  goto label2;

  label1:
  Push(Read16(pp_UNK_0xed9a)); // UNK_0xed9a @
  if (Pop() != 0)
  {
    UNK_0xf02e(); // UNK_0xf02e
    Push(0xc012); // probable '(OBI'
    MODULE(); // MODULE
    Push(0xc03f); // probable '(ROL'
    MODULE(); // MODULE
  }
  UNK_0xecf2(); // UNK_0xecf2
  Push(0xeb53); // probable 'UNK_0xeb53'
  IFLD_at_(); // IFLD@
  Push(Pop()==0?1:0); //  0=
  if (Pop() != 0)
  {
    UNK_0xee27(); // UNK_0xee27
  }
  UNK_0xef00(); // UNK_0xef00
  Push(Pop()==0?1:0); //  0=
  if (Pop() == 0) return;
  UNK_0xee46(); // UNK_0xee46
}


// ================================================
// 0xf3e8: WORD 'UNK_0xf3ea' codep=0x224c parp=0xf3ea
// ================================================

void UNK_0xf3ea() // UNK_0xf3ea
{
  UNK_0xed36(); // UNK_0xed36
  Push(Pop() * 2); //  2*
  UNK_0xeaf5(); // UNK_0xeaf5
  UNK_0xf3a4(); // UNK_0xf3a4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf3f6: WORD 'UNK_0xf3f8' codep=0x224c parp=0xf3f8 params=3 returns=0
// ================================================

void UNK_0xf3f8() // UNK_0xf3f8
{
  Push(pp_UNK_0xebda); // UNK_0xebda
  C_ex_(); // C!
  Push(pp_UNK_0xebde); // UNK_0xebde
  StoreD(); // D!
}


// ================================================
// 0xf402: WORD 'UNK_0xf404' codep=0x224c parp=0xf404
// ================================================

void UNK_0xf404() // UNK_0xf404
{
  unsigned short int i, imax;
  _gt_MAINVIEW(); // >MAINVIEW
  StoreCOLOR(); // !COLOR
  VCLIPSET(); // VCLIPSET
  UNK_0xec0a(); // UNK_0xec0a
  WLD_gt_SCR(); // WLD>SCR
  SCR_gt_BLT(); // SCR>BLT
  SWAP(); // SWAP
  Push(Pop() + 3); //  3 +
  SWAP(); // SWAP
  Push(Pop() - 3); //  3 -
  Push(Read16(pp_XWLD_c_XPIX)); // XWLD:XPIX @
  Push(6);
  MIN(); // MIN
  Push(2);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    _2DUP(); // 2DUP
    Push(i); // I
    DrawCIRCLE(); // .CIRCLE
    Push(2);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Pop(); Pop(); // 2DROP
  V_gt_DISPLAY(); // V>DISPLAY
}


// ================================================
// 0xf43a: WORD 'UNK_0xf43c' codep=0x224c parp=0xf43c
// ================================================

void UNK_0xf43c() // UNK_0xf43c
{
  UNK_0xf404(); // UNK_0xf404
  CTINIT(); // CTINIT
  DCLIPSET(); // DCLIPSET
  _gt_DISPLAY(); // >DISPLAY
  UNK_0xebe4(); // UNK_0xebe4
  Push(Read16(regsp)); // DUP
  Push(Pop()==6?1:0); //  6 =
  if (Pop() != 0)
  {
    Pop(); // DROP
    SET_STR_AS_PARAM("PLASMA BOLT");
    DrawTTY(); // .TTY
    return;
  }
  SET_STR_AS_PARAM("MISSILE CLASS ");
  DrawTTY(); // .TTY
  Draw(); // .
}


// ================================================
// 0xf47d: WORD 'UNK_0xf47f' codep=0x224c parp=0xf47f
// ================================================

void UNK_0xf47f() // UNK_0xf47f
{
  unsigned short int a, i, imax;
  UNK_0xf3f8(); // UNK_0xf3f8
  UNK_0xeaf5(); // UNK_0xeaf5
  GetColor(LT_dash_BLUE);
  UNK_0xf404(); // UNK_0xf404
  UNK_0xec0a(); // UNK_0xec0a
  UNK_0xf23a(); // UNK_0xf23a
  a = Pop(); // >R
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONS_dash_AT(); // ?ICONS-AT
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Read16(a)); // R@
    SWAP(); // SWAP
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      Push(Read16(regsp)); // DUP
      ROT(); // ROT
      POINT_gt_ICON(); // POINT>ICON
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_CLASS(); // @INST-CLASS
      Push(!(Pop()==0x0014?1:0)); //  0x0014 = NOT
      if (Pop() != 0)
      {
        LoadData(UNK_0xeb29); // from 'VESSEL'
        Push(Read16(Pop())&0xFF); //  C@
        if (Pop() != 0)
        {
          UNK_0xf19a(); // UNK_0xf19a
        } else
        {
          Pop(); // DROP
          ICLOSE(); // ICLOSE
        }
      } else
      {
        Pop(); // DROP
        ICLOSE(); // ICLOSE
      }
      i++;
    } while(i<imax); // (LOOP)

    Pop(); // DROP
  }
  Push(a); // R>
  Pop(); // DROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e3: WORD 'UNK_0xf4e5' codep=0x224c parp=0xf4e5
// ================================================

void UNK_0xf4e5() // UNK_0xf4e5
{
  UNK_0xf3f8(); // UNK_0xf3f8
  GetColor(RED);
  UNK_0xf43c(); // UNK_0xf43c
  UNK_0xf23a(); // UNK_0xf23a
  UNK_0xeaf5(); // UNK_0xeaf5
  UNK_0xf3a4(); // UNK_0xf3a4
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f5: WORD 'UNK_0xf4f7' codep=0x224c parp=0xf4f7
// ================================================

void UNK_0xf4f7() // UNK_0xf4f7
{
  if (Pop() != 0)
  {
    UNK_0xf47f(); // UNK_0xf47f
    return;
  }
  UNK_0xf4e5(); // UNK_0xf4e5
}


// ================================================
// 0xf505: WORD 'UNK_0xf507' codep=0x224c parp=0xf507
// ================================================

void UNK_0xf507() // UNK_0xf507
{
  if (Pop() != 0)
  {
    UNK_0xf1ec(); // UNK_0xf1ec
    return;
  }
  UNK_0xf3ea(); // UNK_0xf3ea
}


// ================================================
// 0xf515: WORD 'DO-DAMA' codep=0x224c parp=0xf521
// ================================================
// entry

void DO_dash_DAMA() // DO-DAMA
{
  if (Pop() != 0)
  {
    UNK_0xf4f7(); // UNK_0xf4f7
    return;
  }
  UNK_0xf507(); // UNK_0xf507
}

// 0xf52f: db 0x44 0x41 0x4d 0x41 0x47 0x45 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'DAMAGE-_________________________----------------- '

