/* FUN_1801e1f70 @ 1801e1f70 */

void FUN_1801e1f70(undefined8 param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1,param_2[1],param_2[2]);
  return;
}


