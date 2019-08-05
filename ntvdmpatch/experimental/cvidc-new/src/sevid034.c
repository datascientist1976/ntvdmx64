#include "sevid000.h"

void S_2893_Chain4WordWrite_00000002_00000008 (IU32 eaOff, IU16 eaVal)
{
  C4WWRTF1(2893, UCB4MSK, TRANS1);
}

void S_2894_Chain4WordWrite_00000002_00000009 (IU32 eaOff, IU16 eaVal)
{
  C4WWRTF(2894, UCB4MSK, TRANS1);
}

void S_2895_Chain4WordWrite_00000002_0000000e (IU32 eaOff, IU16 eaVal)
{
  C4WWRTF1(2895, UCBMSK, TRANS1);
}

void S_2896_Chain4WordWrite_00000002_0000000f (IU32 eaOff, IU16 eaVal)
{
  C4WWRTF(2896, UCBMSK, TRANS1);
}

void S_2897_Chain4WordFill_00000002_00000008 (IU32 eaOff, IU16 eaVal, IU32 count)
{
  C4WFLL(2897, UCB4MSK, TRANS1);
}

void S_2898_Chain4WordFill_00000002_00000009 (IU32 eaOff, IU16 eaVal, IU32 count)
{
  C4WFLL1(2898, UCB4MSK, TRANS1);
}

void S_2899_Chain4WordFill_00000002_0000000e (IU32 eaOff, IU16 eaVal, IU32 count)
{
  C4WFLL(2899, UCBMSK, TRANS1);
}

void S_2900_Chain4WordFill_00000002_0000000f (IU32 eaOff, IU16 eaVal, IU32 count)
{
  C4WFLL1(2899, UCBMSK, TRANS1);
}

void S_2901_Chain4WordMove_00000002_00000008_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM)
{
  C4WMOVFW(2901, S_2902_CopyWordPlnByPlnChain4_00000002_00000008_00000000_00000000);
}

void S_2902_CopyWordPlnByPlnChain4_00000002_00000008_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM)
{
  C4WPLNCPY(2902, S_2886_CopyBytePlnByPlnChain4_00000002_00000008_00000000_00000000);
}

void S_2903_Chain4WordMove_00000002_00000009_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM)
{
  C4WMOVFW(2887, S_2904_CopyWord4PlaneChain4_00000002_00000009_00000000_00000000);
}

void S_2904_CopyWord4PlaneChain4_00000002_00000009_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM)
{
  C4WCPYW4PLN(2904,+1,TRANS1,UCB4MSKL);
}

void S_2905_Chain4WordMove_00000002_0000000e_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM)
{
  C4WMOVFW(2905, S_2906_CopyWordPlnByPlnChain4_00000002_0000000e_00000000_00000000);
}

void S_2906_CopyWordPlnByPlnChain4_00000002_0000000e_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM)
{
  C4WPLNCPY(2906, S_2890_CopyBytePlnByPlnChain4_00000002_0000000e_00000000_00000000);
}

void S_2907_Chain4WordMove_00000002_0000000f_00000000 (IU32 eaOff, IHPE fromOff, IU32 count, IBOOL srcInRAM)
{
  C4WMOVFW(2907, S_2908_CopyWord4PlaneChain4_00000002_0000000f_00000000_00000000);
}

void S_2908_CopyWord4PlaneChain4_00000002_0000000f_00000000_00000000 (IU32 eaOff, IHPE fromOff, IHPE destOff, IU32 count, IBOOL srcInRAM)
{
  C4WCPYW4PLN(2908,+1,TRANS1,UCBMSKL);
}