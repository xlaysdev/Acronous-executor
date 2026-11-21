/* FUN_18012e200 @ 18012e200 */

void FUN_18012e200(undefined1 *param_1,char *param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*param_2 == '\0') {
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar1 = (ulonglong)*(uint *)(param_2 + 8);
    cVar5 = param_2[1];
    uVar2 = 0;
  }
  else if (*param_2 == '\x01') {
    uVar1 = *(ulonglong *)(param_2 + 8);
    local_18 = *(undefined8 *)(param_2 + 0x20);
    local_28 = *(longlong *)(param_2 + 0x10);
    uStack_20 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined4 *)(param_2 + 4);
    cVar5 = param_2[1];
    uVar2 = 1;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 8);
    cVar5 = -(char)lVar4;
    if (SBORROW8(0,lVar4)) {
      uVar1 = (ulonglong)(byte)param_2[1] << 0x20 | 3;
    }
    else {
      uStack_20 = *(undefined8 *)(param_2 + 0x10);
      local_18 = *(undefined8 *)(param_2 + 0x18);
      local_28 = lVar4;
      uVar1 = FUN_18018c8e0(param_2[1],&local_28);
    }
    uVar3 = (undefined4)lVar4;
    uVar2 = 4;
  }
  *param_1 = uVar2;
  param_1[1] = cVar5;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(ulonglong *)(param_1 + 8) = uVar1;
  *(longlong *)(param_1 + 0x10) = local_28;
  *(undefined8 *)(param_1 + 0x18) = uStack_20;
  *(undefined8 *)(param_1 + 0x20) = local_18;
  return;
}


