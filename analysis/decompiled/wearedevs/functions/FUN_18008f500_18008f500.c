/* FUN_18008f500 @ 18008f500 */

void FUN_18008f500(longlong *param_1)

{
  if (*param_1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018008f53d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x20))(param_1[4],param_1[2],param_1[3],*(code **)(param_1[1] + 0x20))
    ;
    return;
  }
  if (((int)*param_1 == 1) && (param_1[2] != 0)) {
    thunk_FUN_1801d3330(param_1[1],param_1[2],1);
    return;
  }
  return;
}


