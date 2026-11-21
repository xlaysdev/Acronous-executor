/* FUN_1800371e0 @ 1800371e0 */

void FUN_1800371e0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar6 = param_1[1] - param_2;
  if ((ulonglong)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: cnt <= self.limit",0x23,&DAT_180206c10);
  }
  if (param_2 != 0) {
    puVar2 = (ulonglong *)*param_1;
    do {
      if (puVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("Out of bounds access",0x14,&PTR_s_C__Users_burne__cargo_registry_s_180206cd8)
        ;
      }
      uVar4 = *puVar2;
      if (puVar2[2] < uVar4) {
        uVar4 = 0;
      }
      lVar5 = (puVar2[2] - uVar4) * 0x20;
      lVar1 = puVar2[1] + lVar5;
      uVar4 = *(ulonglong *)(puVar2[1] + 0x10 + lVar5);
      if (param_2 <= uVar4 && uVar4 - param_2 != 0) {
        *(ulonglong *)(lVar1 + 0x10) = uVar4 - param_2;
        *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + param_2;
        break;
      }
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + uVar4;
      if (puVar2[3] != 0) {
        uVar3 = puVar2[2];
        uVar7 = 0;
        if (*puVar2 <= uVar3 + 1) {
          uVar7 = *puVar2;
        }
        puVar2[2] = (uVar3 - uVar7) + 1;
        puVar2[3] = puVar2[3] - 1;
        lVar1 = *(longlong *)(puVar2[1] + uVar3 * 0x20);
        if (lVar1 != 0) {
          lVar5 = puVar2[1] + uVar3 * 0x20;
          (**(code **)(lVar1 + 0x20))
                    (*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 8),
                     *(undefined8 *)(lVar5 + 0x10));
        }
      }
      param_2 = param_2 - uVar4;
    } while (param_2 != 0);
  }
  param_1[1] = lVar6;
  return;
}


