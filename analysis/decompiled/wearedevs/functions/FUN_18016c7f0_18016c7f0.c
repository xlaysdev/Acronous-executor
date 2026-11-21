/* FUN_18016c7f0 @ 18016c7f0 */

void FUN_18016c7f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar3 = *(longlong *)(param_1 + 8) + 0x18;
    lVar4 = 1 - *(longlong *)(param_1 + 0x10);
    do {
      uVar1 = *(undefined8 *)(lVar3 + -0x18);
      puVar2 = *(undefined8 **)(lVar3 + -0x10);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 1);
  }
  return;
}


