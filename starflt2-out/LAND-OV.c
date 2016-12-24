// ====== OVERLAY 'LAND-OV' ======
// store offset = 0xf190
// overlay size   = 0x03d0

#include"../emul/cpu.h"
#include"../emul/starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xb29b C-string:'UNK_0x3f09'
// 1870:      UNK_0xf1a6  codep:0x7420 parp:0xf1a6 size:0x0003 C-string:'UNK_0xf1a6'
// 1871:      UNK_0xf1ab  codep:0x7394 parp:0xf1ab size:0x0006 C-string:'UNK_0xf1ab'
// 1872:      UNK_0xf1b3  codep:0x1d29 parp:0xf1b3 size:0x0002 C-string:'UNK_0xf1b3'
// 1873:      UNK_0xf1b7  codep:0x224c parp:0xf1b7 size:0x002e C-string:'UNK_0xf1b7'
// 1874:      UNK_0xf1e7  codep:0x224c parp:0xf1e7 size:0x0050 C-string:'UNK_0xf1e7'
// 1875:      UNK_0xf239  codep:0x224c parp:0xf239 size:0x0010 C-string:'UNK_0xf239'
// 1876:      UNK_0xf24b  codep:0x224c parp:0xf24b size:0x0014 C-string:'UNK_0xf24b'
// 1877:      UNK_0xf261  codep:0x224c parp:0xf261 size:0x0065 C-string:'UNK_0xf261'
// 1878:      UNK_0xf2c8  codep:0x224c parp:0xf2c8 size:0x00d2 C-string:'UNK_0xf2c8'
// 1879:      UNK_0xf39c  codep:0x224c parp:0xf39c size:0x0014 C-string:'UNK_0xf39c'
// 1880:      UNK_0xf3b2  codep:0x224c parp:0xf3b2 size:0x0037 C-string:'UNK_0xf3b2'
// 1881:      UNK_0xf3eb  codep:0x224c parp:0xf3eb size:0x0020 C-string:'UNK_0xf3eb'
// 1882:      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0037 C-string:'UNK_0xf40d'
// 1883:      UNK_0xf446  codep:0x224c parp:0xf446 size:0x000a C-string:'UNK_0xf446'
// 1884:      UNK_0xf452  codep:0x224c parp:0xf452 size:0x004c C-string:'UNK_0xf452'
// 1885:      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x002c C-string:'UNK_0xf4a0'
// 1886:      UNK_0xf4ce  codep:0x224c parp:0xf4ce size:0x0036 C-string:'UNK_0xf4ce'
// 1887:           ?LAND  codep:0x224c parp:0xf50e size:0x0018 C-string:'_ask_LAND'
// 1888:         ?LAUNCH  codep:0x224c parp:0xf532 size:0x0000 C-string:'_ask_LAUNCH'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf1b3[2] = {0x00, 0x00}; // UNK_0xf1b3



// 0xf1a2: db 0x3c 0x00 '< '

// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x7420 parp=0xf1a6
// ================================================
// 0xf1a6: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xf1a9: WORD 'UNK_0xf1ab' codep=0x7394 parp=0xf1ab
// ================================================
// 0xf1ab: db 0x20 0x02 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xf1b1: WORD 'UNK_0xf1b3' codep=0x1d29 parp=0xf1b3
// ================================================
// 0xf1b3: db 0x00 0x00 '  '

// ================================================
// 0xf1b5: WORD 'UNK_0xf1b7' codep=0x224c parp=0xf1b7
// ================================================

void UNK_0xf1b7() // UNK_0xf1b7
{
  Push(0x64b1); // pointer to (PLANET
  _at__gt_C_plus_S(); // @>C+S
  LoadData("UNK_0xf1ab"); // from 'PLANET      '
  Push(Read16(Pop())); // @
  Push(Read16(regsp)); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0320);
  _dash_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0320);
  Push(Pop() + Pop()); // +

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1e5: WORD 'UNK_0xf1e7' codep=0x224c parp=0xf1e7
// ================================================

