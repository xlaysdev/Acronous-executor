/* FUN_1800ee3c0 @ 1800ee3c0 */

void FUN_1800ee3c0(short *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(char *)((longlong)param_1 + 0x3a1) == '\x03') {
    FUN_1800ed620(param_1 + 0x104);
    if ((*param_1 != 3) && (lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0)) {
      puVar2 = *(undefined8 **)(param_1 + 0x1c);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      }
    }
    *(undefined1 *)(param_1 + 0x1d0) = 0;
  }
  return;
}


