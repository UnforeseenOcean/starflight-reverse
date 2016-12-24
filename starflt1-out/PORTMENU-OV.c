// ====== OVERLAY 'PORTMENU-OV' ======
// store offset = 0xe930
// overlay size   = 0x0c30

#include"../emul/cpu.h"
#include"../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xaa09 C-string:'UNK_0x3f3b'
// 1704:      UNK_0xe946  codep:0x744d parp:0xe946 size:0x0003 C-string:'UNK_0xe946'
// 1705:      UNK_0xe94b  codep:0x744d parp:0xe94b size:0x0003 C-string:'UNK_0xe94b'
// 1706:      UNK_0xe950  codep:0x744d parp:0xe950 size:0x0003 C-string:'UNK_0xe950'
// 1707:      UNK_0xe955  codep:0x224c parp:0xe955 size:0x0064 C-string:'UNK_0xe955'
// 1708:      UNK_0xe9bb  codep:0x224c parp:0xe9bb size:0x000c C-string:'UNK_0xe9bb'
// 1709:      UNK_0xe9c9  codep:0x224c parp:0xe9c9 size:0x003c C-string:'UNK_0xe9c9'
// 1710:      UNK_0xea07  codep:0x1d29 parp:0xea07 size:0x0002 C-string:'UNK_0xea07'
// 1711:      UNK_0xea0b  codep:0x224c parp:0xea0b size:0x005e C-string:'UNK_0xea0b'
// 1712:      UNK_0xea6b  codep:0x1d29 parp:0xea6b size:0x0002 C-string:'UNK_0xea6b'
// 1713:      UNK_0xea6f  codep:0x1d29 parp:0xea6f size:0x0002 C-string:'UNK_0xea6f'
// 1714:      UNK_0xea73  codep:0x1d29 parp:0xea73 size:0x0002 C-string:'UNK_0xea73'
// 1715:      UNK_0xea77  codep:0x1d29 parp:0xea77 size:0x0002 C-string:'UNK_0xea77'
// 1716:      UNK_0xea7b  codep:0x1d29 parp:0xea7b size:0x0002 C-string:'UNK_0xea7b'
// 1717:      UNK_0xea7f  codep:0x224c parp:0xea7f size:0x0010 C-string:'UNK_0xea7f'
// 1718:      UNK_0xea91  codep:0x224c parp:0xea91 size:0x000e C-string:'UNK_0xea91'
// 1719:      UNK_0xeaa1  codep:0x224c parp:0xeaa1 size:0x000e C-string:'UNK_0xeaa1'
// 1720:      UNK_0xeab1  codep:0x224c parp:0xeab1 size:0x000e C-string:'UNK_0xeab1'
// 1721:      UNK_0xeac1  codep:0x224c parp:0xeac1 size:0x000e C-string:'UNK_0xeac1'
// 1722:      UNK_0xead1  codep:0x224c parp:0xead1 size:0x000e C-string:'UNK_0xead1'
// 1723:      UNK_0xeae1  codep:0x224c parp:0xeae1 size:0x0008 C-string:'UNK_0xeae1'
// 1724:      UNK_0xeaeb  codep:0x744d parp:0xeaeb size:0x0003 C-string:'UNK_0xeaeb'
// 1725:      UNK_0xeaf0  codep:0x224c parp:0xeaf0 size:0x00b0 C-string:'UNK_0xeaf0'
// 1726:      UNK_0xeba2  codep:0x224c parp:0xeba2 size:0x0058 C-string:'UNK_0xeba2'
// 1727:      UNK_0xebfc  codep:0x1d29 parp:0xebfc size:0x0002 C-string:'UNK_0xebfc'
// 1728:       (|REGION)  codep:0xec0c parp:0xec0c size:0x0068 C-string:'_ro__v_REGION_rc_'
// 1729:            |EGA  codep:0xec7d parp:0xec7d size:0x0038 C-string:'_v_EGA'
// 1730:         |REGION  codep:0x224c parp:0xecc1 size:0x002a C-string:'_v_REGION'
// 1731:      UNK_0xeced  codep:0x1d29 parp:0xeced size:0x0002 C-string:'UNK_0xeced'
// 1732:      UNK_0xecf1  codep:0x1d29 parp:0xecf1 size:0x001d C-string:'UNK_0xecf1'
// 1733:      UNK_0xed10  codep:0x224c parp:0xed10 size:0x0028 C-string:'UNK_0xed10'
// 1734:      UNK_0xed3a  codep:0x1d29 parp:0xed3a size:0x0004 C-string:'UNK_0xed3a'
// 1735:      UNK_0xed40  codep:0x224c parp:0xed40 size:0x000c C-string:'UNK_0xed40'
// 1736:      UNK_0xed4e  codep:0x224c parp:0xed4e size:0x0012 C-string:'UNK_0xed4e'
// 1737:      UNK_0xed62  codep:0x224c parp:0xed62 size:0x000e C-string:'UNK_0xed62'
// 1738:      UNK_0xed72  codep:0x224c parp:0xed72 size:0x0014 C-string:'UNK_0xed72'
// 1739:      UNK_0xed88  codep:0x224c parp:0xed88 size:0x0017 C-string:'UNK_0xed88'
// 1740:      UNK_0xeda1  codep:0x224c parp:0xeda1 size:0x0010 C-string:'UNK_0xeda1'
// 1741:      UNK_0xedb3  codep:0x224c parp:0xedb3 size:0x0009 C-string:'UNK_0xedb3'
// 1742:      UNK_0xedbe  codep:0x224c parp:0xedbe size:0x000f C-string:'UNK_0xedbe'
// 1743:      UNK_0xedcf  codep:0x224c parp:0xedcf size:0x0010 C-string:'UNK_0xedcf'
// 1744:      UNK_0xede1  codep:0x224c parp:0xede1 size:0x001a C-string:'UNK_0xede1'
// 1745:         (.DOOR)  codep:0x4a4f parp:0xee07 size:0x0020 C-string:'_ro__dot_DOOR_rc_'
// 1746:      UNK_0xee29  codep:0x224c parp:0xee29 size:0x000e C-string:'UNK_0xee29'
// 1747:      UNK_0xee39  codep:0x224c parp:0xee39 size:0x0034 C-string:'UNK_0xee39'
// 1748:      UNK_0xee6f  codep:0x224c parp:0xee6f size:0x0044 C-string:'UNK_0xee6f'
// 1749:      UNK_0xeeb5  codep:0x1d29 parp:0xeeb5 size:0x0078 C-string:'UNK_0xeeb5'
// 1750:      UNK_0xef2f  codep:0x224c parp:0xef2f size:0x0012 C-string:'UNK_0xef2f'
// 1751:      UNK_0xef43  codep:0x224c parp:0xef43 size:0x0020 C-string:'UNK_0xef43'
// 1752:      UNK_0xef65  codep:0x224c parp:0xef65 size:0x000e C-string:'UNK_0xef65'
// 1753:      UNK_0xef75  codep:0x224c parp:0xef75 size:0x0026 C-string:'UNK_0xef75'
// 1754:      UNK_0xef9d  codep:0x224c parp:0xef9d size:0x0036 C-string:'UNK_0xef9d'
// 1755:      UNK_0xefd5  codep:0x224c parp:0xefd5 size:0x0024 C-string:'UNK_0xefd5'
// 1756:      UNK_0xeffb  codep:0x224c parp:0xeffb size:0x0034 C-string:'UNK_0xeffb'
// 1757:      UNK_0xf031  codep:0x224c parp:0xf031 size:0x0018 C-string:'UNK_0xf031'
// 1758:      UNK_0xf04b  codep:0x224c parp:0xf04b size:0x0016 C-string:'UNK_0xf04b'
// 1759:      UNK_0xf063  codep:0x224c parp:0xf063 size:0x0020 C-string:'UNK_0xf063'
// 1760:      UNK_0xf085  codep:0x224c parp:0xf085 size:0x000a C-string:'UNK_0xf085'
// 1761:      UNK_0xf091  codep:0x224c parp:0xf091 size:0x000c C-string:'UNK_0xf091'
// 1762:      UNK_0xf09f  codep:0x1d29 parp:0xf09f size:0x0002 C-string:'UNK_0xf09f'
// 1763:      UNK_0xf0a3  codep:0x1d29 parp:0xf0a3 size:0x0002 C-string:'UNK_0xf0a3'
// 1764:      UNK_0xf0a7  codep:0x1d29 parp:0xf0a7 size:0x000c C-string:'UNK_0xf0a7'
// 1765:      UNK_0xf0b5  codep:0x1d29 parp:0xf0b5 size:0x009a C-string:'UNK_0xf0b5'
// 1766:      UNK_0xf151  codep:0x1d29 parp:0xf151 size:0x0038 C-string:'UNK_0xf151'
// 1767:      UNK_0xf18b  codep:0x224c parp:0xf18b size:0x001c C-string:'UNK_0xf18b'
// 1768:      UNK_0xf1a9  codep:0x224c parp:0xf1a9 size:0x003e C-string:'UNK_0xf1a9'
// 1769:      UNK_0xf1e9  codep:0x224c parp:0xf1e9 size:0x0040 C-string:'UNK_0xf1e9'
// 1770:      UNK_0xf22b  codep:0x224c parp:0xf22b size:0x000c C-string:'UNK_0xf22b'
// 1771:      UNK_0xf239  codep:0x224c parp:0xf239 size:0x0058 C-string:'UNK_0xf239'
// 1772:      UNK_0xf293  codep:0x224c parp:0xf293 size:0x000c C-string:'UNK_0xf293'
// 1773:      UNK_0xf2a1  codep:0x224c parp:0xf2a1 size:0x0010 C-string:'UNK_0xf2a1'
// 1774:      UNK_0xf2b3  codep:0x224c parp:0xf2b3 size:0x0056 C-string:'UNK_0xf2b3'
// 1775:      UNK_0xf30b  codep:0x224c parp:0xf30b size:0x003e C-string:'UNK_0xf30b'
// 1776:      UNK_0xf34b  codep:0x224c parp:0xf34b size:0x0014 C-string:'UNK_0xf34b'
// 1777:      UNK_0xf361  codep:0x224c parp:0xf361 size:0x0016 C-string:'UNK_0xf361'
// 1778:      UNK_0xf379  codep:0x224c parp:0xf379 size:0x0016 C-string:'UNK_0xf379'
// 1779:      UNK_0xf391  codep:0x224c parp:0xf391 size:0x0016 C-string:'UNK_0xf391'
// 1780:      UNK_0xf3a9  codep:0x224c parp:0xf3a9 size:0x005a C-string:'UNK_0xf3a9'
// 1781:        PORT-PIC  codep:0x224c parp:0xf410 size:0x004a C-string:'PORT_dash_PIC'
// 1782:         DO-ROOM  codep:0x4a4f parp:0xf466 size:0x0020 C-string:'DO_dash_ROOM'
// 1783:      UNK_0xf488  codep:0x224c parp:0xf488 size:0x0024 C-string:'UNK_0xf488'
// 1784:           XWALK  codep:0x4a4f parp:0xf4b6 size:0x000c C-string:'XWALK'
// 1785:           YWALK  codep:0x4a4f parp:0xf4cc size:0x000c C-string:'YWALK'
// 1786:         WALKIES  codep:0x224c parp:0xf4e4 size:0x0000 C-string:'WALKIES'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xea07[2] = {0x00, 0x00}; // UNK_0xea07
unsigned char UNK_0xea6b[2] = {0x4a, 0x00}; // UNK_0xea6b
unsigned char UNK_0xea6f[2] = {0x5e, 0x00}; // UNK_0xea6f
unsigned char UNK_0xea73[2] = {0x00, 0x00}; // UNK_0xea73
unsigned char UNK_0xea77[2] = {0x00, 0x00}; // UNK_0xea77
unsigned char UNK_0xea7b[2] = {0x00, 0x00}; // UNK_0xea7b
unsigned char UNK_0xebfc[2] = {0x5e, 0x00}; // UNK_0xebfc
unsigned char UNK_0xeced[2] = {0x00, 0x00}; // UNK_0xeced
unsigned char UNK_0xecf1[29] = {0x07, 0x7a, 0x7e, 0x44, 0x54, 0x5f, 0x69, 0x82, 0x92, 0x2e, 0x32, 0x42, 0x57, 0x38, 0x43, 0x15, 0x24, 0x38, 0x40, 0x76, 0x87, 0x5f, 0x69, 0x0d, 0x15, 0x57, 0x63, 0x48, 0x50}; // UNK_0xecf1
unsigned char UNK_0xed3a[4] = {0x07, 0x00, 0x46, 0xa9}; // UNK_0xed3a
unsigned char UNK_0xeeb5[120] = {0x11, 0x7d, 0x7d, 0x3f, 0x60, 0x7d, 0x00, 0x02, 0x7d, 0x77, 0x60, 0x71, 0x9e, 0x00, 0x03, 0x77, 0x6a, 0x71, 0x87, 0xb9, 0x00, 0x03, 0x6a, 0x59, 0x87, 0x93, 0x29, 0x01, 0x03, 0x59, 0x4c, 0x93, 0x8e, 0xdb, 0xfe, 0x01, 0x4c, 0x3d, 0x8e, 0x7e, 0xc7, 0xff, 0x01, 0x3d, 0x33, 0x7e, 0x6d, 0xf3, 0xff, 0x01, 0x33, 0x2e, 0x6d, 0x54, 0x1e, 0x00, 0x01, 0x2e, 0x2e, 0x54, 0x46, 0x2e, 0x00, 0x00, 0x2e, 0x36, 0x46, 0x24, 0x3e, 0x00, 0x00, 0x36, 0x3c, 0x24, 0x1a, 0x4b, 0x00, 0x00, 0x3c, 0x4a, 0x1a, 0x0c, 0x56, 0x00, 0x00, 0x4a, 0x56, 0x0c, 0x06, 0x62, 0x00, 0x00, 0x56, 0x62, 0x06, 0x0c, 0x4a, 0x00, 0x02, 0x62, 0x6f, 0x0c, 0x19, 0x56, 0x00, 0x02, 0x6f, 0x77, 0x19, 0x2a, 0x64, 0x00, 0x02, 0x77, 0x7d, 0x2a, 0x3f, 0x6b, 0x00, 0x02}; // UNK_0xeeb5
unsigned char UNK_0xf09f[2] = {0x00, 0x00}; // UNK_0xf09f
unsigned char UNK_0xf0a3[2] = {0xff, 0xff}; // UNK_0xf0a3
unsigned char UNK_0xf0a7[12] = {0x00, 0x03, 0x03, 0x00, 0x02, 0x05, 0x00, 0x02, 0x02, 0xff, 0x03, 0x03}; // UNK_0xf0a7
unsigned char UNK_0xf0b5[154] = {0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x3e, 0xba, 0x05, 0x0a, 0xc0, 0x06, 0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x1d, 0xba, 0x04, 0x0a, 0x00, 0x02, 0x1f, 0x1c, 0x84, 0x08, 0xc0, 0x41, 0xf8, 0x00, 0x5c, 0xba, 0x01, 0x0a, 0x80, 0x00, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x70, 0x00, 0x2d, 0x54, 0x0d, 0x06, 0xc0, 0x04, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x20, 0x00, 0x1c, 0x30, 0x06, 0x04, 0x80, 0x01, 0x1f, 0x1c, 0x07, 0x0e, 0xe0, 0x01, 0x20, 0x00, 0x18, 0x30, 0x02, 0x04, 0x80, 0x01, 0x1f, 0x1c, 0x87, 0x0f, 0xc0, 0xc1, 0xf8, 0x00, 0x1d, 0xba, 0x04, 0x0a, 0x00, 0x02, 0x1f, 0x1c, 0x87, 0x0f, 0xc0, 0xc1, 0xf8, 0x00, 0x5c, 0xba, 0x01, 0x0a, 0x80, 0x00, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x70, 0x00, 0x5a, 0x54, 0x05, 0x0c, 0x40, 0x86, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x20, 0x00, 0x1c, 0x18, 0x03, 0x04, 0x00, 0x03, 0x1f, 0x1c, 0x81, 0x03, 0xc0, 0xc3, 0x20, 0x00, 0x0c, 0x18, 0x02, 0x04, 0x00, 0x03}; // UNK_0xf0b5
unsigned char UNK_0xf151[56] = {0xc4, 0x00, 0x02, 0x03, 0x1e, 0x01, 0x01, 0x04, 0x14, 0x00, 0x00, 0x05, 0xe2, 0xff, 0x01, 0x04, 0x3c, 0x00, 0x02, 0x03, 0xc4, 0x00, 0xfe, 0x08, 0x1e, 0x01, 0xff, 0x09, 0x14, 0x00, 0x00, 0x0a, 0xe2, 0xff, 0xff, 0x09, 0x3c, 0x00, 0xfe, 0x08, 0x9c, 0x03, 0x00, 0x06, 0x9c, 0x03, 0x00, 0x07, 0x9c, 0xfd, 0x00, 0x01, 0x9c, 0xfd, 0x00, 0x02}; // UNK_0xf151



