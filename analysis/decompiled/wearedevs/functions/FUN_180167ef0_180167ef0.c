/* FUN_180167ef0 @ 180167ef0 */

void FUN_180167ef0(char *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_48;
  longlong local_38;
  
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801635e0();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_180168500();
    }
    lVar2 = *(longlong *)(param_1 + 0x38);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 8);
    local_38 = 0;
    while (lVar2 != local_38) {
      local_38 = local_38 + 1;
      plVar1 = puVar4 + -1;
      uVar3 = *puVar4;
      puVar4 = puVar4 + 2;
      (**(code **)(*plVar1 + 0x18))(uVar3);
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801639b0();
    }
    FUN_180167800(*(undefined8 *)(param_1 + 0x18));
    lVar2 = *(longlong *)(param_1 + 0x38);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 8);
    local_38 = 0;
    while (lVar2 != local_38) {
      local_38 = local_38 + 1;
      plVar1 = puVar4 + -1;
      uVar3 = *puVar4;
      puVar4 = puVar4 + 2;
      (**(code **)(*plVar1 + 0x18))(uVar3);
    }
  }
  local_48 = (longlong *)(param_1 + 0x28);
  if (*local_48 == 0) {
    return;
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x30),*local_48 << 4,8);
  return;
}


