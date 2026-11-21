/* FUN_1801aea50 @ 1801aea50 */

undefined8 * FUN_1801aea50(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char local_98 [64];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar5 = 1;
  if (param_3 != 0) {
    if (param_3 < 0x41) {
      uVar3 = (ulonglong)((uint)param_3 & 3);
      if (param_3 < 4) {
        uVar7 = 0;
      }
      else {
        uVar6 = 0;
        do {
          local_98[uVar6] = (&DAT_180284bdc)[*(byte *)(param_2 + uVar6)];
          local_98[uVar6 + 1] = (&DAT_180284bdc)[*(byte *)(param_2 + 1 + uVar6)];
          local_98[uVar6 + 2] = (&DAT_180284bdc)[*(byte *)(param_2 + 2 + uVar6)];
          uVar7 = uVar6 + 4;
          local_98[uVar6 + 3] = (&DAT_180284bdc)[*(byte *)(param_2 + 3 + uVar6)];
          uVar6 = uVar7;
        } while (((uint)param_3 & 0x7c) != uVar7);
      }
      if (uVar3 != 0) {
        uVar6 = 0;
        do {
          local_98[uVar6 + uVar7] = (&DAT_180284bdc)[*(byte *)(param_2 + uVar7 + uVar6)];
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
      }
      cVar2 = FUN_1801aec10(local_98,param_3);
      if (cVar2 == 'Q') {
        if (param_3 < 0x10) {
          uVar3 = 0;
          do {
            if (local_98[uVar3] == '\0') goto LAB_1801aebf8;
            uVar3 = uVar3 + 1;
          } while (param_3 != uVar3);
        }
        else {
          lVar4 = FUN_1801f2f70(0,local_98,param_3);
          if (lVar4 == 1) goto LAB_1801aebf8;
        }
        FUN_1801b3ac0(&local_58,local_98,param_3);
LAB_1801aebee:
        *(undefined4 *)(param_1 + 3) = local_48;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_44;
        *(undefined4 *)(param_1 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_3c;
        *(undefined4 *)(param_1 + 1) = local_58;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_54;
        *(undefined4 *)(param_1 + 2) = uStack_50;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
      }
      else {
        param_1[1] = 0;
        *(char *)(param_1 + 2) = cVar2;
      }
      uVar5 = 0;
    }
    else if (param_3 < 0x10000) {
      uVar3 = 0;
      do {
        if (param_3 == uVar3) {
          FUN_1801b3ac0(&local_38);
          local_58 = local_38;
          uStack_54 = uStack_34;
          uStack_50 = uStack_30;
          uStack_4c = uStack_2c;
          local_48 = local_28;
          uStack_44 = uStack_24;
          uStack_40 = uStack_20;
          uStack_3c = uStack_1c;
          goto LAB_1801aebee;
        }
        pbVar1 = (byte *)(param_2 + uVar3);
        uVar3 = uVar3 + 1;
      } while ((&DAT_180284bdc)[*pbVar1] != '\0');
    }
  }
LAB_1801aebf8:
  *param_1 = uVar5;
  return param_1;
}


