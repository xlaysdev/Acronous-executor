/* FUN_180095500 @ 180095500 */

bool FUN_180095500(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((int)*param_1 == 10) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  FUN_180095890(&local_128,param_1,param_2);
  cVar2 = (char)local_b8;
  if ((char)local_b8 != '\x03') {
    local_38 = local_b8;
    local_48 = local_c8;
    uStack_40 = uStack_c0;
    local_58 = local_d8;
    uStack_50 = uStack_d0;
    local_68 = local_e8;
    uStack_60 = uStack_e0;
    local_78 = local_f8;
    uStack_74 = uStack_f4;
    uStack_70 = uStack_f0;
    uStack_6c = uStack_ec;
    local_88 = local_108;
    uStack_84 = uStack_104;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    local_98 = local_118;
    uStack_94 = uStack_114;
    uStack_90 = uStack_110;
    uStack_8c = uStack_10c;
    local_a8 = local_128;
    uStack_a4 = uStack_124;
    uStack_a0 = uStack_120;
    uStack_9c = uStack_11c;
    uVar1 = *param_1;
    if (uVar1 - 9 < 2) {
      *param_1 = 10;
      if ((int)uVar1 == 10) {
        local_21 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                      ,0x28,&DAT_18020f220);
      }
    }
    else {
      lVar3 = 1;
      if (5 < uVar1) {
        lVar3 = uVar1 - 6;
      }
      local_30 = param_1;
      if (lVar3 == 1) {
        FUN_180097a00(param_1);
      }
      else if (lVar3 == 0) {
        FUN_180098d50(param_1 + 1);
      }
      *local_30 = 10;
    }
    local_b8 = local_38;
    local_c8 = local_48;
    uStack_c0 = uStack_40;
    local_d8 = local_58;
    uStack_d0 = uStack_50;
    local_e8 = local_68;
    uStack_e0 = uStack_60;
    local_f8 = local_78;
    uStack_f4 = uStack_74;
    uStack_f0 = uStack_70;
    uStack_ec = uStack_6c;
    local_108 = local_88;
    uStack_104 = uStack_84;
    uStack_100 = uStack_80;
    uStack_fc = uStack_7c;
    local_118 = local_98;
    uStack_114 = uStack_94;
    uStack_110 = uStack_90;
    uStack_10c = uStack_8c;
    local_128 = local_a8;
    uStack_124 = uStack_a4;
    uStack_120 = uStack_a0;
    uStack_11c = uStack_9c;
    if ((char)local_38 != '\x02') {
      local_21 = 0;
      FUN_1800e1260(&local_128);
    }
  }
  return cVar2 == '\x03';
}