// 0xe942: db 0xbe 0x00 '  '

// ================================================
// 0xe944: WORD 'UNK_0xe946' codep=0x744d parp=0xe946
// ================================================
// 0xe946: db 0x14 0x14 0x01 '   '

// ================================================
// 0xe949: WORD 'UNK_0xe94b' codep=0x744d parp=0xe94b
// ================================================
// 0xe94b: db 0x10 0x20 0x02 '   '

// ================================================
// 0xe94e: WORD 'UNK_0xe950' codep=0x744d parp=0xe950
// ================================================
// 0xe950: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xe953: WORD 'UNK_0xe955' codep=0x224c parp=0xe955
// ================================================

void UNK_0xe955() // UNK_0xe955
{
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x000a);
  Push(Pop() + Pop()); // +
  RRND(); // RRND
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(Read16(regsp)); // DUP
  Push(0x000c);
  _dash_(); // -
  SWAP(); // SWAP
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  _gt_R(); // >R
  Push(h); // I
  Push(0x0057);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(h); // I
  Push(0x005d);
  _gt_(); // >
  if (Pop() == 0) goto label2;
  SetColor("LT-BLUE");
  goto label3;

  label2:
  SetColor("GREY1");

  label3:
  goto label4;

  label1:
  SetColor("GREY2");

  label4:
  _ex_COLOR(); // !COLOR
  R_gt_(); // R>
  Pop(); // DROP
  LPLOT(); // LPLOT
  Push(0x1421);
  Push(0x7e64);
  RRND(); // RRND
  Push(0); // 0
  Push(0x614a); // pointer to STIME
  D_ex_(); // D!
}


