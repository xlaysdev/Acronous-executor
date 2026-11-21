/* FUN_1800439a0 @ 1800439a0 */

void FUN_1800439a0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar1 = param_1[6];
  if (uVar1 != 0x8000000000000002) {
    FUN_18000adf0(param_1 + 0xc);
    uVar3 = 2;
    if ((longlong)uVar1 < 0) {
      uVar3 = uVar1 ^ 0x8000000000000000;
    }
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        (**(code **)(param_1[7] + 0x20))(param_1[10],param_1[8],param_1[9]);
      }
      else {
        if (uVar1 != 0) {
          thunk_FUN_1801d3330(param_1[7],uVar1,1);
        }
        if (param_1[9] != 0) {
          thunk_FUN_1801d3330(param_1[10],param_1[9],1);
        }
      }
    }
  }
  uVar1 = param_1[0x17];
  if (uVar1 != 0x8000000000000002) {
    FUN_18000adf0(param_1 + 0x1d);
    uVar3 = 2;
    if ((longlong)uVar1 < 0) {
      uVar3 = uVar1 ^ 0x8000000000000000;
    }
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        (**(code **)(param_1[0x18] + 0x20))(param_1[0x1b],param_1[0x19],param_1[0x1a]);
      }
      else {
        if (uVar1 != 0) {
          thunk_FUN_1801d3330(param_1[0x18],uVar1,1);
        }
        if (param_1[0x1a] != 0) {
          thunk_FUN_1801d3330(param_1[0x1b],param_1[0x1a],1);
        }
      }
    }
  }
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1 * 0x12,1);
  }
  lVar2 = param_1[4];
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar4[-1] != 0) {
        thunk_FUN_1801d3330(*puVar4,puVar4[-1],1);
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[3] == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar2,param_1[3] * 0x18,8);
  return;
}


