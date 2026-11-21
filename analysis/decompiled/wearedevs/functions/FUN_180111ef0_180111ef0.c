/* FUN_180111ef0 @ 180111ef0 */

uint FUN_180111ef0(int param_1,undefined1 *param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = -param_1 & 3;
  if (uVar1 != 0) {
    if (param_3 == 0) {
LAB_180111f29:
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(param_3,param_3,&PTR_s_C__Users_burne__cargo_registry_s_18023ef10);
    }
    *param_2 = 0x3d;
    if (uVar1 != 1) {
      if (param_3 == 1) goto LAB_180111f29;
      param_2[1] = 0x3d;
      if (uVar1 != 2) {
        if (param_3 == 2) goto LAB_180111f29;
        param_2[2] = 0x3d;
      }
    }
  }
  return uVar1;
}


