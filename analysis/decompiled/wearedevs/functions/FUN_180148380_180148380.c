/* FUN_180148380 @ 180148380 */

longlong * FUN_180148380(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int local_48 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = param_2[1];
  local_30 = param_2[2];
  local_20 = param_2;
  FUN_1801f2ab0(local_48);
  if (local_48[0] == 1) {
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 2) = uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_34;
    *param_1 = 0;
    (**(code **)(*local_20 + 0x20))(local_20[3],local_28,local_30);
  }
  else {
    lVar1 = *local_20;
    lVar2 = local_20[1];
    lVar3 = local_20[3];
    param_1[2] = local_20[2];
    param_1[3] = lVar3;
    *param_1 = lVar1;
    param_1[1] = lVar2;
  }
  return param_1;
}


