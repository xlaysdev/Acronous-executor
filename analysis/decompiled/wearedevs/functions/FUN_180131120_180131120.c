/* FUN_180131120 @ 180131120 */

void FUN_180131120(uint *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined *local_20;
  undefined8 local_18;
  undefined **local_10;
  undefined1 *local_8;
  
  uVar1 = (ulonglong)*param_1;
  if (uVar1 < 0xe) {
    local_20 = (&PTR_DAT_1802474d0)[uVar1];
    local_18 = *(undefined8 *)(&DAT_180247540 + uVar1 * 8);
  }
  else {
    local_18 = 0xe;
    local_20 = &DAT_180247171;
  }
  local_10 = &local_20;
  local_8 = &LAB_1800a5660;
  FUN_1801ef150(*param_2,param_2[1],&DAT_18024717f,&local_10);
  return;
}