// ================================================
// 0xe9b9: WORD 'UNK_0xe9bb' codep=0x224c parp=0xe9bb
// ================================================

void UNK_0xe9bb() // UNK_0xe9bb
{
  BEEPON(); // BEEPON
  Push(Read16(regsp)); // DUP
  Push(Pop()*2); // 2*
  RRND(); // RRND
  TONE(); // TONE
}


// ================================================
// 0xe9c7: WORD 'UNK_0xe9c9' codep=0x224c parp=0xe9c9
// ================================================

void UNK_0xe9c9() // UNK_0xe9c9
{
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  Push(0x587c); // pointer to XORMODE
  OFF(); // OFF
  Push(0x1388);
  Push(0x7530);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xe9bb(); // UNK_0xe9bb
  UNK_0xe955(); // UNK_0xe955
  Push(1); // 1
  MS(); // MS
  Push(0xff6a);
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff0

  Push(0x04e2);
  Push(0x0064);

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(j); // I
  UNK_0xe9bb(); // UNK_0xe9bb
  UNK_0xe955(); // UNK_0xe955
  j++;
  } while(j<jmax); // (LOOP) 0xfff8

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xea05: WORD 'UNK_0xea07' codep=0x1d29 parp=0xea07
// ================================================
// 0xea07: db 0x00 0x00 '  '

// ================================================
// 0xea09: WORD 'UNK_0xea0b' codep=0x224c parp=0xea0b
// ================================================

void UNK_0xea0b() // UNK_0xea0b
{
  Push(0x5e74); // pointer to STARDATE
  Push(Read16(Pop())); // @
  Push(0xea07); // pointer to UNK_0xea07
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0x0014);
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label2:
  Push(0x640f); // IFIELD(UNK_0xe94b)
  Push(Read8(Pop())&0xFF); // C@
  Push(Read16(regsp)); // DUP
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(h); // I
  Push(0x640e); // IFIELD(UNK_0xe950)
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Push(0x0064);
  MIN(); // MIN
  Push(0x640e); // IFIELD(UNK_0xe950)
  C_ex_(); // C!

  label1:
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label2;
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  Pop(); // DROP
  Push(0x5e74); // pointer to STARDATE
  Push(Read16(Pop())); // @
  Push(0xea07); // pointer to UNK_0xea07
  _ex__3(); // !_3
}


// ================================================
// 0xea69: WORD 'UNK_0xea6b' codep=0x1d29 parp=0xea6b
// ================================================
// 0xea6b: db 0x4a 0x00 'J '

// ================================================
// 0xea6d: WORD 'UNK_0xea6f' codep=0x1d29 parp=0xea6f
// ================================================
// 0xea6f: db 0x5e 0x00 '^ '

// ================================================
// 0xea71: WORD 'UNK_0xea73' codep=0x1d29 parp=0xea73
// ================================================
// 0xea73: db 0x00 0x00 '  '

// ================================================
// 0xea75: WORD 'UNK_0xea77' codep=0x1d29 parp=0xea77
// ================================================
// 0xea77: db 0x00 0x00 '  '

// ================================================
// 0xea79: WORD 'UNK_0xea7b' codep=0x1d29 parp=0xea7b
// ================================================
// 0xea7b: db 0x00 0x00 '  '

// ================================================
// 0xea7d: WORD 'UNK_0xea7f' codep=0x224c parp=0xea7f
// ================================================

void UNK_0xea7f() // UNK_0xea7f
{
  Push(0x5cce); // pointer to ?>OP
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  BEEP(); // BEEP

  label1:
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xea8f: WORD 'UNK_0xea91' codep=0x224c parp=0xea91
// ================================================

void UNK_0xea91() // UNK_0xea91
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc650);
  MODULE(); // MODULE
}


// ================================================
// 0xea9f: WORD 'UNK_0xeaa1' codep=0x224c parp=0xeaa1
// ================================================

void UNK_0xeaa1() // UNK_0xeaa1
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc610);
  MODULE(); // MODULE
}


// ================================================
// 0xeaaf: WORD 'UNK_0xeab1' codep=0x224c parp=0xeab1
// ================================================

void UNK_0xeab1() // UNK_0xeab1
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc5b6);
  MODULE(); // MODULE
}


// ================================================
// 0xeabf: WORD 'UNK_0xeac1' codep=0x224c parp=0xeac1
// ================================================

void UNK_0xeac1() // UNK_0xeac1
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc73a);
  MODULE(); // MODULE
}


// ================================================
// 0xeacf: WORD 'UNK_0xead1' codep=0x224c parp=0xead1
// ================================================

void UNK_0xead1() // UNK_0xead1
{
  UNK_0xea7f(); // UNK_0xea7f
  if (Pop() == 0) return;
  Push(0xc785);
  MODULE(); // MODULE
}


// ================================================
// 0xeadf: WORD 'UNK_0xeae1' codep=0x224c parp=0xeae1
// ================================================

