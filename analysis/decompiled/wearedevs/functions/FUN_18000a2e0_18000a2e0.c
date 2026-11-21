/* FUN_18000a2e0 @ 18000a2e0 */

void FUN_18000a2e0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x328) == '\0') {
    FUN_18000bbb0();
    return;
  }
  if (*(char *)(param_1 + 0x328) == '\x03') {
    if (*(char *)(param_1 + 800) == '\x03') {
      FUN_18000ac30(param_1 + 0x290);
      plVar2 = *(longlong **)(param_1 + 0x288);
      if (*plVar2 != 0) {
        thunk_FUN_1801d3330(plVar2[1],*plVar2,1);
      }
      thunk_FUN_1801d3330(plVar2,0x58,8);
      iVar1 = *(int *)(param_1 + 0x120);
    }
    else {
      if (*(char *)(param_1 + 800) == '\0') {
        FUN_18000bbb0(param_1 + 0x180);
      }
      iVar1 = *(int *)(param_1 + 0x120);
    }
    if (iVar1 != 2) {
      if ((*(char *)(param_1 + 0x150) != '\0') && (*(longlong *)(param_1 + 0x158) != 0)) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x160),*(longlong *)(param_1 + 0x158),1);
      }
      lVar3 = *(longlong *)(param_1 + 0x130);
      if ((-1 < lVar3) && (lVar3 != 0)) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x138),lVar3 << 5,8);
      }
    }
    *(undefined1 *)(param_1 + 0x329) = 0;
  }
  return;
}


