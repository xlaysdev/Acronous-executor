/* FUN_18014ac80 @ 18014ac80 */

longlong FUN_18014ac80(longlong param_1,int param_2)

{
  if (param_2 - 0x1000000U < 0xff004000) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: DEFAULT_MAX_FRAME_SIZE <= val && val <= MAX_MAX_FRAME_SIZE",
                  0x4c,&PTR_s_C__Users_burne__cargo_registry_s_180247778);
  }
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(int *)(param_1 + 0x74) = param_2;
  return param_1;
}


