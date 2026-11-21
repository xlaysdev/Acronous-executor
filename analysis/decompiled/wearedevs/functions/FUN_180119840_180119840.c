/* FUN_180119840 @ 180119840 */

undefined8 * FUN_180119840(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  code *local_10;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_18 = &local_20;
  local_10 = FUN_1801eecc0;
  local_20 = param_2;
  cVar1 = FUN_1801ef150(&local_38,&DAT_180240a50,&DAT_180240a45,&local_18);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("CHUNK_SIZE_MAX_BYTES should fit any usize",0x29,&local_39,&DAT_180240a00,
                  &PTR_s_C__Users_burne__cargo_registry_s_180240b18);
  }
  *(undefined4 *)(param_1 + 2) = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_30;
  return param_1;
}