void UNK_0xeae1() // UNK_0xeae1
{
  Push(0xc7f3);
  MODULE(); // MODULE
}


// ================================================
// 0xeae9: WORD 'UNK_0xeaeb' codep=0x744d parp=0xeaeb
// ================================================
// 0xeaeb: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xeaee: WORD 'UNK_0xeaf0' codep=0x224c parp=0xeaf0
// ================================================

void UNK_0xeaf0() // UNK_0xeaf0
{
  Push(0xc081);
  Push(0x5f4e); // pointer to 'CREW-C
  _ex__3(); // !_3
  Push(0xc05f);
  Push(0x5f78); // pointer to 'TREATM
  _ex__3(); // !_3
  Push(0x3a48);
  Push(0x5f17); // pointer to '.VITAL
  _ex__3(); // !_3
  Push(0xc104);
  Push(0x5f40); // pointer to 'VEHICLE-CYCLE
  _ex__3(); // !_3
  Push(0xbf68);
  Push(0x5f32); // pointer to '.VEHICLE-STATUS
  _ex__3(); // !_3
  Push(0xc136);
  Push(0x5f6a); // pointer to 'REPAIR
  _ex__3(); // !_3
  Push(0xbf56);
  Push(0x5f24); // pointer to '.DATE
  _ex__3(); // !_3
  Push(0xca8c);
  MODULE(); // MODULE
  Push(0x5b55); // pointer to LSYSEG
  Push(Read16(Pop())); // @
  Push(0x0070);
  FILE_st_(); // FILE<
  Push(0x5b62); // pointer to MSYSEG
  Push(Read16(Pop())); // @
  Push(0x0071);
  FILE_st_(); // FILE<
  Push(0x5b6f); // pointer to SSYSEG
  Push(Read16(Pop())); // @
  Push(0x0072);
  FILE_st_(); // FILE<
  Push(0x0032);
  Push(0x5d15); // pointer to %VAL
  _ex__3(); // !_3
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(cc__7); // 7
  Push(0x6403); // IFIELD(UNK_0xe946)
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  _dash_(); // -
  Push(0x5fb5); // pointer to E-USE
  _ex__3(); // !_3
  Push(0x6432); // IFIELD(UNK_0xeaeb)
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
  Push(0x000a);
  U_star_(); // U*
  Push(0x60ca); // pointer to 10*CARGO
  D_ex_(); // D!
  Push(0xc776);
  MODULE(); // MODULE
  Push(0x545f); // pointer to ?TV
  ON_3(); // ON_3
  Push(0x5c48); // pointer to ?RECALL
  OFF(); // OFF
  Push(0x5fb5); // pointer to E-USE
  Push(Read16(Pop())); // @
  Push(cc__7); // 7
  Push(0xbdd8);
  MODULE(); // MODULE
  if (Pop() == 0) goto label1;
  Push(Pop()>>1); // 2/

  label1:
  Push(0x559b); // pointer to -END
  _ex__3(); // !_3
  UNK_0xe9c9(); // UNK_0xe9c9
}


// ================================================
// 0xeba0: WORD 'UNK_0xeba2' codep=0x224c parp=0xeba2
// ================================================

void UNK_0xeba2() // UNK_0xeba2
{
  Push(0xd3dc);
  MODULE(); // MODULE
  if (Pop() == 0) return;
  UNK_0xeaf0(); // UNK_0xeaf0
  Push(0xd394);
  MODULE(); // MODULE
  Push(0xc5a8);
  MODULE(); // MODULE
  UNK_0xea0b(); // UNK_0xea0b
  Push(0x5e74); // pointer to STARDATE
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0xc7bd); // pointer to ?FANLYZ
  _ex__3(); // !_3
  Push(0x0030);
  OVER(); // OVER
  _st_(); // <
  Push(0x0085);
  ROT(); // ROT
  _st_(); // <
  Push(Pop() + Pop()); // +
  Push(0x0032);
  Push(Pop() * Pop()); // *
  Push(0x0064);
  Push(Pop() + Pop()); // +
  Push(0x001a);
  Push(0x548f); // pointer to FILE#
  _ex__3(); // !_3
  Push(cc__6); // 6
  Push(0x549d); // pointer to RECORD#
  _ex__3(); // !_3
  LoadData("ELEM-VAL"); // from 'ELEMENT     '
  _ex__3(); // !_3
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x1d29 parp=0xebfc
// ================================================
// 0xebfc: db 0x5e 0x00 '^ '

// ================================================
// 0xebfe: WORD '(|REGION)' codep=0xec0c parp=0xec0c
// ================================================
// 0xec0c: pop    word ptr [561C]
// 0xec10: pop    cx
// 0xec11: push   es
// 0xec12: mov    es,cx
// 0xec14: push   si
// 0xec15: push   di
// 0xec16: push   bp
// 0xec17: push   ds
// 0xec18: mov    dx,[5892]
// 0xec1c: shr    dx,1
// 0xec1e: shr    dx,1
// 0xec20: inc    dx
// 0xec21: inc    dx
// 0xec22: mov    bp,[586E]
// 0xec26: shr    bp,1
// 0xec28: xor    di,di
// 0xec2a: mov    ax,[5887]
// 0xec2e: mov    cx,ax
// 0xec30: mov    ax,cx
// 0xec32: pop    ds
// 0xec33: push   ds
// 0xec34: mov    bx,[5863]
// 0xec38: sub    bx,cx
// 0xec3a: inc    bx
// 0xec3b: shl    bx,1
// 0xec3d: add    bx,[563A]
// 0xec41: mov    si,[bx]
// 0xec43: add    si,bp
// 0xec45: mov    cx,dx
// 0xec47: mov    bx,[561C]
// 0xec4b: push   word ptr [5648]
// 0xec4f: pop    ds
// 0xec50: or     bx,bx
// 0xec52: jz     EC5A
// 0xec54: push   ds
// 0xec55: push   es
// 0xec56: pop    ds
// 0xec57: pop    es
// 0xec58: xchg   si,di
// 0xec5a: repz   
// 0xec5b: movsw
// 0xec5c: mov    cx,ax
// 0xec5e: or     bx,bx
// 0xec60: jz     EC68
// 0xec62: push   ds
// 0xec63: push   es
// 0xec64: pop    ds
// 0xec65: pop    es
// 0xec66: xchg   si,di
// 0xec68: loop   EC30
// 0xec6a: pop    ds
// 0xec6b: pop    bp
// 0xec6c: pop    di
// 0xec6d: pop    si
// 0xec6e: pop    es
// 0xec6f: lodsw
// 0xec70: mov    bx,ax
// 0xec72: jmp    word ptr [bx]

// ================================================
// 0xec74: WORD '|EGA' codep=0xec7d parp=0xec7d
// ================================================
// 0xec7d: pop    cx
// 0xec7e: push   ds
// 0xec7f: push   es
// 0xec80: push   di
// 0xec81: push   si
// 0xec82: mov    ax,[55E6]
// 0xec86: mov    dx,[55D8]
// 0xec8a: mov    bx,[EBFC]
// 0xec8e: add    bx,03
// 0xec91: shl    bx,1
// 0xec93: add    bx,[563A]
// 0xec97: mov    si,[bx]
// 0xec99: mov    di,si
// 0xec9b: test   cx,0001
// 0xec9f: jnz    ECA2
// 0xeca1: xchg   ax,dx
// 0xeca2: mov    es,ax
// 0xeca4: mov    ds,dx
// 0xeca6: mov    cx,02D0
// 0xeca9: call   8E32
// 0xecac: pop    si
// 0xecad: pop    di
// 0xecae: pop    es
// 0xecaf: pop    ds
// 0xecb0: lodsw
// 0xecb1: mov    bx,ax
// 0xecb3: jmp    word ptr [bx]

// ================================================
// 0xecb5: WORD '|REGION' codep=0x224c parp=0xecc1
// ================================================

