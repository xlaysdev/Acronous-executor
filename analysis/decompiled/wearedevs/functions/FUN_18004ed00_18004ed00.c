/* FUN_18004ed00 @ 18004ed00 */

undefined8 * FUN_18004ed00(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  
  if (*param_2 != 1) {
    FUN_18004edd0(param_1,*(undefined8 *)(param_2 + 2));
    return param_1;
  }
  lVar1 = *(longlong *)(param_2 + 2);
  param_2[2] = 0;
  param_2[3] = 0;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("Pending error polled more than once",0x23,
                  &PTR_s_C__Users_burne__cargo_registry_s_180208a50);
  }
  *param_1 = 3;
  param_1[1] = lVar1;
  return param_1;
}


