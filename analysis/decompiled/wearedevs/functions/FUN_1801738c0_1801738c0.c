/* FUN_1801738c0 @ 1801738c0 */

void FUN_1801738c0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  if ((param_4 == '\0') && ((char)param_2[0xe] != '\0')) {
    lVar4 = *param_2;
    *param_2 = 0;
    if (lVar4 == 0) {
      *param_2 = param_3;
      return;
    }
    lVar2 = param_2[3];
    do {
      uVar6 = *(ulonglong *)(lVar2 + 0x18);
      uVar1 = *(uint *)(lVar2 + 0x20);
      iVar7 = (int)(uVar6 >> 0x20);
      if (uVar1 - iVar7 < 0x100) {
        *(longlong *)(*(longlong *)(lVar2 + 0x10) + ((ulonglong)uVar1 & 0xff) * 8) = lVar4;
        *(uint *)(lVar2 + 0x20) = uVar1 + 1;
        break;
      }
      if (iVar7 != (int)uVar6) {
        FUN_180173c90(param_1,lVar4);
        break;
      }
      lVar4 = FUN_18017ec80(param_2 + 3,lVar4,uVar6 >> 0x20,(ulonglong)uVar1,param_1);
    } while (lVar4 != 0);
    puVar3 = (ulonglong *)*param_2;
    if (puVar3 != (ulonglong *)0x0) {
      LOCK();
      uVar6 = *puVar3;
      *puVar3 = *puVar3 - 0x40;
      UNLOCK();
      if (uVar6 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263618);
      }
      if ((uVar6 & 0xffffffffffffffc0) == 0x40) {
        (**(code **)(puVar3[2] + 0x10))();
      }
    }
    *param_2 = param_3;
    lVar4 = param_2[1];
  }
  else {
    lVar4 = param_2[3];
    do {
      uVar6 = *(ulonglong *)(lVar4 + 0x18);
      uVar1 = *(uint *)(lVar4 + 0x20);
      iVar7 = (int)(uVar6 >> 0x20);
      if (uVar1 - iVar7 < 0x100) {
        *(longlong *)(*(longlong *)(lVar4 + 0x10) + ((ulonglong)uVar1 & 0xff) * 8) = param_3;
        *(uint *)(lVar4 + 0x20) = uVar1 + 1;
        break;
      }
      if (iVar7 != (int)uVar6) {
        FUN_180173c90(param_1,param_3);
        break;
      }
      param_3 = FUN_18017ec80(param_2 + 3,param_3,uVar6 >> 0x20,(ulonglong)uVar1,param_1);
    } while (param_3 != 0);
    lVar4 = param_2[1];
  }
  if (lVar4 != 0) {
    uVar6 = param_1 + 0x18;
    uVar5 = FUN_18017bd40(param_1 + 0xe8);
    if ((uVar5 & 1) != 0) {
      if (*(ulonglong *)(param_1 + 0x90) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar6,*(ulonglong *)(param_1 + 0x90),
                      &PTR_s_C__Users_burne__cargo_registry_s_1802626c0);
      }
      FUN_18017ca80(*(longlong *)(param_1 + 0x88) + uVar6 * 0x10 + 8,param_1 + 0x150);
    }
  }
  return;
}