void _v_REGION() // |REGION
{
  Push(0x5da3); // pointer to ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0x5648); // pointer to BUF-SEG
  Push(Read16(Pop())); // @
  Push(0xa000);
  _eq_(); // =
  if (Pop() == 0) goto label2;
  _v_EGA(); // |EGA
  goto label3;

  label2:
  Pop(); // DROP

  label3:
  return;

  label1:
  _ro__v_REGION_rc_(); // (|REGION)
}


// ================================================
// 0xeceb: WORD 'UNK_0xeced' codep=0x1d29 parp=0xeced
// ================================================
// 0xeced: db 0x00 0x00 '  '

// ================================================
// 0xecef: WORD 'UNK_0xecf1' codep=0x1d29 parp=0xecf1
// ================================================
// 0xecf1: db 0x07 0x7a 0x7e 0x44 0x54 0x5f 0x69 0x82 0x92 0x2e 0x32 0x42 0x57 0x38 0x43 0x15 0x24 0x38 0x40 0x76 0x87 0x5f 0x69 0x0d 0x15 0x57 0x63 0x48 0x50 ' z~DT_i  .2BW8C $8@v _i  WcHP'

// ================================================
// 0xed0e: WORD 'UNK_0xed10' codep=0x224c parp=0xed10
// ================================================

void UNK_0xed10() // UNK_0xed10
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Pop()*2); // 2*
  Push(0x0050);
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x00c7);
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  Push(Read16(regsp)); // DUP
  Push(Pop()-1); // 1-
  Push(Read8(Pop())&0xFF); // C@
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xed38: WORD 'UNK_0xed3a' codep=0x1d29 parp=0xed3a
// ================================================
// 0xed3a: db 0x07 0x00 0x46 0xa9 '  F '

// ================================================
// 0xed3e: WORD 'UNK_0xed40' codep=0x224c parp=0xed40
// ================================================

void UNK_0xed40() // UNK_0xed40
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xed3a); // pointer to UNK_0xed3a
  _2_at_(); // 2@
  D_gt_(); // D>
}


// ================================================
// 0xed4c: WORD 'UNK_0xed4e' codep=0x224c parp=0xed4e
// ================================================

void UNK_0xed4e() // UNK_0xed4e
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x9c40); Push(0x0000);
  D_plus_(); // D+
  Push(0xed3a); // pointer to UNK_0xed3a
  D_ex_(); // D!
}


// ================================================
// 0xed60: WORD 'UNK_0xed62' codep=0x224c parp=0xed62
// ================================================

void UNK_0xed62() // UNK_0xed62
{

  UNK_0x3f3b("PERSONNEL");
}


// ================================================
// 0xed70: WORD 'UNK_0xed72' codep=0x224c parp=0xed72
// ================================================

void UNK_0xed72() // UNK_0xed72
{

  UNK_0x3f3b("CREW ASSIGNMENT");
}


// ================================================
// 0xed86: WORD 'UNK_0xed88' codep=0x224c parp=0xed88
// ================================================

void UNK_0xed88() // UNK_0xed88
{

  UNK_0x3f3b("SHIP CONFIGURATION");
}


// ================================================
// 0xed9f: WORD 'UNK_0xeda1' codep=0x224c parp=0xeda1
// ================================================

void UNK_0xeda1() // UNK_0xeda1
{

  UNK_0x3f3b("TRADE DEPOT");
}


// ================================================
// 0xedb1: WORD 'UNK_0xedb3' codep=0x224c parp=0xedb3
// ================================================

void UNK_0xedb3() // UNK_0xedb3
{

  UNK_0x3f3b("BANK");
}


// ================================================
// 0xedbc: WORD 'UNK_0xedbe' codep=0x224c parp=0xedbe
// ================================================

void UNK_0xedbe() // UNK_0xedbe
{

  UNK_0x3f3b("OPERATIONS");
}


// ================================================
// 0xedcd: WORD 'UNK_0xedcf' codep=0x224c parp=0xedcf
// ================================================

void UNK_0xedcf() // UNK_0xedcf
{

  UNK_0x3f3b("DOCKING BAY");
}


// ================================================
// 0xeddf: WORD 'UNK_0xede1' codep=0x224c parp=0xede1
// ================================================

void UNK_0xede1() // UNK_0xede1
{
  Push(0x00c7);
  Push(0x002c);
  Push(0x00c0);
  Push(0x0072);
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  Push(0); // 0
  Push(0); // 0
}


// ================================================
// 0xedfb: WORD '(.DOOR)' codep=0x4a4f parp=0xee07
// ================================================
// 0xee07: db 0x07 0x00 0xe1 0xed 0x01 0x00 0x62 0xed 0x02 0x00 0x72 0xed 0x03 0x00 0x88 0xed 0x04 0x00 0xa1 0xed 0x05 0x00 0xb3 0xed 0x06 0x00 0xbe 0xed 0x07 0x00 0xcf 0xed '      b   r                     '

// ================================================
// 0xee27: WORD 'UNK_0xee29' codep=0x224c parp=0xee29
// ================================================

void UNK_0xee29() // UNK_0xee29
{
  _at_CRS(); // @CRS
  Push(0xeced); // pointer to UNK_0xeced
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // (.DOOR)
  {
  case 1:
    UNK_0xed62(); // UNK_0xed62
    break;
  case 2:
    UNK_0xed72(); // UNK_0xed72
    break;
  case 3:
    UNK_0xed88(); // UNK_0xed88
    break;
  case 4:
    UNK_0xeda1(); // UNK_0xeda1
    break;
  case 5:
    UNK_0xedb3(); // UNK_0xedb3
    break;
  case 6:
    UNK_0xedbe(); // UNK_0xedbe
    break;
  case 7:
    UNK_0xedcf(); // UNK_0xedcf
    break;
  default:
    UNK_0xede1(); // UNK_0xede1
    break;

  }
  UNK_0xed10(); // UNK_0xed10
  _ex_CRS(); // !CRS
}


// ================================================
// 0xee37: WORD 'UNK_0xee39' codep=0x224c parp=0xee39
// ================================================

void UNK_0xee39() // UNK_0xee39
{
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(0xecf1); // pointer to UNK_0xecf1
  Push(Pop()+1); // 1+
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  WITHIN(); // WITHIN
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  R_gt_(); // R>
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xee6d: WORD 'UNK_0xee6f' codep=0x224c parp=0xee6f
// ================================================

void UNK_0xee6f() // UNK_0xee6f
{
  Push(0xeced); // pointer to UNK_0xeced
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0xecf1); // pointer to UNK_0xecf1
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xee39(); // UNK_0xee39
  if (Pop() == 0) goto label2;
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(0xeced); // pointer to UNK_0xeced
  _ex__3(); // !_3
  UNK_0xee29(); // UNK_0xee29
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffea

  return;

  label1:
  Push(0xeced); // pointer to UNK_0xeced
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  UNK_0xee39(); // UNK_0xee39
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(0xeced); // pointer to UNK_0xeced
  OFF(); // OFF
  UNK_0xee29(); // UNK_0xee29
}


// ================================================
// 0xeeb3: WORD 'UNK_0xeeb5' codep=0x1d29 parp=0xeeb5
// ================================================
// 0xeeb5: db 0x11 0x7d 0x7d 0x3f 0x60 0x7d 0x00 0x02 0x7d 0x77 0x60 0x71 0x9e 0x00 0x03 0x77 0x6a 0x71 0x87 0xb9 0x00 0x03 0x6a 0x59 0x87 0x93 0x29 0x01 0x03 0x59 0x4c 0x93 0x8e 0xdb 0xfe 0x01 0x4c 0x3d 0x8e 0x7e 0xc7 0xff 0x01 0x3d 0x33 0x7e 0x6d 0xf3 0xff 0x01 0x33 0x2e 0x6d 0x54 0x1e 0x00 0x01 0x2e 0x2e 0x54 0x46 0x2e 0x00 0x00 0x2e 0x36 0x46 0x24 0x3e 0x00 0x00 0x36 0x3c 0x24 0x1a 0x4b 0x00 0x00 0x3c 0x4a 0x1a 0x0c 0x56 0x00 0x00 0x4a 0x56 0x0c 0x06 0x62 0x00 0x00 0x56 0x62 0x06 0x0c 0x4a 0x00 0x02 0x62 0x6f 0x0c 0x19 0x56 0x00 0x02 0x6f 0x77 0x19 0x2a 0x64 0x00 0x02 0x77 0x7d 0x2a 0x3f 0x6b 0x00 0x02 ' }}?`}  }w`q   wjq    jY  )  YL     L= ~   =3~m   3.mT   ..TF.  .6F$>  6<$ K  <J  V  JV  b  Vb  J  bo  V  ow *d  w}*?k  '

