/* FUN_18000cc70 @ 18000cc70 */

void FUN_18000cc70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x3b8) == '\0') {
LAB_18000ccb2:
    FUN_18000bbb0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x3b8) == '\x03') {
    if (*(char *)(param_1 + 0x3b0) == '\x03') {
      if (*(char *)(param_1 + 0x3a8) == '\x03') {
        FUN_18000ac30(param_1 + 0x318);
        plVar1 = *(longlong **)(param_1 + 0x310);
        if (*plVar1 != 0) {
          thunk_FUN_1801d3330(plVar1[1],*plVar1,1);
        }
        thunk_FUN_1801d3330(plVar1,0x58,8);
      }
      else if (*(char *)(param_1 + 0x3a8) == '\0') {
        FUN_18000bbb0(param_1 + 0x208);
      }
      if (*(int *)(param_1 + 0x1a8) != 2) {
        if ((*(char *)(param_1 + 0x1d8) != '\0') && (*(longlong *)(param_1 + 0x1e0) != 0)) {
          thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1e8),*(longlong *)(param_1 + 0x1e0),1);
        }
        lVar2 = *(longlong *)(param_1 + 0x1b8);
        if ((-1 < lVar2) && (lVar2 != 0)) {
          thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1c0),lVar2 << 5,8);
        }
      }
      *(undefined1 *)(param_1 + 0x3b1) = 0;
    }
    else if (*(char *)(param_1 + 0x3b0) == '\0') {
      param_1 = param_1 + 0x88;
      goto LAB_18000ccb2;
    }
  }
  return;
}


