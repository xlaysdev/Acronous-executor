/* FUN_1800ad710 @ 1800ad710 */

undefined1 *
FUN_1800ad710(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  int iVar5;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  
  iVar1 = *(int *)(param_2 + 0x48);
  iVar5 = *(int *)(param_2 + 0x4c) - iVar1;
  if ((iVar5 != 0 && iVar1 <= *(int *)(param_2 + 0x4c)) && (iVar1 / 2 <= iVar5)) {
    uVar4 = 1;
    if ((*(int *)(param_5 + 0x128) != 4) ||
       ((ulonglong)(*(longlong *)(param_5 + 0x180) - *(longlong *)(param_5 + 0x178)) <
        *(ulonglong *)(param_5 + 0x1a0))) goto LAB_1800ad852;
    uStack_164 = 0;
    local_168 = CONCAT31(local_168._1_3_,7);
    iStack_160 = iVar5;
    cVar2 = FUN_18005b0b0(param_5 + 0x48,&local_168);
    if (cVar2 != '\r') {
      local_168 = CONCAT31(local_168._1_3_,cVar2);
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("invalid WINDOW_UPDATE frame",0x1b,&local_168,&DAT_180211688,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802110b8);
    }
    uVar3 = FUN_180131b80(param_2 + 0x48);
    if ((uVar3 & 1) != 0) {
      local_168 = iVar5;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("unexpected flow control state",0x1d,&local_168,&DAT_1802116a8,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802110f0);
    }
  }
  uVar4 = 1;
  if (*(int *)(param_5 + 0x128) == 4) {
    do {
      if ((ulonglong)(*(longlong *)(param_5 + 0x180) - *(longlong *)(param_5 + 0x178)) <
          *(ulonglong *)(param_5 + 0x1a0)) break;
      FUN_1800ec0b0(&local_178,param_2 + 0x50,param_3);
      if (CONCAT44(uStack_174,local_178) == 0) {
        uVar4 = 0;
        goto LAB_1800ad852;
      }
      local_168 = local_178;
      uStack_164 = uStack_174;
      iStack_160 = iStack_170;
      uStack_15c = uStack_16c;
      FUN_180085250(param_4,&local_168,param_5);
    } while (*(int *)(param_5 + 0x128) == 4);
    uVar4 = 1;
  }
LAB_1800ad852:
  param_1[1] = uVar4;
  *param_1 = 0;
  return param_1;
}


