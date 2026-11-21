/* FUN_180091260 @ 180091260 */

undefined4 * FUN_180091260(undefined4 *param_1,void *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_2d8 [336];
  undefined1 local_188 [152];
  longlong *local_f0 [2];
  longlong *local_e0 [10];
  byte local_90 [8];
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58 [2];
  longlong *local_48 [2];
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  memcpy(local_188,param_2,0x150);
  if (*(char *)((longlong)param_3 + 0x29) == '\x03') {
    memcpy(local_2d8,param_2,0x150);
    FUN_1800e39f0(param_1,local_2d8,param_3);
  }
  else {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[9];
    uVar11 = param_3[10];
    uVar12 = param_3[0xb];
    param_1[8] = param_3[8];
    param_1[9] = uVar10;
    param_1[10] = uVar11;
    param_1[0xb] = uVar12;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[6] = uVar8;
    param_1[7] = uVar9;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    *(undefined1 *)(param_1 + 0x1c) = 5;
    FUN_1800812e0(local_90);
    if (1 < local_90[0]) {
      local_38 = local_88;
      (**(code **)(*local_88 + 0x20))(local_88[3],local_88[1],local_88[2]);
      thunk_FUN_1801d3330(local_38,0x20,8);
    }
    (**(code **)(local_80 + 0x20))(local_68,local_78,local_70);
    if (1 < local_60 + 1U) {
      LOCK();
      plVar1 = (longlong *)(local_60 + 8);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        thunk_FUN_1801d3330(local_60,0xe8,8);
      }
    }
    if (local_48[0] != (longlong *)0x0) {
      LOCK();
      *local_48[0] = *local_48[0] + -1;
      UNLOCK();
      if (*local_48[0] == 0) {
        FUN_18003cf20(local_48);
      }
    }
    LOCK();
    *local_f0[0] = *local_f0[0] + -1;
    UNLOCK();
    if (*local_f0[0] == 0) {
      FUN_18003cc40(local_f0);
    }
    if (local_e0[0] != (longlong *)0x0) {
      LOCK();
      *local_e0[0] = *local_e0[0] + -1;
      UNLOCK();
      if (*local_e0[0] == 0) {
        FUN_18003cc40(local_e0);
      }
    }
    LOCK();
    *local_58[0] = *local_58[0] + -1;
    UNLOCK();
    if (*local_58[0] == 0) {
      FUN_18003cc40(local_58);
    }
  }
  return param_1;
}


