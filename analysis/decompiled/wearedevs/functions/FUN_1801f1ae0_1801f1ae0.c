/* FUN_1801f1ae0 @ 1801f1ae0 */

undefined1 * FUN_1801f1ae0(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  byte local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  longlong local_18;
  
  local_20 = param_2;
  local_18 = param_3;
  FUN_1801f1640(&local_31,&local_20);
  if (local_18 == 0) {
    if ((local_31 & 1) != 0) {
      *(undefined8 *)(param_1 + 1) = local_30;
      *(undefined8 *)(param_1 + 9) = uStack_28;
      uVar1 = 0;
      goto LAB_1801f1b2a;
    }
    param_1[1] = 2;
  }
  else {
    param_1[1] = 2;
  }
  uVar1 = 1;
LAB_1801f1b2a:
  *param_1 = uVar1;
  return param_1;
}


