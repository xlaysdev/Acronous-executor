/* FUN_1800e05a0 @ 1800e05a0 */

void FUN_1800e05a0(byte *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_40;
  
  if (param_1[0x610] == 0) {
    if (*param_1 < 2) {
      lVar2 = 0x20;
      lVar3 = 0x18;
      lVar1 = 0x28;
      lVar4 = 0x10;
      goto LAB_1800e06a3;
    }
    local_40 = *(longlong **)(param_1 + 8);
    (**(code **)(*local_40 + 0x20))(local_40[3],local_40[1],local_40[2]);
    lVar2 = 0x20;
    lVar3 = 0x18;
    lVar1 = 0x28;
    lVar4 = 0x10;
  }
  else {
    if (param_1[0x610] != 3) {
      return;
    }
    FUN_1800e09c0(param_1 + 0x70);
    if (param_1[0x40] < 2) {
      lVar2 = 0x60;
      lVar3 = 0x58;
      lVar1 = 0x68;
      lVar4 = 0x50;
      goto LAB_1800e06a3;
    }
    local_40 = *(longlong **)(param_1 + 0x48);
    (**(code **)(*local_40 + 0x20))(local_40[3],local_40[1],local_40[2]);
    lVar2 = 0x60;
    lVar3 = 0x58;
    lVar1 = 0x68;
    lVar4 = 0x50;
  }
  thunk_FUN_1801d3330(local_40,0x20,8);
LAB_1800e06a3:
                    /* WARNING: Could not recover jumptable at 0x0001800e06c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + lVar4) + 0x20))
            (*(undefined8 *)(param_1 + lVar1),*(undefined8 *)(param_1 + lVar3),
             *(undefined8 *)(param_1 + lVar2));
  return;
}


