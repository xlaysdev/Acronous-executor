/* FUN_18002caf0 @ 18002caf0 */

void FUN_18002caf0(char *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*param_1 != '\x06') {
    FUN_18000b2a0();
    return;
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (*plVar1 == 1) {
    lVar2 = plVar1[1];
    if (((uint)lVar2 & 3) == 1) {
      uVar3 = *(undefined8 *)(lVar2 + -1);
      puVar4 = *(undefined8 **)(lVar2 + 7);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(uVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_1801d3330(uVar3,puVar4[1],puVar4[2]);
      }
      thunk_FUN_1801d3330(lVar2 + -1,0x18,8);
    }
  }
  else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
    thunk_FUN_1801d3330(plVar1[1],plVar1[2],1);
  }
  thunk_FUN_1801d3330(plVar1,0x28,8);
  return;
}


