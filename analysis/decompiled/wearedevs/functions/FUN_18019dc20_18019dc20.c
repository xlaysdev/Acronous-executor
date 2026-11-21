/* FUN_18019dc20 @ 18019dc20 */

longlong *
FUN_18019dc20(longlong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (uVar1 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,param_4,uVar1);
  }
  if (param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(param_3,param_4,uVar1);
  }
  lVar2 = *(longlong *)(param_2 + 8);
  if ((param_3 < uVar1 && param_3 != 0) && (*(char *)(lVar2 + param_3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.is_char_boundary(start)",0x2e,param_5);
  }
  if ((param_4 < uVar1 && param_4 != 0) && (*(char *)(lVar2 + param_4) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.is_char_boundary(end)",0x2c,param_5);
  }
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *param_1 = lVar2 + param_3;
  param_1[1] = lVar2 + param_4;
  return param_1;
}


