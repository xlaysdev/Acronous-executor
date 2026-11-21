/* FUN_1801f5220 @ 1801f5220 */

void FUN_1801f5220(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong *local_38;
  code *local_30;
  int *local_28;
  code *local_20;
  ulonglong local_18;
  int local_c;
  
  local_c = 0;
  local_18 = *param_1;
  for (uVar1 = local_18; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
    local_c = local_c + 1;
  }
  local_38 = &local_18;
  local_30 = FUN_1801f5330;
  local_28 = &local_c;
  local_20 = FUN_1801ee780;
  FUN_1801ef150(*param_2,param_2[1],&DAT_18029478c,&local_38);
  return;
}


