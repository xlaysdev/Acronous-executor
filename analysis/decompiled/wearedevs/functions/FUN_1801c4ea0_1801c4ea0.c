/* FUN_1801c4ea0 @ 1801c4ea0 */

void FUN_1801c4ea0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x40);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


