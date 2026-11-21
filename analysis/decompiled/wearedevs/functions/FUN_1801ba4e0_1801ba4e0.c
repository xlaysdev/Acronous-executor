/* FUN_1801ba4e0 @ 1801ba4e0 */

bool FUN_1801ba4e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = FUN_1801b4ae0(*param_1);
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    if (((uint)lVar1 & 3) == 1) {
      uVar2 = *(undefined8 *)(lVar1 + -1);
      puVar3 = *(undefined8 **)(lVar1 + 7);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      }
      thunk_FUN_1801d3330(lVar1 + -1,0x18,8);
    }
    param_1[1] = lVar4;
  }
  return lVar4 != 0;
}


