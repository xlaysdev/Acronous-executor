/* FUN_1800aceb0 @ 1800aceb0 */

undefined8 FUN_1800aceb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_280;
  longlong local_278;
  undefined1 local_270 [248];
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_48 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 2;
  if (local_48 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("polled after complete",0x15,&DAT_180210928);
  }
  uStack_40 = *(undefined4 *)(param_1 + 0x68);
  uStack_3c = *(undefined4 *)(param_1 + 0x6c);
  uStack_38 = *(undefined4 *)(param_1 + 0x70);
  uStack_34 = *(undefined4 *)(param_1 + 0x74);
  FUN_18006d070(&local_280,param_1,param_2);
  if (local_278 == 4) {
    memcpy(&uStack_170,local_270,0x98);
    local_58 = CONCAT44(uStack_34,uStack_38);
    local_68 = (undefined4)local_48;
    uStack_64 = local_48._4_4_;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    local_178 = 4;
    local_21 = 0;
    FUN_1800a98b0(&local_68,&local_178);
  }
  else if ((int)local_278 == 5) {
    local_21 = 1;
    cVar2 = FUN_1800a9540(&local_48,param_2);
    if (cVar2 != '\0') {
      local_30 = (longlong *)(param_1 + 0x60);
      local_168 = CONCAT44(uStack_34,uStack_38);
      local_178 = local_48;
      uStack_170 = uStack_40;
      uStack_16c = uStack_3c;
      if (*(int *)local_30 != 2) {
        FUN_1800a5d50(local_30);
      }
      local_30[2] = local_168;
      *local_30 = local_178;
      local_30[1] = CONCAT44(uStack_16c,uStack_170);
      return 1;
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (lVar1 != 0) {
      local_21 = 1;
      FUN_180039100();
    }
    FUN_1800a5d50(&local_48);
  }
  else {
    memcpy(&local_178,&local_278,0x100);
    local_58 = CONCAT44(uStack_34,uStack_38);
    local_68 = (undefined4)local_48;
    uStack_64 = local_48._4_4_;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    local_78 = local_280;
    local_21 = 0;
    FUN_1800a98b0(&local_68,&local_178);
  }
  return 0;
}


