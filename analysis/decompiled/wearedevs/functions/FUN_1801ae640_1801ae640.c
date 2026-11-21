/* FUN_1801ae640 @ 1801ae640 */

undefined8 * FUN_1801ae640(undefined8 *param_1,longlong *param_2)

{
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_1f;
  undefined7 uStack_17;
  undefined1 uStack_10;
  undefined7 uStack_f;
  
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    local_20 = (undefined1)param_2[1];
    local_28 = 0;
  }
  else {
    (**(code **)*param_2)(&local_28,param_2 + 3,param_2[1],param_2[2]);
    local_48 = local_1f;
    uStack_40 = uStack_17;
    uStack_39 = uStack_10;
    uStack_38 = uStack_f;
  }
  *param_1 = local_28;
  *(undefined1 *)(param_1 + 1) = local_20;
  *(undefined8 *)((longlong)param_1 + 9) = local_48;
  *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT17(uStack_39,uStack_40);
  param_1[3] = CONCAT71(uStack_38,uStack_39);
  return param_1;
}


