/* FUN_180121830 @ 180121830 */

void FUN_180121830(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    plVar3 = (longlong *)param_1[1];
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)plVar3[1];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      }
    }
    thunk_FUN_1801d3330(plVar3,0x18,8);
    return;
  }
  if (param_1[2] != 0) {
    (**(code **)(param_1[2] + 0x20))(param_1[5],param_1[3],param_1[4]);
  }
  puVar2 = (undefined8 *)param_1[1];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(lVar1);
  }
  if (puVar2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
  return;
}