// ================================================
// 0xef2d: WORD 'UNK_0xef2f' codep=0x224c parp=0xef2f
// ================================================

void UNK_0xef2f() // UNK_0xef2f
{
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) goto label1;
  _star__slash_(); // */
  return;

  label1:
  Pop(); Pop();// 2DROP
  Push(0); // 0
}


// ================================================
// 0xef41: WORD 'UNK_0xef43' codep=0x224c parp=0xef43
// ================================================

void UNK_0xef43() // UNK_0xef43
{
  _gt_R(); // >R
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  R_gt_(); // R>
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  _dash_(); // -
}


// ================================================
// 0xef63: WORD 'UNK_0xef65' codep=0x224c parp=0xef65
// ================================================

void UNK_0xef65() // UNK_0xef65
{
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  _eq_(); // =
}


// ================================================
// 0xef73: WORD 'UNK_0xef75' codep=0x224c parp=0xef75
// ================================================

void UNK_0xef75() // UNK_0xef75
{
  _gt_R(); // >R
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  R_gt_(); // R>
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  MIN(); // MIN
  return;

  label1:
  MAX(); // MAX
}


// ================================================
// 0xef9b: WORD 'UNK_0xef9d' codep=0x224c parp=0xef9d
// ================================================

void UNK_0xef9d() // UNK_0xef9d
{
  _gt_R(); // >R
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(h); // I
  UNK_0xef43(); // UNK_0xef43
  SWAP(); // SWAP
  UNK_0xef2f(); // UNK_0xef2f
  R_gt_(); // R>
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  MIN(); // MIN
  return;

  label1:
  MAX(); // MAX
}


// ================================================
// 0xefd3: WORD 'UNK_0xefd5' codep=0x224c parp=0xefd5
// ================================================

void UNK_0xefd5() // UNK_0xefd5
{
  _gt_R(); // >R
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
  R_gt_(); // R>
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  MIN(); // MIN
  return;

  label1:
  MAX(); // MAX
}


// ================================================
// 0xeff9: WORD 'UNK_0xeffb' codep=0x224c parp=0xeffb
// ================================================

void UNK_0xeffb() // UNK_0xeffb
{
  _gt_R(); // >R
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  Push(h); // I
  UNK_0xef43(); // UNK_0xef43
  UNK_0xef2f(); // UNK_0xef2f
  Push(h); // I
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  R_gt_(); // R>
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  MIN(); // MIN
  return;

  label1:
  MAX(); // MAX
}


// ================================================
// 0xf02f: WORD 'UNK_0xf031' codep=0x224c parp=0xf031
// ================================================

void UNK_0xf031() // UNK_0xf031
{
  Push(Read16(regsp)); // DUP
  Push(Pop()+2); // 2+
  UNK_0xef65(); // UNK_0xef65
  if (Pop() == 0) goto label1;
  UNK_0xef75(); // UNK_0xef75
  goto label2;

  label1:
  UNK_0xef9d(); // UNK_0xef9d

  label2:
  Push(0x586e); // pointer to XBLT
  _ex__3(); // !_3
}


// ================================================
// 0xf049: WORD 'UNK_0xf04b' codep=0x224c parp=0xf04b
// ================================================

void UNK_0xf04b() // UNK_0xf04b
{
  Push(Read16(regsp)); // DUP
  UNK_0xef65(); // UNK_0xef65
  if (Pop() == 0) goto label1;
  UNK_0xefd5(); // UNK_0xefd5
  goto label2;

  label1:
  UNK_0xeffb(); // UNK_0xeffb

  label2:
  Push(0x5863); // pointer to YBLT
  _ex__3(); // !_3
}


// ================================================
// 0xf061: WORD 'UNK_0xf063' codep=0x224c parp=0xf063
// ================================================

void UNK_0xf063() // UNK_0xf063
{
  _gt_R(); // >R
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
  Push(h); // I
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  MIN(); // MIN
  Push(h); // I
  Push(Read8(Pop())&0xFF); // C@
  R_gt_(); // R>
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  MAX(); // MAX
  Push(Pop()+1); // 1+
  WITHIN(); // WITHIN
}


// ================================================
// 0xf083: WORD 'UNK_0xf085' codep=0x224c parp=0xf085
// ================================================

void UNK_0xf085() // UNK_0xf085
{
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  UNK_0xf063(); // UNK_0xf063
}


// ================================================
// 0xf08f: WORD 'UNK_0xf091' codep=0x224c parp=0xf091
// ================================================

void UNK_0xf091() // UNK_0xf091
{
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(Pop()+2); // 2+
  UNK_0xf063(); // UNK_0xf063
}


// ================================================
// 0xf09d: WORD 'UNK_0xf09f' codep=0x1d29 parp=0xf09f
// ================================================
// 0xf09f: db 0x00 0x00 '  '

// ================================================
// 0xf0a1: WORD 'UNK_0xf0a3' codep=0x1d29 parp=0xf0a3
// ================================================
// 0xf0a3: db 0xff 0xff '  '

// ================================================
// 0xf0a5: WORD 'UNK_0xf0a7' codep=0x1d29 parp=0xf0a7
// ================================================
// 0xf0a7: db 0x00 0x03 0x03 0x00 0x02 0x05 0x00 0x02 0x02 0xff 0x03 0x03 '            '

// ================================================
// 0xf0b3: WORD 'UNK_0xf0b5' codep=0x1d29 parp=0xf0b5
// ================================================
// 0xf0b5: db 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x3e 0xba 0x05 0x0a 0xc0 0x06 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x1d 0xba 0x04 0x0a 0x00 0x02 0x1f 0x1c 0x84 0x08 0xc0 0x41 0xf8 0x00 0x5c 0xba 0x01 0x0a 0x80 0x00 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x70 0x00 0x2d 0x54 0x0d 0x06 0xc0 0x04 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x20 0x00 0x1c 0x30 0x06 0x04 0x80 0x01 0x1f 0x1c 0x07 0x0e 0xe0 0x01 0x20 0x00 0x18 0x30 0x02 0x04 0x80 0x01 0x1f 0x1c 0x87 0x0f 0xc0 0xc1 0xf8 0x00 0x1d 0xba 0x04 0x0a 0x00 0x02 0x1f 0x1c 0x87 0x0f 0xc0 0xc1 0xf8 0x00 0x5c 0xba 0x01 0x0a 0x80 0x00 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x70 0x00 0x5a 0x54 0x05 0x0c 0x40 0x86 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x20 0x00 0x1c 0x18 0x03 0x04 0x00 0x03 0x1f 0x1c 0x81 0x03 0xc0 0xc3 0x20 0x00 0x0c 0x18 0x02 0x04 0x00 0x03 '     A  >          A             A  \           p -T             0             0                          \           p ZT  @                             '

// ================================================
// 0xf14f: WORD 'UNK_0xf151' codep=0x1d29 parp=0xf151
// ================================================
// 0xf151: db 0xc4 0x00 0x02 0x03 0x1e 0x01 0x01 0x04 0x14 0x00 0x00 0x05 0xe2 0xff 0x01 0x04 0x3c 0x00 0x02 0x03 0xc4 0x00 0xfe 0x08 0x1e 0x01 0xff 0x09 0x14 0x00 0x00 0x0a 0xe2 0xff 0xff 0x09 0x3c 0x00 0xfe 0x08 0x9c 0x03 0x00 0x06 0x9c 0x03 0x00 0x07 0x9c 0xfd 0x00 0x01 0x9c 0xfd 0x00 0x02 '                <                   <                   '

