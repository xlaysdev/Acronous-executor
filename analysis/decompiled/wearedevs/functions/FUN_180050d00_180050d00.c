/* FUN_180050d00 @ 180050d00 */

void FUN_180050d00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_2 == (longlong *)0x0 || param_1 != 0) {
    return;
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)param_2[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  thunk_FUN_1801d3330(param_2,0x18,8);
  return;
}


