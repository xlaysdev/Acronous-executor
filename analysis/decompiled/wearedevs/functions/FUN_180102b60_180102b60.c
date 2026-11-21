/* FUN_180102b60 @ 180102b60 */

void FUN_180102b60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x20);
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    FUN_1801027f0(param_1 + 0x40);
  }
  else if (*(int *)(param_1 + 0x38) == 0) {
    if (*(longlong *)(param_1 + 0x48) != 0 && *(longlong *)(param_1 + 0x40) != 0) {
      thunk_FUN_1801d3330(*(longlong *)(param_1 + 0x40),*(longlong *)(param_1 + 0x48),1,param_4,
                          param_1,uVar2);
    }
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x80));
  }
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x88);
    }
  }
  thunk_FUN_1801d3330(param_1,0x100,0x80);
  return;
}


