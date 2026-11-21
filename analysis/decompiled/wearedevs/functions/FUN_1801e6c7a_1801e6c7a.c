/* FUN_1801e6c7a @ 1801e6c7a */

undefined8 * FUN_1801e6c7a(undefined8 *param_1)

{
  char local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_1801e9f48(&local_58);
  if (local_58 == '\0') {
    *param_1 = 2;
  }
  else {
    param_1[6] = local_28;
    param_1[7] = uStack_20;
    param_1[4] = local_38;
    param_1[5] = uStack_30;
    param_1[2] = local_48;
    param_1[3] = uStack_40;
    *param_1 = CONCAT71(uStack_57,local_58);
    param_1[1] = uStack_50;
  }
  return param_1;
}


