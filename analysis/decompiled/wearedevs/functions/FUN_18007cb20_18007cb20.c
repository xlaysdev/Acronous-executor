/* FUN_18007cb20 @ 18007cb20 */

void FUN_18007cb20(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_1800755d0(param_1 + 5);
  if ((char)param_1[4] != '\x02') {
    (**(code **)(*param_1 + 0x20))(param_1[3],param_1[1],param_1[2]);
  }
  if (param_1[8] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00018007cb81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[8] + 0x20))(param_1[0xb],param_1[9],param_1[10]);
    return;
  }
  lVar1 = param_1[9];
  puVar2 = (undefined8 *)param_1[10];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(lVar1);
  }
  if (puVar2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
  return;
}


