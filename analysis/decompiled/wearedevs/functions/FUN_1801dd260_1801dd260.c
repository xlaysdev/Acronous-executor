/* FUN_1801dd260 @ 1801dd260 */

ulonglong FUN_1801dd260(undefined8 *param_1,int *param_2,char param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  undefined *local_40;
  code *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_2 == 1) {
    FUN_1801ecc30(&local_60);
    local_38 = local_58;
    puVar5 = uStack_50;
    local_40 = local_60;
  }
  else {
    FUN_1801f2ab0(&local_60,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    puVar5 = (undefined4 *)&DAT_00000009;
    if ((char)local_60 == '\0') {
      puVar5 = uStack_50;
    }
    local_38 = (code *)&DAT_18028ea9a;
    if ((char)local_60 == '\0') {
      local_38 = local_58;
    }
    local_40 = (undefined *)0x8000000000000000;
  }
  if ((param_3 == '\0') && (cVar1 = FUN_1801ddba0(local_38,puVar5), cVar1 == '\x01' && param_4 != 0)
     ) {
    puVar4 = puVar5;
    lVar2 = FUN_1801ddcf0(local_38,puVar5,*(undefined8 *)(param_4 + 8),
                          *(undefined8 *)(param_4 + 0x10));
    if (lVar2 != 0) {
      FUN_1801f2ab0(&local_60,lVar2,puVar4);
      if ((int)local_60 != 1) {
        local_70 = (undefined4)local_58;
        uStack_6c = local_58._4_4_;
        uStack_68 = (undefined4)uStack_50;
        uStack_64 = uStack_50._4_4_;
        local_60 = &DAT_1802900a4;
        local_58 = FUN_1801edd10;
        uStack_50 = &local_70;
        local_48 = &LAB_1801e1670;
        uVar3 = FUN_1801ef150(*param_1,param_1[1],&DAT_1802900a8,&local_60);
        goto LAB_1801dd346;
      }
    }
  }
  uVar3 = FUN_1801f3b30(local_38,puVar5,param_1);
LAB_1801dd346:
  if (((ulonglong)local_40 & 0x7fffffffffffffff) != 0) {
    uVar3 = uVar3 & 0xffffffff;
    thunk_FUN_1801d3330(local_38,local_40,1);
  }
  return uVar3;
}


