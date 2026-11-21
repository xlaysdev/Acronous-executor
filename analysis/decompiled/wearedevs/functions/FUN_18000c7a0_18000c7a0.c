/* FUN_18000c7a0 @ 18000c7a0 */

void FUN_18000c7a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    FUN_18000cec0(param_1 + 0x18);
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\x04') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x200) == '\x03') {
      FUN_18000ac30(param_1 + 0x170);
      plVar2 = *(longlong **)(param_1 + 0x168);
      if (*plVar2 != 0) {
        thunk_FUN_1801d3330(plVar2[1],*plVar2,1);
      }
      thunk_FUN_1801d3330(plVar2,0x58,8);
    }
    else if (*(char *)(param_1 + 0x200) == '\0') {
      FUN_18000bbb0(param_1 + 0x60);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x28),*(longlong *)(param_1 + 0x20),1);
      }
      goto LAB_18000c88e;
    }
    FUN_18000c9d0(param_1 + 0x60);
  }
  *(undefined2 *)(param_1 + 0x59) = 0;
LAB_18000c88e:
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x2b0),*(longlong *)(param_1 + 0x2a8),1);
  }
  FUN_18000b2a0(param_1 + 0x288);
  if (*(longlong *)(param_1 + 0x268) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x270),*(longlong *)(param_1 + 0x268),1);
  }
  FUN_18000b2a0(param_1 + 0x248);
  return;
}


