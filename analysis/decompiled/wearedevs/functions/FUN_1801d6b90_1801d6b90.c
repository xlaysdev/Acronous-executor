/* FUN_1801d6b90 @ 1801d6b90 */

undefined8 FUN_1801d6b90(longlong *param_1,longlong param_2,ulonglong param_3)

{
  void *_Src;
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    if (param_3 < 4) {
      uVar1 = 0;
      uVar5 = 0;
    }
    else {
      puVar3 = (uint *)(param_2 + 0x30);
      uVar1 = 0;
      uVar5 = 0;
      do {
        uVar5 = (ulonglong)*puVar3 +
                (ulonglong)puVar3[-4] + (ulonglong)puVar3[-8] + puVar3[-0xc] + uVar5;
        uVar1 = uVar1 + 4;
        puVar3 = puVar3 + 0x10;
      } while ((param_3 & 0x7fffffffffffffc) != uVar1);
    }
    if ((param_3 & 3) != 0) {
      uVar2 = 0;
      do {
        uVar5 = uVar5 + *(uint *)(uVar1 * 0x10 + param_2 + uVar2);
        uVar2 = uVar2 + 0x10;
      } while (((uint)param_3 & 3) << 4 != uVar2);
    }
    if ((ulonglong)(*param_1 - param_1[2]) < uVar5) {
      FUN_180200f70(param_1,param_1[2],uVar5,1,1);
    }
    lVar6 = param_1[2];
    lVar4 = 0;
    do {
      _Src = *(void **)(param_2 + 8 + lVar4);
      uVar1 = (ulonglong)*(uint *)(param_2 + lVar4);
      if ((ulonglong)(*param_1 - lVar6) < uVar1) {
        FUN_180200f70(param_1,lVar6,uVar1,1,1);
        lVar6 = param_1[2];
      }
      memcpy((void *)(param_1[1] + lVar6),_Src,uVar1);
      lVar6 = lVar6 + uVar1;
      param_1[2] = lVar6;
      lVar4 = lVar4 + 0x10;
    } while (param_3 * 0x10 != lVar4);
  }
  return 0;
}


