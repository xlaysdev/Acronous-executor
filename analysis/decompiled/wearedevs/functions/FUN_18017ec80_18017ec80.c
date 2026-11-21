/* FUN_18017ec80 @ 18017ec80 */

undefined8
FUN_18017ec80(longlong *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  ulonglong local_58;
  undefined8 local_50;
  int *local_48;
  code *local_40;
  int *local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  int local_18;
  int local_14 [3];
  
  local_14[1] = -2;
  local_14[2] = -1;
  local_58 = (ulonglong)(uint)(param_4 - param_3);
  local_50 = param_2;
  local_20 = local_58;
  local_18 = param_4;
  local_14[0] = param_3;
  if (param_4 - param_3 != 0x100) {
    local_48 = &local_18;
    local_40 = FUN_1801ee6c0;
    local_38 = local_14;
    local_30 = FUN_1801ee6c0;
                    /* WARNING: Subroutine does not return */
    FUN_180201c9f(0,&local_58,"",&DAT_180264ac8,&local_48,
                  &PTR_s_C__Users_burne__cargo_registry_s_180264af0);
  }
  lVar1 = *param_1;
  LOCK();
  bVar2 = CONCAT44(param_3,param_3) == *(longlong *)(lVar1 + 0x18);
  if (bVar2) {
    *(longlong *)(lVar1 + 0x18) = CONCAT44(param_4,param_4);
  }
  UNLOCK();
  if (bVar2) {
    *(int *)(lVar1 + 0x20) = param_4 + 0x80;
    local_38 = *(int **)(lVar1 + 0x10);
    local_30 = (code *)(ulonglong)(param_3 + 0x80);
    local_28 = 0;
    local_48 = (int *)0x1;
    local_40 = (code *)param_2;
    FUN_180173170(param_5,&local_48);
    param_2 = 0;
  }
  return param_2;
}


