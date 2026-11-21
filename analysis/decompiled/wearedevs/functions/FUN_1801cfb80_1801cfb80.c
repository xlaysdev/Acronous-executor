/* FUN_1801cfb80 @ 1801cfb80 */

ulonglong FUN_1801cfb80(longlong param_1,undefined8 param_2,byte *param_3,ulonglong param_4,
                       undefined8 param_5,ulonglong param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  
  if (param_4 < *(ulonglong *)(param_1 + 0x80)) {
    uVar5 = 0;
    if (param_6 <= param_4) {
      if (param_6 != 0) {
        uVar5 = 0;
        pbVar6 = param_3;
        do {
          uVar5 = (ulonglong)((uint)*pbVar6 + (int)uVar5 * 2);
          pbVar6 = pbVar6 + 1;
        } while (pbVar6 < param_3 + param_6);
      }
      uVar2 = *(uint *)(param_1 + 0xe0);
      iVar3 = *(int *)(param_1 + 0xe4);
      lVar7 = 0;
      pbVar6 = param_3;
      if (uVar2 == (uint)uVar5) goto LAB_1801cfc32;
      do {
        do {
          if (param_3 + (param_4 - param_6) <= pbVar6) {
            return 0;
          }
          uVar1 = (uint)(param_3 + param_6)[lVar7] + ((int)uVar5 - (uint)*pbVar6 * iVar3) * 2;
          uVar5 = (ulonglong)uVar1;
          lVar7 = lVar7 + 1;
          pbVar6 = param_3 + lVar7;
        } while (uVar2 != uVar1);
LAB_1801cfc32:
        cVar4 = FUN_1801ffd20(pbVar6,param_5,param_6);
      } while (cVar4 == '\0');
      uVar5 = 1;
    }
  }
  else {
    uVar5 = FUN_1801cf4f0(param_1,param_3,param_4,param_5,param_6);
  }
  return uVar5;
}


