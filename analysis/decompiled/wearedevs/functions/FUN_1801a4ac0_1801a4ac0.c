/* FUN_1801a4ac0 @ 1801a4ac0 */

void FUN_1801a4ac0(longlong param_1,uint3 *param_2,uint3 *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  uint3 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar6 = ((longlong)param_3 - (longlong)param_2) * -0x5555555555555555;
  uVar8 = *(ulonglong *)(param_1 + 0x48);
  uVar9 = 0x11;
  uVar5 = uVar8;
  if (0x11 < uVar8) {
    uVar5 = *(ulonglong *)(param_1 + 8);
    uVar9 = uVar8;
  }
  puVar1 = (ulonglong *)(param_1 + 0x48);
  if (uVar9 - uVar5 < uVar6) {
    if (CARRY8(uVar5,uVar6)) {
LAB_1801a4ca7:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
    }
    uVar8 = (uVar5 + uVar6) - 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar8 = 0;
    if (1 < uVar5 + uVar6) {
      uVar8 = 0xffffffffffffffff >> (~(byte)lVar4 & 0x3f);
    }
    if (uVar8 == 0xffffffffffffffff) goto LAB_1801a4ca7;
    lVar4 = FUN_1801a51b0(param_1,uVar8 + 1);
    if (lVar4 != -0x7fffffffffffffff) {
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(lVar4);
      }
      goto LAB_1801a4ca7;
    }
    uVar8 = *puVar1;
  }
  if (uVar8 < 0x12) {
    lVar4 = param_1 + 4;
    uVar5 = 0x11;
    puVar7 = puVar1;
    if (uVar8 < 0x11) goto LAB_1801a4c40;
  }
  else {
    uVar9 = *(ulonglong *)(param_1 + 8);
    lVar4 = *(longlong *)(param_1 + 0x10);
    bVar10 = uVar9 < uVar8;
    uVar5 = uVar8;
    puVar7 = (ulonglong *)(param_1 + 8);
    uVar8 = uVar9;
    if (bVar10) {
LAB_1801a4c40:
      do {
        if ((param_2 == param_3) || (uVar3 = *param_2, uVar3 == 0x110000)) {
          *puVar7 = uVar8;
          return;
        }
        param_2 = (uint3 *)((longlong)param_2 + 3);
        *(uint *)(lVar4 + uVar8 * 4) = uVar3 | 0xff000000;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
      *puVar7 = uVar5;
      goto joined_r0x0001801a4b89;
    }
  }
  *puVar7 = uVar8;
joined_r0x0001801a4b89:
  if (param_2 != param_3) {
    do {
      uVar3 = *param_2;
      bVar2 = *(byte *)((longlong)param_2 + 2);
      if (*param_2 == 0x110000) {
        return;
      }
      uVar8 = *puVar1;
      if (uVar8 < 0x12) {
        uVar9 = 0x11;
        uVar5 = uVar8;
        lVar4 = param_1 + 4;
        puVar7 = puVar1;
      }
      else {
        uVar5 = *(ulonglong *)(param_1 + 8);
        lVar4 = *(longlong *)(param_1 + 0x10);
        puVar7 = (ulonglong *)(param_1 + 8);
        uVar9 = uVar8;
      }
      if (uVar5 == uVar9) {
        FUN_1801fc070(param_1);
        uVar5 = *(ulonglong *)(param_1 + 8);
        lVar4 = *(longlong *)(param_1 + 0x10);
        puVar7 = (ulonglong *)(param_1 + 8);
      }
      param_2 = (uint3 *)((longlong)param_2 + 3);
      *(uint *)(lVar4 + uVar5 * 4) = ((ushort)uVar3 - 0x1000000) + (uint)bVar2 * 0x10000;
      *puVar7 = *puVar7 + 1;
    } while (param_2 != param_3);
  }
  return;
}


