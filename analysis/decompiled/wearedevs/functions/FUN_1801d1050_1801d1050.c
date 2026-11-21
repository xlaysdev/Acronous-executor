/* FUN_1801d1050 @ 1801d1050 */

bool FUN_1801d1050(int *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  short *psVar2;
  
  bVar1 = true;
  if (param_4 * 2 < param_2) {
    if (param_2 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("mid > len",0x13,&PTR_s_C__Users_burne__cargo_registry_s_18028a360);
    }
    if (param_2 - param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,param_3,param_2 - param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a378);
    }
    if (param_4 <= param_3) {
      for (; 3 < param_4; param_4 = param_4 - 4) {
        if (*(int *)((longlong)param_1 + param_3) != *param_1) {
          return bVar1;
        }
        param_1 = param_1 + 1;
      }
      psVar2 = (short *)((longlong)param_1 + param_3);
      if (1 < param_4) {
        if (*psVar2 != (short)*param_1) {
          return bVar1;
        }
        psVar2 = psVar2 + 1;
        param_1 = (int *)((longlong)param_1 + 2);
        param_4 = param_4 - 2;
      }
      if (param_4 == 0) {
        return false;
      }
      return (char)*psVar2 != (char)*param_1;
    }
  }
  return bVar1;
}


