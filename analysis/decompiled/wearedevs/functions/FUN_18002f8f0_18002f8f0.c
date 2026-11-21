/* FUN_18002f8f0 @ 18002f8f0 */

void FUN_18002f8f0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  longlong local_78 [2];
  longlong *local_68;
  longlong *local_60;
  undefined8 *puStack_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = param_2 + 2;
  puVar4 = (undefined8 *)param_2[1];
  puVar5 = (undefined8 *)*param_2;
  local_90 = param_1;
  do {
    if (puVar5 == puVar4) {
      *local_90 = 0;
      local_90[1] = 8;
      local_90[2] = 0;
      return;
    }
    *param_2 = (longlong)(puVar5 + 2);
    puVar6 = (undefined8 *)*puVar5;
    uVar1 = puVar5[1];
    local_88 = puVar6;
    puStack_80 = (undefined8 *)uVar1;
    cVar3 = FUN_180036580(&local_60,&local_88);
    puVar5 = puVar5 + 2;
  } while (cVar3 == '\0');
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(0x40,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,0x40);
  }
  *puVar4 = puVar6;
  puVar4[1] = uVar1;
  local_60 = (longlong *)0x4;
  local_50 = (longlong *)0x1;
  local_78[0] = param_2[2];
  local_88 = (undefined8 *)*param_2;
  puStack_80 = (undefined8 *)param_2[1];
  puStack_58 = puVar4;
  do {
    puVar5 = puStack_80;
    local_98 = local_78;
    puVar6 = local_88;
    local_68 = local_50;
    do {
      if (puVar6 == puVar5) {
        local_90[2] = (longlong)local_50;
        *local_90 = (longlong)local_60;
        local_90[1] = (longlong)puStack_58;
        return;
      }
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      local_a8 = uVar1;
      local_a0 = uVar2;
      local_88 = puVar6 + 2;
      cVar3 = FUN_180036580(&local_98,&local_a8);
      puVar6 = puVar6 + 2;
    } while (cVar3 == '\0');
    if (local_68 == local_60) {
      FUN_1801f6a80(&local_60,local_68,1,8,0x10);
      puVar4 = puStack_58;
    }
    puVar4[(longlong)local_68 * 2] = uVar1;
    puVar4[(longlong)local_68 * 2 + 1] = uVar2;
    local_50 = (longlong *)((longlong)local_68 + 1);
  } while( true );
}


