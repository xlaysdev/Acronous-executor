/* FUN_1801b4480 @ 1801b4480 */

longlong * FUN_1801b4480(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char local_30;
  undefined7 uStack_2f;
  undefined *local_28;
  longlong local_20;
  longlong local_18;
  
  if (param_3 == 0) {
    local_28 = &DAT_180286008;
    local_20 = 1;
  }
  else {
    if (*(char *)(param_2 + -1 + param_3) != '\0') {
      FUN_1801ed660(&local_30);
      if (CONCAT71(uStack_2f,local_30) != -0x8000000000000000) {
        *param_1 = CONCAT71(uStack_2f,local_30);
        param_1[1] = (longlong)local_28;
        param_1[2] = local_20;
        param_1[3] = local_18;
        return param_1;
      }
      lVar1 = 1;
      goto LAB_1801b451c;
    }
    FUN_1801edf00(&local_30);
    if (local_30 != '\0') {
      *param_1 = -0x7ffffffffffffff0;
      param_1[1] = (longlong)local_28;
      param_1[2] = local_20;
      return param_1;
    }
  }
  lVar1 = 0;
LAB_1801b451c:
  param_1[1] = lVar1;
  param_1[2] = (longlong)local_28;
  param_1[3] = local_20;
  *param_1 = -0x7fffffffffffffef;
  return param_1;
}


