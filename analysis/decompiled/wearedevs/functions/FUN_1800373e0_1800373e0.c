/* FUN_1800373e0 @ 1800373e0 */

char * FUN_1800373e0(char *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_90 [3];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  undefined1 local_28;
  char *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = *(ulonglong *)(param_2 + 4);
  local_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  local_58 = 0;
  local_50 = 1;
  local_48 = 0;
  local_28 = 0x80;
  FUN_180037c50(local_40,&local_58);
  if (*param_1 != '\x06') {
    local_78 = *(undefined4 *)param_1;
    uStack_74 = *(undefined4 *)(param_1 + 4);
    uStack_70 = *(undefined4 *)(param_1 + 8);
    uStack_6c = *(undefined4 *)(param_1 + 0xc);
    local_68 = *(undefined4 *)(param_1 + 0x10);
    uStack_64 = *(undefined4 *)(param_1 + 0x14);
    uStack_60 = *(undefined4 *)(param_1 + 0x18);
    uStack_5c = *(undefined4 *)(param_1 + 0x1c);
    if (local_30 < CONCAT44(uStack_34,uStack_38)) {
      do {
        uVar2 = local_30 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_3c,local_40) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_90[0] = 0x16;
          local_20 = param_1;
          uVar1 = FUN_1801f6b20(&local_58,local_90);
          param_1 = local_20;
          *(undefined8 *)(local_20 + 8) = uVar1;
          *local_20 = '\x06';
          FUN_18000b2a0(&local_78);
          break;
        }
        local_30 = uVar2;
      } while (uVar2 != CONCAT44(uStack_34,uStack_38));
    }
  }
  if (local_58 != 0) {
    thunk_FUN_1801d3330(local_50,local_58,1);
  }
  return param_1;
}


