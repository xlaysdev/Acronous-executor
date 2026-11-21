/* FUN_180195ba0 @ 180195ba0 */

void FUN_180195ba0(longlong *param_1,void *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  longlong local_68;
  void *local_60;
  undefined *local_58;
  void *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_40 = (undefined4)param_1[6];
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_38 = (undefined4)param_1[7];
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_50 = param_2;
  local_48 = param_3;
  local_68 = FUN_180191ad0(&local_50);
  if (local_68 != 0) {
    do {
      local_58 = &DAT_1802670c0;
      local_60 = param_2;
      _Src = (void *)FUN_1801aac60(&local_68);
      if (_Src != (void *)0x0) {
        lVar1 = param_1[2];
        do {
          if ((void *)(*param_1 - lVar1) < param_2) {
            FUN_1801f6a80(param_1,lVar1,param_2,1,1);
            lVar1 = param_1[2];
          }
          memcpy((void *)(param_1[1] + lVar1),_Src,(size_t)param_2);
          lVar1 = lVar1 + (longlong)param_2;
          param_1[2] = lVar1;
          param_2 = _Src;
          _Src = (void *)FUN_1801aac60(&local_68);
        } while (_Src != (void *)0x0);
      }
      local_68 = FUN_180191ad0(&local_50);
    } while (local_68 != 0);
  }
  return;
}


