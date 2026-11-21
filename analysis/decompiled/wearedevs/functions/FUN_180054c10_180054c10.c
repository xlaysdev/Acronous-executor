/* FUN_180054c10 @ 180054c10 */

undefined8 * FUN_180054c10(undefined8 *param_1)

{
  undefined1 local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  char local_10;
  undefined7 uStack_f;
  
  FUN_1800530f0(&local_30);
  if (local_10 == '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_31,&DAT_180208de8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180208fc8);
  }
  param_1[4] = CONCAT71(uStack_f,local_10);
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  *param_1 = local_30;
  param_1[1] = uStack_28;
  return param_1;
}


