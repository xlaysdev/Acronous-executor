/* FUN_180201da4 @ 180201da4 */

void FUN_180201da4(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = &local_28;
  local_20 = param_5;
  local_38 = &DAT_18029498c + *(int *)(&DAT_18029498c + (ulonglong)param_1 * 4);
  local_30 = *(undefined8 *)(&DAT_180294998 + (ulonglong)param_1 * 8);
  local_28 = param_4;
  local_18 = param_2;
  local_10 = param_3;
  if (param_6 == 0) {
    local_88 = &local_38;
    local_80 = &LAB_1801eddf0;
    local_78 = &local_18;
    local_70 = &LAB_1801e2cc0;
    local_60 = &LAB_1801e2cc0;
    local_68 = local_58;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_18029449a,&local_88,param_8);
  }
  local_78 = &local_48;
  local_48 = param_6;
  local_40 = param_7;
  local_88 = &local_38;
  local_80 = &LAB_1801eddf0;
  local_70 = &LAB_1801f3d10;
  local_68 = &local_18;
  local_60 = &LAB_1801e2cc0;
  local_50 = &LAB_1801e2cc0;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_1802944d1,&local_88,param_8);
}


