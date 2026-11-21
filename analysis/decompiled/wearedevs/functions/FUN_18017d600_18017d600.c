/* FUN_18017d600 @ 18017d600 */

void FUN_18017d600(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar4 = param_1[7];
  uVar5 = param_1[8];
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar8 = *(undefined4 *)(param_1 + 2);
  uVar9 = *(undefined4 *)(param_1 + 3);
  local_88 = *param_1;
  uStack_80 = param_1[1];
  local_78 = *(undefined4 *)(param_1 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_70 = *(undefined4 *)(param_1 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_29 = 1;
  uVar10 = uVar1;
  uVar11 = uVar2;
  uVar12 = uVar4;
  uVar13 = uVar5;
  uVar14 = uVar6;
  uVar15 = uVar7;
  uVar16 = uVar8;
  uVar17 = uVar9;
  local_38 = param_1;
  FUN_18016d1a0(&local_88);
  local_78 = *(undefined4 *)(local_38 + 7);
  uStack_74 = *(undefined4 *)((longlong)local_38 + 0x3c);
  uStack_70 = *(undefined4 *)(local_38 + 8);
  uStack_6c = *(undefined4 *)((longlong)local_38 + 0x44);
  local_29 = 0;
  local_88 = uVar1;
  uStack_80 = uVar2;
  FUN_18016d1d0(&local_88);
  local_40 = 0;
  plVar3 = (longlong *)local_38[4];
  local_38 = local_38 + 4;
  if ((plVar3[3] != 0) && (local_58 = plVar3[4], local_58 != 0)) {
    local_48 = (undefined8 *)plVar3[5];
    local_60 = plVar3;
    if ((code *)*local_48 != (code *)0x0) {
      (*(code *)*local_48)(local_58);
    }
    plVar3 = local_60;
    if (local_48[1] != 0) {
      thunk_FUN_1801d3330(local_58,local_48[1],local_48[2],param_4,uVar4,uVar5,uVar6,uVar7,uVar8,
                          uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
    }
  }
  plVar3[3] = 1;
  plVar3[4] = local_40;
  plVar3[5] = local_50;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    local_2a = 0;
    local_68 = plVar3;
    FUN_1801e3850(&local_68);
  }
  return;
}


