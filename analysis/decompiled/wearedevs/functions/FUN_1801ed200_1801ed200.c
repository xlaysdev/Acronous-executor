/* FUN_1801ed200 @ 1801ed200 */

ulonglong * FUN_1801ed200(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_a8;
  ulonglong uStack_a0;
  void *local_98;
  ulonglong local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = param_2;
  uStack_70 = param_3;
  FUN_1801f5900(&local_98,&local_78);
  uVar2 = local_90;
  pvVar1 = local_98;
  if (local_98 == (void *)0x0) {
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    if (local_80 != 0) {
      if (param_3 == 0) {
        uStack_58 = 1;
      }
      else {
        FUN_180027490();
        uStack_58 = thunk_FUN_1801d32d0(param_3,1);
        if (uStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(1,param_3);
        }
      }
      local_50 = 0;
      local_68 = param_1;
      local_60 = param_3;
      if (param_3 < uVar2) {
        FUN_180201860(&local_60,0,uVar2);
      }
      uVar4 = local_50;
      uVar5 = uStack_58;
      uVar6 = local_60;
      memcpy((void *)(uStack_58 + local_50),pvVar1,uVar2);
      local_50 = uVar4 + uVar2;
      if (uVar6 - local_50 < 3) {
        FUN_180201860(&local_60,local_50,3);
        uVar5 = uStack_58;
      }
      *(undefined1 *)(uVar5 + 2 + local_50) = 0xbd;
      *(undefined2 *)(uVar5 + local_50) = 0xbfef;
      local_50 = local_50 + 3;
      local_a8 = local_78;
      uStack_a0 = uStack_70;
      while( true ) {
        uVar6 = local_50;
        FUN_1801f5900(&local_98,&local_a8);
        lVar3 = local_80;
        uVar2 = local_90;
        pvVar1 = local_98;
        if (local_98 == (void *)0x0) break;
        if (local_60 - uVar6 < local_90) {
          FUN_180201860(&local_60,uVar6,local_90);
          uVar6 = local_50;
        }
        uVar5 = uStack_58;
        memcpy((void *)(uStack_58 + uVar6),pvVar1,uVar2);
        local_50 = uVar6 + uVar2;
        if (lVar3 != 0) {
          if (local_60 - local_50 < 3) {
            FUN_180201860(&local_60,local_50,3);
            uVar5 = uStack_58;
          }
          *(undefined1 *)(uVar5 + 2 + local_50) = 0xbd;
          *(undefined2 *)(uVar5 + local_50) = 0xbfef;
          local_50 = local_50 + 3;
        }
      }
      local_68[2] = local_50;
      *local_68 = local_60;
      local_68[1] = uStack_58;
      return local_68;
    }
    param_1[1] = (ulonglong)local_98;
    param_1[2] = local_90;
  }
  *param_1 = 0x8000000000000000;
  return param_1;
}


