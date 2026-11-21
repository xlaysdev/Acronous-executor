/* FUN_1801e08b0 @ 1801e08b0 */

longlong * FUN_1801e08b0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined8 *)(lVar8 + 0x138);
  cVar2 = *(char *)(lVar8 + 0x140);
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      param_1[3] = 0;
      return param_1;
    }
    FUN_1801ffe20();
  }
  local_50 = (longlong *)*puVar1;
  *puVar1 = 0;
  if (local_50 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
  }
  else {
    LOCK();
    lVar8 = *local_50;
    *local_50 = *local_50 + 1;
    UNLOCK();
    if (*local_50 == 0 || SCARRY8(lVar8,1) != *local_50 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_68 = (longlong *)*puVar1;
  }
  *puVar1 = local_50;
  FUN_1801e4d70();
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      FUN_1801e38e0();
    }
  }
  plVar10 = local_50;
  plVar7 = (longlong *)&DAT_00000008;
  if (local_50 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar8 = local_50[4];
    lVar6 = param_2;
    lVar5 = (**(code **)(local_50[3] + 0x28))();
    if (lVar5 != 0) {
      FUN_180027490();
      plVar7 = (longlong *)thunk_FUN_1801d32d0(0x40,8);
      if (plVar7 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(8,0x40);
      }
      *plVar7 = lVar5;
      plVar7[1] = lVar6;
      local_68 = (longlong *)0x4;
      local_58 = (longlong *)0x1;
      if (lVar8 == 0) {
        local_68 = (longlong *)0x4;
        plVar9 = (longlong *)0x1;
      }
      else {
        local_60 = plVar7;
        do {
          plVar4 = local_58;
          puVar1 = (undefined8 *)(lVar8 + 0x10);
          plVar10 = (longlong *)(lVar8 + 0x18);
          lVar8 = *(longlong *)(lVar8 + 0x20);
          lVar6 = param_2;
          lVar5 = (**(code **)(*plVar10 + 0x28))(*puVar1);
          plVar9 = plVar4;
          if (lVar5 == 0) break;
          if (plVar4 == local_68) {
            FUN_180200f70(&local_68,plVar4,2 - (ulonglong)(lVar8 == 0),8,0x10);
            plVar7 = local_60;
          }
          plVar9 = (longlong *)((longlong)plVar4 + 1);
          plVar7[(longlong)plVar4 * 2] = lVar5;
          plVar7[(longlong)plVar4 * 2 + 1] = lVar6;
          local_58 = plVar9;
        } while (lVar8 != 0);
        plVar7 = local_60;
        plVar10 = local_50;
      }
      goto LAB_1801e0aa0;
    }
  }
  plVar9 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
LAB_1801e0aa0:
  param_1[3] = (longlong)plVar10;
  *param_1 = (longlong)local_68;
  param_1[1] = (longlong)plVar7;
  param_1[2] = (longlong)plVar9;
  return param_1;
}


