/* FUN_1800b8ef0 @ 1800b8ef0 */

ulonglong FUN_1800b8ef0(undefined8 param_1,void *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *_Buf2;
  ulonglong uVar5;
  int local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 *local_a0;
  undefined8 local_98;
  void *local_90;
  char *local_88;
  longlong local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((longlong)*(int *)((longlong)param_2 + 8) == 0) {
    local_50 = param_2;
    FUN_180101c10(local_b8);
    if (local_b8[0] == 1) {
      local_68 = local_b0;
      uStack_64 = uStack_ac;
      uStack_60 = uStack_a8;
      uStack_5c = uStack_a4;
      local_a0 = &local_68;
      local_98 = 0;
      do {
        uVar5 = FUN_180102050(&local_a0);
        if ((uVar5 & 1) == 0) {
          FUN_180101bf0(&uStack_60);
          goto LAB_1800b9024;
        }
        local_80 = 0;
        pvVar4 = param_2;
        local_70 = param_1;
        local_58 = param_2;
        do {
          while( true ) {
            uVar5 = FUN_180101170(&local_80);
            if ((uVar5 & 1) == 0) goto LAB_1800b8fe9;
            local_90 = pvVar4;
            if (*(uint *)((longlong)pvVar4 + 0x10) == *(uint *)((longlong)param_2 + 0x10)) break;
            FUN_180101100(&local_90);
          }
          _Buf2 = *(void **)((longlong)param_2 + 8);
          iVar1 = memcmp(*(void **)((longlong)pvVar4 + 8),_Buf2,
                         (ulonglong)*(uint *)((longlong)pvVar4 + 0x10));
          FUN_180101100(&local_90);
          pvVar4 = _Buf2;
        } while (iVar1 != 0);
LAB_1800b8fe9:
        param_2 = pvVar4;
        if (local_80 != 0) {
          FUN_180101100(local_78);
        }
        FUN_180101100(&local_58);
      } while ((uVar5 & 1) == 0);
      FUN_180101bf0(&uStack_60);
      uVar5 = 0;
    }
    else {
LAB_1800b9024:
      FUN_180027490();
      pcVar2 = (char *)thunk_FUN_1801d32d0(0x3f,1);
      if (pcVar2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,0x3f);
      }
      builtin_strncpy(pcVar2,"unable to find any user-specified roots in the final cert chain",0x3f)
      ;
      FUN_180027490();
      puVar3 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
      if (puVar3 == (undefined8 *)0x0) {
        local_88 = pcVar2;
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x18);
      }
      *puVar3 = 0x3f;
      puVar3[1] = pcVar2;
      puVar3[2] = 0x3f;
      uVar5 = FUN_1801d6870(0x28,puVar3,&PTR_LAB_180212518);
    }
    param_2 = local_50;
  }
  else {
    uVar5 = (longlong)*(int *)((longlong)param_2 + 8) << 0x20 | 2;
  }
  FUN_180101bf0(param_2);
  return uVar5;
}


