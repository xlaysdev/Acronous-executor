/* FUN_1801d6d10 @ 1801d6d10 */

undefined8 FUN_1801d6d10(longlong *param_1,longlong param_2,ulonglong param_3)

{
  void *_Src;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    if (param_3 < 4) {
      uVar1 = 0;
      uVar3 = 0;
    }
    else {
      puVar4 = (uint *)(param_2 + 0x30);
      uVar1 = 0;
      uVar3 = 0;
      do {
        uVar3 = (ulonglong)*puVar4 +
                (ulonglong)puVar4[-4] + (ulonglong)puVar4[-8] + puVar4[-0xc] + uVar3;
        uVar1 = uVar1 + 4;
        puVar4 = puVar4 + 0x10;
      } while ((param_3 & 0x7fffffffffffffc) != uVar1);
    }
    if ((param_3 & 3) != 0) {
      uVar2 = 0;
      do {
        uVar3 = uVar3 + *(uint *)(uVar1 * 0x10 + param_2 + uVar2);
        uVar2 = uVar2 + 0x10;
      } while (((uint)param_3 & 3) << 4 != uVar2);
    }
    lVar6 = param_1[2];
    if ((ulonglong)(*param_1 - lVar6) < uVar3) {
      FUN_180200f70(param_1,lVar6,uVar3,1,1);
      lVar6 = param_1[2];
    }
    lVar5 = 0;
    do {
      _Src = *(void **)(param_2 + 8 + lVar5);
      uVar1 = (ulonglong)*(uint *)(param_2 + lVar5);
      if ((ulonglong)(*param_1 - lVar6) < uVar1) {
        FUN_180200f70(param_1,lVar6,uVar1,1,1);
        lVar6 = param_1[2];
      }
      memcpy((void *)(param_1[1] + lVar6),_Src,uVar1);
      lVar6 = lVar6 + uVar1;
      param_1[2] = lVar6;
      lVar5 = lVar5 + 0x10;
    } while (param_3 * 0x10 != lVar5);
  }
  return 0;
}