// ================================================
// 0xf189: WORD 'UNK_0xf18b' codep=0x224c parp=0xf18b
// ================================================

void UNK_0xf18b() // UNK_0xf18b
{
  Push(0xf0b5); // pointer to UNK_0xf0b5
  Push(0x000c);
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x8040);
  Push(Pop() ^ Pop()); // XOR
  Push(0xf0b5); // pointer to UNK_0xf0b5
  Push(0x000c);
  Push(Pop() + Pop()); // +
  _ex__3(); // !_3
}


// ================================================
// 0xf1a7: WORD 'UNK_0xf1a9' codep=0x224c parp=0xf1a9
// ================================================

void UNK_0xf1a9() // UNK_0xf1a9
{
  _at_CRS(); // @CRS
  Push(0xf0a7); // pointer to UNK_0xf0a7
  Push(0xf09f); // pointer to UNK_0xf09f
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(Read16(regsp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  _ex_COLOR(); // !COLOR
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x5892); // pointer to WBLT
  _ex__3(); // !_3
  Push(Pop()+2); // 2+
  Push(Read8(Pop())&0xFF); // C@
  Push(0x586e); // pointer to XBLT
  _plus__ex_(); // +!
  Push(cc__dash_2); // -2
  Push(0x5863); // pointer to YBLT
  _plus__ex_(); // +!
  Push(2); // 2
  Push(0x5887); // pointer to LBLT
  _ex__3(); // !_3
  Push(0xf0a3); // pointer to UNK_0xf0a3
  Push(0x589d); // pointer to ABLT
  _ex__3(); // !_3
  _co_BLT_cc_(); // {BLT}
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf1e7: WORD 'UNK_0xf1e9' codep=0x224c parp=0xf1e9
// ================================================

void UNK_0xf1e9() // UNK_0xf1e9
{
  _at_DS(); // @DS
  Push(0x58aa); // pointer to BLTSEG
  _ex__3(); // !_3
  Push(cc__9); // 9
  Push(0x5892); // pointer to WBLT
  _ex__3(); // !_3
  Push(0x000c);
  Push(0x5887); // pointer to LBLT
  _ex__3(); // !_3
  CTINIT(); // CTINIT
  Push(0xf0b5); // pointer to UNK_0xf0b5
  Push(0x589d); // pointer to ABLT
  _ex__3(); // !_3
  Push(0xea6b); // pointer to UNK_0xea6b
  Push(Read16(Pop())); // @
  Push(0xea6f); // pointer to UNK_0xea6f
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0xebfc); // pointer to UNK_0xebfc
  _ex__3(); // !_3
  POS_dot_(); // POS.
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  Push(0); // 0
  _v_REGION(); // |REGION
  _co_BLT_cc_(); // {BLT}
  Push(0xf09f); // pointer to UNK_0xf09f
  OFF(); // OFF
  UNK_0xf1a9(); // UNK_0xf1a9
}


// ================================================
// 0xf229: WORD 'UNK_0xf22b' codep=0x224c parp=0xf22b
// ================================================

void UNK_0xf22b() // UNK_0xf22b
{
  Push(0); // 0
  Push(0x03e8);
  Push(1); // 1
  _gt_SND(); // >SND
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  Push(0xea73); // pointer to UNK_0xea73
  OFF(); // OFF
  Push(0xeeb5); // pointer to UNK_0xeeb5
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0xeeb5); // pointer to UNK_0xeeb5
  Push(Pop()+1); // 1+
  Push(i); // I
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(i); // I
  UNK_0xf085(); // UNK_0xf085
  Push(Pop()*2); // 2*
  Push(i); // I
  UNK_0xf091(); // UNK_0xf091
  Push(Pop() + Pop()); // +
  Push(Read16(regsp)); // DUP
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  Push(0xea77); // pointer to UNK_0xea77
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(i); // I
  UNK_0xf031(); // UNK_0xf031

  label1:
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  Push(0xea7b); // pointer to UNK_0xea7b
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(i); // I
  UNK_0xf04b(); // UNK_0xf04b

  label2:
  R_gt_(); // R>
  Pop(); // DROP
  Push(cc__7); // 7
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffbc

}


// ================================================
// 0xf291: WORD 'UNK_0xf293' codep=0x224c parp=0xf293
// ================================================

void UNK_0xf293() // UNK_0xf293
{
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  Push(1); // 1
  _v_REGION(); // |REGION
}


// ================================================
// 0xf29f: WORD 'UNK_0xf2a1' codep=0x224c parp=0xf2a1
// ================================================

void UNK_0xf2a1() // UNK_0xf2a1
{
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  Push(0); // 0
  _v_REGION(); // |REGION
  _co_BLT_cc_(); // {BLT}
  UNK_0xf1a9(); // UNK_0xf1a9
}


// ================================================
// 0xf2b1: WORD 'UNK_0xf2b3' codep=0x224c parp=0xf2b3
// ================================================

void UNK_0xf2b3() // UNK_0xf2b3
{
  Push(0x000e);
  Push(Pop() * Pop()); // *
  Push(0xf0b5); // pointer to UNK_0xf0b5
  Push(Pop() + Pop()); // +
  Push(0x589d); // pointer to ABLT
  _ex__3(); // !_3
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  _2SWAP(); // 2SWAP
  Push(0x586e); // pointer to XBLT
  _plus__ex_(); // +!
  Push(0x5863); // pointer to YBLT
  _plus__ex_(); // +!
  UNK_0xf239(); // UNK_0xf239
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  _2SWAP(); // 2SWAP
  POS_dot_(); // POS.
  Push(Read16(regsp)); // DUP
  Push(0xebfc); // pointer to UNK_0xebfc
  _ex__3(); // !_3
  DISPLAY(); // DISPLAY
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  UNK_0xf293(); // UNK_0xf293
  POS_dot_(); // POS.
  UNK_0xf2a1(); // UNK_0xf2a1
  Push(Read16(regsp)); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label1;
  UNK_0xf22b(); // UNK_0xf22b

  label1:
  ABS(); // ABS
  Push(cc__3); // 3
  Push(cc__4); // 4
  _star__slash_(); // */
  MS(); // MS
}


// ================================================
// 0xf309: WORD 'UNK_0xf30b' codep=0x224c parp=0xf30b
// ================================================

void UNK_0xf30b() // UNK_0xf30b
{
  UNK_0xed4e(); // UNK_0xed4e
  Push(0xf09f); // pointer to UNK_0xf09f
  _ex__3(); // !_3
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0xf151); // pointer to UNK_0xf151
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(i); // I
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(i); // I
  _plus__dash__at_(); // +-@
  Push(i); // I
  Push(Pop()+1); // 1+
  _plus__dash__at_(); // +-@
  Push(i); // I
  Push(Pop()+2); // 2+
  _plus__dash__at_(); // +-@
  R_gt_(); // R>
  Push(cc__3); // 3
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  UNK_0xf2b3(); // UNK_0xf2b3
  i++;
  } while(i<imax); // (LOOP) 0xffd4

  Pop(); // DROP
  UNK_0xee6f(); // UNK_0xee6f
}


// ================================================
// 0xf349: WORD 'UNK_0xf34b' codep=0x224c parp=0xf34b
// ================================================

void UNK_0xf34b() // UNK_0xf34b
{
  Push(cc__dash_1); // -1
  Push(0xea77); // pointer to UNK_0xea77
  _ex__3(); // !_3
  Push(0); // 0
  Push(cc__5); // 5
  Push(1); // 1
  UNK_0xf30b(); // UNK_0xf30b
  Push(0xea77); // pointer to UNK_0xea77
  OFF(); // OFF
}


