/* FUN_180094710 @ 180094710 */

longlong * FUN_180094710(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 local_4a0 [328];
  longlong local_358;
  undefined1 local_350 [328];
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  undefined1 uStack_1e0;
  char cStack_1df;
  undefined6 uStack_1de;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  int *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  FUN_180094f80(&local_208,param_2 + 0x54);
  if (cStack_1df == '\x04') {
    *(undefined1 *)(param_1 + 0xe) = 6;
    return param_1;
  }
  local_48 = local_1d8;
  uStack_50 = CONCAT62(uStack_1de,CONCAT11(cStack_1df,uStack_1e0));
  local_58 = local_1e8;
  local_68 = local_1f8;
  uStack_60 = lStack_1f0;
  local_78 = local_208;
  uStack_70 = lStack_200;
  if (*param_2 != 2) {
    memcpy(&local_208,param_2,0x150);
    local_38 = param_2;
    if (param_2[0x54] != 5) {
      FUN_180097490(param_2 + 0x54);
    }
    lVar1 = local_208;
    memcpy(local_4a0,&lStack_200,0x148);
    local_38[0] = 2;
    local_38[1] = 0;
    if (lVar1 != 2) {
      local_358 = lVar1;
      memcpy(local_350,local_4a0,0x148);
      local_88 = local_48;
      local_98 = (undefined4)local_58;
      uStack_94 = local_58._4_4_;
      uStack_90 = (undefined4)uStack_50;
      uStack_8c = uStack_50._4_4_;
      local_a8 = (undefined4)local_68;
      uStack_a4 = local_68._4_4_;
      uStack_a0 = (undefined4)uStack_60;
      uStack_9c = uStack_60._4_4_;
      local_b8 = (undefined4)local_78;
      uStack_b4 = local_78._4_4_;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      local_29 = 0;
      FUN_180091260(&local_208,&local_358,&local_b8);
      param_1[0xe] = local_198;
      param_1[0xc] = local_1a8;
      param_1[0xd] = lStack_1a0;
      param_1[10] = local_1b8;
      param_1[0xb] = lStack_1b0;
      param_1[8] = local_1c8;
      param_1[9] = lStack_1c0;
      param_1[6] = local_1d8;
      param_1[7] = lStack_1d0;
      param_1[4] = local_1e8;
      param_1[5] = CONCAT62(uStack_1de,CONCAT11(cStack_1df,uStack_1e0));
      param_1[2] = local_1f8;
      param_1[3] = lStack_1f0;
      *param_1 = local_208;
      param_1[1] = lStack_200;
      return param_1;
    }
  }
  local_29 = 1;
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                ,0x28,&DAT_18020f220);
}


