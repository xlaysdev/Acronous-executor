/* FUN_18000bbb0 @ 18000bbb0 */

void FUN_18000bbb0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  FUN_18000b470();
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    FUN_18002a190();
    thunk_FUN_1801d3330(lVar1,0x20,8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  puVar3 = *(undefined8 **)(param_1 + 0x78);
  if ((code *)*puVar3 != (code *)0x0) {
    (*(code *)*puVar3)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
  }
  plVar4 = *(longlong **)(param_1 + 0x80);
  if (*plVar4 != 0) {
    thunk_FUN_1801d3330(plVar4[1],*plVar4,1);
  }
  thunk_FUN_1801d3330(plVar4,0x58,8);
  return;
}