// ================================================
// 0xf35f: WORD 'UNK_0xf361' codep=0x224c parp=0xf361
// ================================================

void UNK_0xf361() // UNK_0xf361
{
  Push(cc__dash_1); // -1
  Push(0xea77); // pointer to UNK_0xea77
  _ex__3(); // !_3
  Push(0x0014);
  Push(cc__5); // 5
  Push(2); // 2
  UNK_0xf30b(); // UNK_0xf30b
  Push(0xea77); // pointer to UNK_0xea77
  OFF(); // OFF
}


// ================================================
// 0xf377: WORD 'UNK_0xf379' codep=0x224c parp=0xf379
// ================================================

void UNK_0xf379() // UNK_0xf379
{
  Push(cc__dash_1); // -1
  Push(0xea7b); // pointer to UNK_0xea7b
  _ex__3(); // !_3
  Push(0x0028);
  Push(2); // 2
  Push(cc__3); // 3
  UNK_0xf30b(); // UNK_0xf30b
  Push(0xea7b); // pointer to UNK_0xea7b
  OFF(); // OFF
}


// ================================================
// 0xf38f: WORD 'UNK_0xf391' codep=0x224c parp=0xf391
// ================================================

void UNK_0xf391() // UNK_0xf391
{
  Push(cc__dash_1); // -1
  Push(0xea7b); // pointer to UNK_0xea7b
  _ex__3(); // !_3
  Push(0x0030);
  Push(2); // 2
  Push(0); // 0
  UNK_0xf30b(); // UNK_0xf30b
  Push(0xea7b); // pointer to UNK_0xea7b
  OFF(); // OFF
}


// ================================================
// 0xf3a7: WORD 'UNK_0xf3a9' codep=0x224c parp=0xf3a9
// ================================================

void UNK_0xf3a9() // UNK_0xf3a9
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(0x589d); // pointer to ABLT
  Push(Read16(Pop())); // @
  Push(0xf0b5); // pointer to UNK_0xf0b5
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(0x05dc);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xed40(); // UNK_0xed40
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Push(cc__4); // 4
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  UNK_0xf18b(); // UNK_0xf18b
  DISPLAY(); // DISPLAY
  UNK_0xf293(); // UNK_0xf293
  UNK_0xf2a1(); // UNK_0xf2a1
  Push(0x0032);
  MS(); // MS
  UNK_0xf18b(); // UNK_0xf18b
  DISPLAY(); // DISPLAY
  UNK_0xf293(); // UNK_0xf293
  UNK_0xf2a1(); // UNK_0xf2a1
  UNK_0xf22b(); // UNK_0xf22b
  Push(0x0096);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffe0


  label2:
  return;

  label1:
  Push(0xf09f); // pointer to UNK_0xf09f
  OFF(); // OFF
  Push2Words("NULL");
  Push2Words("NULL");
  UNK_0xf2b3(); // UNK_0xf2b3
}


// ================================================
// 0xf403: WORD 'PORT-PIC' codep=0x224c parp=0xf410
// ================================================

void PORT_dash_PIC() // PORT-PIC
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0); // 0
  Push(0x00c7);
  POS_dot_(); // POS.
  Push(0x002c);
  Push(0xbe9d);
  MODULE(); // MODULE
  Push(0); // 0
  Push(0x0063);
  POS_dot_(); // POS.
  Push(0x0031);
  Push(0xbe9d);
  MODULE(); // MODULE
  Push(0x5da3); // pointer to ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  UNK_0xf1e9(); // UNK_0xf1e9

  label1:
  UNK_0xede1(); // UNK_0xede1
  Pop(); Pop();// 2DROP
  UNK_0xee29(); // UNK_0xee29
  _gt_DISPLAY(); // >DISPLAY
  SCR_dash_RES(); // SCR-RES
  Push(0x5da3); // pointer to ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  UNK_0xf1e9(); // UNK_0xf1e9
}


// ================================================
// 0xf45a: WORD 'DO-ROOM' codep=0x4a4f parp=0xf466
// ================================================
// 0xf466: db 0x07 0x00 0x48 0x3a 0x01 0x00 0x91 0xea 0x02 0x00 0xa1 0xea 0x03 0x00 0xc1 0xea 0x04 0x00 0xd1 0xea 0x05 0x00 0xb1 0xea 0x06 0x00 0xe1 0xea 0x07 0x00 0xa2 0xeb '  H:                            '

// ================================================
// 0xf486: WORD 'UNK_0xf488' codep=0x224c parp=0xf488
// ================================================

void UNK_0xf488() // UNK_0xf488
{
  Push(0x586e); // pointer to XBLT
  Push(Read16(Pop())); // @
  Push(0xea6b); // pointer to UNK_0xea6b
  _ex__3(); // !_3
  Push(0x5863); // pointer to YBLT
  Push(Read16(Pop())); // @
  Push(0xea6f); // pointer to UNK_0xea6f
  _ex__3(); // !_3
  Push(0xeced); // pointer to UNK_0xeced
  Push(Read16(Pop())); // @
  Pop();
  switch(Pop()) // DO-ROOM
  {
  case 1:
    UNK_0xea91(); // UNK_0xea91
    break;
  case 2:
    UNK_0xeaa1(); // UNK_0xeaa1
    break;
  case 3:
    UNK_0xeac1(); // UNK_0xeac1
    break;
  case 4:
    UNK_0xead1(); // UNK_0xead1
    break;
  case 5:
    UNK_0xeab1(); // UNK_0xeab1
    break;
  case 6:
    UNK_0xeae1(); // UNK_0xeae1
    break;
  case 7:
    UNK_0xeba2(); // UNK_0xeba2
    break;
  default:
    NOP(); // NOP
    break;

  }
  Push(0xeced); // pointer to UNK_0xeced
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  PORT_dash_PIC(); // PORT-PIC
  UNK_0xed4e(); // UNK_0xed4e
}


// ================================================
// 0xf4ac: WORD 'XWALK' codep=0x4a4f parp=0xf4b6
// ================================================
// 0xf4b6: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x4b 0xf3 0xff 0xff 0x61 0xf3 '  H:  K   a '

// ================================================
// 0xf4c2: WORD 'YWALK' codep=0x4a4f parp=0xf4cc
// ================================================
// 0xf4cc: db 0x02 0x00 0x48 0x3a 0x01 0x00 0x79 0xf3 0xff 0xff 0x91 0xf3 '  H:  y     '

// ================================================
// 0xf4d8: WORD 'WALKIES' codep=0x224c parp=0xf4e4
// ================================================
// entry

void WALKIES() // WALKIES
{
  UNK_0xed4e(); // UNK_0xed4e
  PORT_dash_PIC(); // PORT-PIC

  label3:
  XYSCAN(); // XYSCAN
  _2DUP(); // 2DUP
  Pop();
  switch(Pop()) // XWALK
  {
  case 1:
    UNK_0xf34b(); // UNK_0xf34b
    break;
  case 65535:
    UNK_0xf361(); // UNK_0xf361
    break;
  default:
    NOP(); // NOP
    break;

  }
  Pop();
  switch(Pop()) // YWALK
  {
  case 1:
    UNK_0xf379(); // UNK_0xf379
    break;
  case 65535:
    UNK_0xf391(); // UNK_0xf391
    break;
  default:
    NOP(); // NOP
    break;

  }
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf3a9(); // UNK_0xf3a9

  label1:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label2;
  UNK_0xf488(); // UNK_0xf488
  _i_KEY(); // 'KEY
  Pop(); // DROP

  label2:
  goto label3;
}

// 0xf50c: db 0x50 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x50 0x4f 0x52 0x54 0x4d 0x45 0x4e 0x55 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x5f 0x32 0x31 0x39 0x30 0x72 0x20 0x43 0x48 0x4b 0x46 0x4c 0x49 0x47 0x48 0x54 0x2d 0x4f 0x56 0x20 0x2d 0x00 'PM-VOC__________________________for PORTMENU----------------- )_2190r CHKFLIGHT-OV - '
  