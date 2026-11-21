/* FUN_180067940 @ 180067940 */

void FUN_180067940(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_1 = (longlong *)*param_1;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  thunk_FUN_1801d3330(param_1,0x18,8);
  return;
}


