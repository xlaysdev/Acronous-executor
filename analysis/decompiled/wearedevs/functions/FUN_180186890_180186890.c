/* FUN_180186890 @ 180186890 */

/* WARNING: Removing unreachable block (ram,0x000180186a26) */

undefined8 FUN_180186890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  ulonglong uVar2;
  longlong lVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 uStack_ac;
  undefined2 local_aa;
  undefined6 uVar7;
  short local_98;
  undefined4 uStack_96;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined6 uStack_86;
  short *psStack_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*PTR_DAT_1802fd5f0 == '\0') {
    FUN_180200110();
  }
  local_70 = 0;
  FUN_1801e3e40(&local_98,param_1,param_2);
  psVar1 = psStack_80;
  local_60 = CONCAT26(uStack_92,CONCAT42(uStack_96,local_98));
  psVar4 = (short *)CONCAT26(uStack_8a,CONCAT42(uStack_8e,uStack_90));
  if (local_60 != 0) {
    local_58 = CONCAT62(uStack_86,uStack_88);
    lVar3 = 0;
    for (; psVar4 != psVar1; psVar4 = psVar4 + 0x10) {
      uVar7 = (undefined6)((ulonglong)*(undefined8 *)(psVar4 + 8) >> 0x10);
      uVar5 = *(undefined4 *)(psVar4 + 1);
      uVar6 = *(undefined4 *)(psVar4 + 5);
      uStack_ac = (undefined2)*(undefined4 *)(psVar4 + 7);
      local_aa = (undefined2)((uint)*(undefined4 *)(psVar4 + 7) >> 0x10);
      if (*psVar4 == 2) break;
      uStack_92 = (undefined2)*(undefined4 *)(psVar4 + 3);
      uStack_90 = (undefined2)((uint)*(undefined4 *)(psVar4 + 3) >> 0x10);
      local_98 = *psVar4;
      uStack_96 = uVar5;
      uStack_8e = uVar6;
      uStack_8a = uStack_ac;
      uStack_88 = local_aa;
      uStack_86 = uVar7;
      psStack_80 = *(short **)(psVar4 + 0xc);
      local_78 = lVar3;
      uVar2 = FUN_1801da930(&local_98);
      if ((uVar2 & 1) == 0) {
        if (local_58 != 0) {
          thunk_FUN_1801d3330(local_60,local_58 << 5,4,param_4,uVar5,uVar6,uVar7);
        }
        if (((uint)lVar3 & 3) != 1) {
          return 0;
        }
        local_50 = lVar3 + -1;
        local_48 = *(undefined8 *)(lVar3 + -1);
        local_40 = *(undefined8 **)(lVar3 + 7);
        if ((code *)*local_40 != (code *)0x0) {
          (*(code *)*local_40)(local_48);
        }
        if (local_40[1] != 0) {
          thunk_FUN_1801d3330(local_48,local_40[1],local_40[2],param_4,uVar5,uVar6,uVar7);
        }
        thunk_FUN_1801d3330(local_50,0x18,8,param_4,uVar5,uVar6,uVar7);
        return 0;
      }
      if (((uint)lVar3 & 3) == 1) {
        local_68 = lVar3 + -1;
        local_48 = *(undefined8 *)(lVar3 + -1);
        local_40 = *(undefined8 **)(lVar3 + 7);
        local_50 = param_1;
        if ((code *)*local_40 != (code *)0x0) {
          (*(code *)*local_40)(local_48);
        }
        if (local_40[1] != 0) {
          thunk_FUN_1801d3330(local_48,local_40[1],local_40[2],param_4,uVar5,uVar6,uVar7);
        }
        thunk_FUN_1801d3330(local_68,0x18,8,param_4,uVar5,uVar6,uVar7);
        param_1 = local_50;
      }
      lVar3 = param_1;
    }
    if (local_58 != 0) {
      thunk_FUN_1801d3330(local_60,local_58 << 5,4);
    }
  }
  return 1;
}


