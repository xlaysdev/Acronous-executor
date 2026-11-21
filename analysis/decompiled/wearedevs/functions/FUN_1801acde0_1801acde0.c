/* FUN_1801acde0 @ 1801acde0 */

undefined8 * FUN_1801acde0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  ushort uVar8;
  ulonglong uVar9;
  char *pcVar10;
  uint uVar11;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined1 local_38;
  int local_30 [2];
  longlong local_28;
  
  lVar1 = *(longlong *)(param_2 + 8);
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  local_50 = 0;
  local_38 = 1;
  local_40 = 0x3a0000003a;
  local_60 = lVar1;
  local_58 = uVar2;
  local_48 = uVar2;
  FUN_1801ad1d0(local_30,&local_60);
  if (local_30[0] == 1) {
    uVar9 = local_28 + 1;
    if (uVar9 != 0) {
      if (uVar9 < uVar2) {
        if (*(char *)(lVar1 + uVar9) < -0x40) {
LAB_1801ace51:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(lVar1,uVar2,uVar9,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_1802839b0);
        }
      }
      else if (uVar2 != uVar9) goto LAB_1801ace51;
    }
    uVar6 = uVar2 - uVar9;
    if (uVar6 != 0) {
      pcVar10 = (char *)(uVar9 + lVar1);
      if (uVar6 == 1) {
        cVar7 = *pcVar10;
        if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1801acf2f;
      }
      else {
        cVar7 = *pcVar10;
      }
      uVar9 = (ulonglong)(cVar7 == '+');
      if (uVar6 - uVar9 < 5) {
        if (uVar6 == uVar9) {
          uVar4 = 0;
        }
        else {
          iVar5 = 0;
          do {
            uVar11 = *(byte *)(uVar9 + lVar1 + 1 + local_28) - 0x30;
            if (9 < uVar11) goto LAB_1801acf2f;
            iVar5 = iVar5 * 10 + uVar11;
            uVar4 = (ushort)iVar5;
            local_28 = local_28 + 1;
          } while (-uVar9 + uVar2 + -1 != local_28);
LAB_1801aceef:
          if (lVar1 == 0) goto LAB_1801acf2f;
        }
        *param_1 = pcVar10;
        param_1[1] = uVar6;
        *(ushort *)(param_1 + 2) = uVar4;
        return param_1;
      }
      uVar4 = 0;
      do {
        if (-uVar9 + uVar2 + -1 == local_28) goto LAB_1801aceef;
        uVar3 = (ushort)((uint)uVar4 * 10);
        if (((short)((uint)uVar4 * 10 >> 0x10) != 0) ||
           (uVar11 = *(byte *)(uVar9 + lVar1 + 1 + local_28) - 0x30, 9 < uVar11)) break;
        local_28 = local_28 + 1;
        uVar8 = (ushort)uVar11;
        uVar4 = uVar3 + uVar8;
      } while (!CARRY2(uVar3,uVar8));
    }
  }
LAB_1801acf2f:
  *param_1 = 0;
  return param_1;
}


