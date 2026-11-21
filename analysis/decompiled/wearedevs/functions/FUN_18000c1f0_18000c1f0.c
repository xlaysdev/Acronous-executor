/* FUN_18000c1f0 @ 18000c1f0 */

void FUN_18000c1f0(char *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*param_1 == '\0') {
    FUN_18000ab10();
  }
  else {
    lVar3 = 1;
    if (1 < *(ulonglong *)(param_1 + 8)) {
      lVar3 = *(ulonglong *)(param_1 + 8) - 2;
    }
    if (lVar3 == 1) {
      FUN_18000ab10();
    }
    else if (lVar3 == 0) {
      FUN_18000a7c0(param_1 + 0x10);
      FUN_18000a460(param_1 + 0x1f0);
    }
  }
  FUN_18000a7c0(param_1 + 0x300);
  plVar1 = *(longlong **)(param_1 + 0x580);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dbb0(param_1 + 0x580);
  }
  lVar3 = *(longlong *)(param_1 + 0x578);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x570) + 8);
    do {
      if (puVar4[-1] != 0) {
        thunk_FUN_1801d3330(*puVar4,puVar4[-1],1);
      }
      puVar4 = puVar4 + 0xb;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x568) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x570),*(longlong *)(param_1 + 0x568) * 0x58,8);
  }
  if ((10 < (byte)param_1[0x5e8]) && (*(longlong *)(param_1 + 0x5f8) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x5f0),*(longlong *)(param_1 + 0x5f8),1);
  }
  FUN_18000adf0(param_1 + 0x590);
  FUN_18000b470(param_1 + 0x4e0);
  if (*(longlong *)(param_1 + 0x540) == 0) {
    if (*(longlong *)(param_1 + 0x548) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018000c37b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x548) + 0x20))
                (*(undefined8 *)(param_1 + 0x560),*(undefined8 *)(param_1 + 0x550),
                 *(undefined8 *)(param_1 + 0x558));
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x550);
    puVar4 = *(undefined8 **)(param_1 + 0x558);
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(uVar2);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_1801d3330(uVar2,puVar4[1],puVar4[2]);
      return;
    }
  }
  return;
}