void UNK_0xf1e7() // UNK_0xf1e7
{
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  Push(0x65ec); // IFIELD(INST-QT)
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(0xf1b3); // pointer to UNK_0xf1b3
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf1b7(); // UNK_0xf1b7
  Push(0x0028);
  _slash_(); // /
  SWAP(); // SWAP
  OVER(); // OVER
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(0x65ec); // IFIELD(INST-QT)
  _ex__2(); // !_2

  label2:
  CDROP(); // CDROP
  goto label3;

  label1:
  Push(0); // 0

  label3:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  SetColor("YELLOW");
  Push(0x4fa9);
  _ex__2(); // !_2
  CTERASE(); // CTERASE
}


// ================================================
// 0xf249: WORD 'UNK_0xf24b' codep=0x224c parp=0xf24b
// ================================================

void UNK_0xf24b() // UNK_0xf24b
{
  Push(0xf1b3); // pointer to UNK_0xf1b3
  ON_2(); // ON_2
  UNK_0xf1e7(); // UNK_0xf1e7
  Pop(); // DROP
  Push(0xf1b3); // pointer to UNK_0xf1b3
  _099(); // 099
  Push(0xb6ec);
  MODULE(); // MODULE
}


// ================================================
// 0xf25f: WORD 'UNK_0xf261' codep=0x224c parp=0xf261
// ================================================

void UNK_0xf261() // UNK_0xf261
{
  CTINIT(); // CTINIT
  UNK_0xf239(); // UNK_0xf239

  UNK_0x3f09("CAPTAIN, THE SHIP IS BEING CRUSHED BY");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR

  UNK_0x3f09("EXTREME GRAVITY. THE ...");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(0x1388);
  Push(0x03e8);
  Push(1); // 1
  _gt_SND(); // >SND
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2
}


// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x224c parp=0xf2c8
// ================================================

void UNK_0xf2c8() // UNK_0xf2c8
{
  CTINIT(); // CTINIT
  UNK_0xf239(); // UNK_0xf239
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  _i_KEY(); // 'KEY
  Pop(); // DROP

  label1:
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR

  UNK_0x3f09("EMERGENCY LOCATOR TRANSMISSION:");
  _dot_TTY(); // .TTY

  UNK_0x3f09(" STARSHIP ISS ");
  _dot_TTY(); // .TTY
  Push(0x6615); // IFIELD(UNK_0xf1a6)
  COUNT(); // COUNT
  Exec(TYPE); // call of word 0x2690 '(TYPE)'

  UNK_0x3f09(" CRASHED ON PLANET ");
  _dot_TTY(); // .TTY
  Push(0x64a1); // pointer to (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ec); // IFIELD(INST-QT)
  _ask_(); // ?
  ICLOSE(); // ICLOSE

  UNK_0x3f09(" IN SYSTEM ");
  _dot_TTY(); // .TTY
  Push(0x6491); // pointer to (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  Push(0x65ee); // IFIELD(INST-X)
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  PRINT(",", 1); // (.")
  Push(0x65f0); // IFIELD(INST-Y)
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  ICLOSE(); // ICLOSE

  UNK_0x3f09("NO SURVIVORS");
  _dot_TTY(); // .TTY
  TTY_dash_SCR(); // TTY-SCR
  TTY_dash_SCR(); // TTY-SCR
  Push(0x1388);
  Push(cc__3); // 3
  Push(0x0032);
  Push(0x03e8);
  Push(2); // 2
  _gt_SND(); // >SND
  _i_KEY(); // 'KEY
  if (Pop() == 0) goto label1;
  BYE_2(); // BYE_2
}


// ================================================
// 0xf39a: WORD 'UNK_0xf39c' codep=0x224c parp=0xf39c
// ================================================

void UNK_0xf39c() // UNK_0xf39c
{
  UNK_0xf1e7(); // UNK_0xf1e7
  Push(0x0140);
  MIN(); // MIN
  Push(0x0028);
  Push(Pop() * Pop()); // *
  UNK_0xf1b7(); // UNK_0xf1b7
  _st_(); // <
}


// ================================================
// 0xf3b0: WORD 'UNK_0xf3b2' codep=0x224c parp=0xf3b2
// ================================================

