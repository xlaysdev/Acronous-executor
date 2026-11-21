/* FUN_1801e6060 @ 1801e6060 */

longlong * FUN_1801e6060(longlong *param_1)

{
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (SBORROW8(0,*param_1)) {
    local_30 = 0;
    lStack_28 = 1;
    local_20 = 0;
    FUN_1801ef150(&local_30,&PTR_LAB_1802907c8,**(undefined8 **)param_1[3],
                  (*(undefined8 **)param_1[3])[1]);
    param_1[2] = local_20;
    *param_1 = local_30;
    param_1[1] = lStack_28;
  }
  return param_1;
}


