/* FUN_180173e80 @ 180173e80 */

void FUN_180173e80(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar3);
      if (*(int *)(lVar1 + 0x20) != (int)*(undefined8 *)(lVar1 + 0x18)) goto LAB_180173ed6;
      lVar3 = lVar3 + 0x10;
    } while (*(longlong *)(param_1 + 0x90) * 0x10 != lVar3);
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
LAB_180173ed6:
    uVar4 = param_1 + 0x18;
    uVar2 = FUN_18017bd40(param_1 + 0xe8);
    if ((uVar2 & 1) != 0) {
      if (*(ulonglong *)(param_1 + 0x90) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,*(ulonglong *)(param_1 + 0x90),
                      &PTR_s_C__Users_burne__cargo_registry_s_1802626c0);
      }
      FUN_18017ca80(*(longlong *)(param_1 + 0x88) + uVar4 * 0x10 + 8,param_1 + 0x150);
      return;
    }
  }
  return;
}