void UNK_0xf3b2() // UNK_0xf3b2
{
  UNK_0xf39c(); // UNK_0xf39c
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f09("INSUFFICIENT FUEL FOR SAFE LANDING");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf3e9: WORD 'UNK_0xf3eb' codep=0x224c parp=0xf3eb
// ================================================

void UNK_0xf3eb() // UNK_0xf3eb
{
  UNK_0xf1e7(); // UNK_0xf1e7
  Push(0x0140);
  MIN(); // MIN
  Push(Read16(regsp)); // DUP
  Push(0x5c2c); // pointer to CONTEXT_3
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0014);
  Push(Pop() * Pop()); // *
  UNK_0xf1b7(); // UNK_0xf1b7
  _st_(); // <
}


// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  UNK_0xf3eb(); // UNK_0xf3eb
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f09("INSUFFICIENT FUEL FOR RE-LAUNCHING");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf444: WORD 'UNK_0xf446' codep=0x224c parp=0xf446
// ================================================

void UNK_0xf446() // UNK_0xf446
{
  UNK_0xf1b7(); // UNK_0xf1b7
  Push(0x031f);
  _gt_(); // >
}


// ================================================
// 0xf450: WORD 'UNK_0xf452' codep=0x224c parp=0xf452
// ================================================

void UNK_0xf452() // UNK_0xf452
{
  UNK_0xf446(); // UNK_0xf446
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE

  UNK_0x3f09("THIS PLANET'S GRAVITY WILL CRUSH THE");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  CTCR(); // CTCR

  UNK_0x3f09("SHIP'S HULL.");
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  BEEP(); // BEEP
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  UNK_0xf39c(); // UNK_0xf39c
  Push(0x5aab); // pointer to ?FUEL-D
  _ex__2(); // !_2
  Push(cc__dash_1); // -1
  Push(0x5ac3); // pointer to GWF
  _ex__2(); // !_2
  UNK_0xf24b(); // UNK_0xf24b
  Push(0xbd55);
  MODULE(); // MODULE
  Push(0x5aab); // pointer to ?FUEL-D
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf2c8(); // UNK_0xf2c8
  return;

  label1:
  UNK_0xf446(); // UNK_0xf446
  if (Pop() == 0) return;
  UNK_0xf261(); // UNK_0xf261
}


// ================================================
// 0xf4cc: WORD 'UNK_0xf4ce' codep=0x224c parp=0xf4ce
// ================================================

void UNK_0xf4ce() // UNK_0xf4ce
{
  Push(0x5ac3); // pointer to GWF
  Push(Read16(Pop())); // @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf452(); // UNK_0xf452
  if (Pop() == 0) goto label1;
  Push(0x5ac3); // pointer to GWF
  ON_2(); // ON_2
  goto label2;

  label1:
  UNK_0xf3b2(); // UNK_0xf3b2
  if (Pop() == 0) goto label3;
  Push(0x5ac3); // pointer to GWF
  ON_2(); // ON_2
  goto label2;

  label3:
  UNK_0xf40d(); // UNK_0xf40d
  Push(0x5ac3); // pointer to GWF
  _ex__2(); // !_2

  label2:
  Push(0x5ac3); // pointer to GWF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf504: WORD '?LAND' codep=0x224c parp=0xf50e
// ================================================
// entry

void _ask_LAND() // ?LAND
{
  Push(0x5ab9); // pointer to ?G-AWAR
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf4ce(); // UNK_0xf4ce
  if (Pop() == 0) goto label2;
  UNK_0xf4a0(); // UNK_0xf4a0

  label2:
  return;

  label1:
  UNK_0xf4a0(); // UNK_0xf4a0
}


// ================================================
// 0xf526: WORD '?LAUNCH' codep=0x224c parp=0xf532
// ================================================
// entry

void _ask_LAUNCH() // ?LAUNCH
{
  UNK_0xf40d(); // UNK_0xf40d
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) return;
  UNK_0xf24b(); // UNK_0xf24b
}

// 0xf540: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'LAND-VO_________________________ '
  