/* FUN_180067c70 @ 180067c70 */

void FUN_180067c70(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    lVar1 = param_1[1];
    puVar2 = (undefined8 *)param_1[2];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  else if ((int)*param_1 == 1) {
    FUN_18000b160(param_1 + 1);
    return;
  }
  return;
}


