/* FUN_1801027f0 @ 1801027f0 */

void FUN_1801027f0(char *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*param_1 == '\0') {
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (((uint)lVar1 & 3) == 1) {
        uVar3 = *(undefined8 *)(lVar1 + -1);
        puVar2 = *(undefined8 **)(lVar1 + 7);
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(uVar3);
        }
        if (puVar2[1] != 0) {
          thunk_FUN_1801d3330(uVar3,puVar2[1],puVar2[2]);
        }
        thunk_FUN_1801d3330(lVar1 + -1,0x18,8);
        return;
      }
    }
    else if (*(longlong *)(param_1 + 0x18) != 0) {
      thunk_FUN_1801d3330(*(longlong *)(param_1 + 8),*(longlong *)(param_1 + 0x18) << 5,4);
      return;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x18);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
        return;
      }
    }
  }
  return;
}


