/* FUN_1801b39f0 @ 1801b39f0 */

undefined8 * FUN_1801b39f0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  cVar4 = (**(code **)(*param_2 + 0x18))(param_2 + 3);
  if (cVar4 == '\0') {
    lVar1 = *local_28;
    lVar2 = local_28[1];
    lVar3 = local_28[3];
    param_1[3] = local_28[2];
    param_1[4] = lVar3;
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    *param_1 = 1;
  }
  else {
    local_19 = 0;
    (**(code **)(*local_28 + 0x10))(&local_48,local_28[3],local_28[1],local_28[2]);
    param_1[3] = local_38;
    param_1[4] = uStack_30;
    param_1[1] = local_48;
    param_1[2] = uStack_40;
    *param_1 = 0;
  }
  return param_1;
}


