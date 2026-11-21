/* FUN_180165060 @ 180165060 */

void FUN_180165060(longlong *param_1,char *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    lVar1 = *param_1;
    FUN_180173c90(lVar1,param_1[1]);
    uVar3 = lVar1 + 0x18;
    uVar2 = FUN_18017bd40(lVar1 + 0xe8);
    if ((uVar2 & 1) != 0) {
      if (*(ulonglong *)(lVar1 + 0x90) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar3,*(ulonglong *)(lVar1 + 0x90),
                      &PTR_s_C__Users_burne__cargo_registry_s_1802626d8);
      }
      FUN_18017ca80(*(longlong *)(lVar1 + 0x88) + uVar3 * 0x10 + 8,lVar1 + 0x150);
      return;
    }
  }
  else {
    lVar1 = *param_1;
    if (lVar1 == *(longlong *)(*(longlong *)(param_2 + 8) + 0x10) + 0x10) {
      if (*(longlong *)(param_2 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180260358);
      }
      param_2[0x10] = -1;
      param_2[0x11] = -1;
      param_2[0x12] = -1;
      param_2[0x13] = -1;
      param_2[0x14] = -1;
      param_2[0x15] = -1;
      param_2[0x16] = -1;
      param_2[0x17] = -1;
      if (*(longlong *)(param_2 + 0x18) != 0) {
        FUN_1801738c0(lVar1,*(longlong *)(param_2 + 0x18),param_1[1],*(undefined1 *)param_1[2]);
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 1;
        return;
      }
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
    }
    FUN_180173c90(lVar1,param_1[1]);
    uVar3 = lVar1 + 0x18;
    uVar2 = FUN_18017bd40(lVar1 + 0xe8);
    if ((uVar2 & 1) != 0) {
      if (*(ulonglong *)(lVar1 + 0x90) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar3,*(ulonglong *)(lVar1 + 0x90),
                      &PTR_s_C__Users_burne__cargo_registry_s_1802626d8);
      }
      FUN_18017ca80(*(longlong *)(lVar1 + 0x88) + uVar3 * 0x10 + 8,lVar1 + 0x150);
    }
  }
  return;
}


