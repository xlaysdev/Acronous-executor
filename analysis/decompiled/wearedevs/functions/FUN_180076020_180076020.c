/* FUN_180076020 @ 180076020 */

void FUN_180076020(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      lVar1 = param_1[2];
      puVar2 = (undefined8 *)param_1[3];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      }
    }
    else {
      (**(code **)(param_1[1] + 0x20))(param_1[4],param_1[2],param_1[3]);
    }
  }
  thunk_FUN_1801d3330(param_1,0x28,8);
  return;
}


