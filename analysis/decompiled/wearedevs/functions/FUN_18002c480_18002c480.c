/* FUN_18002c480 @ 18002c480 */

longlong * FUN_18002c480(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  short *psVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_7b8;
  longlong *local_7b0;
  undefined1 local_7a8 [584];
  int local_560;
  undefined4 uStack_55c;
  longlong *local_558;
  longlong *local_550;
  undefined1 local_548 [600];
  longlong local_2f0;
  longlong *local_2e8;
  longlong *local_2e0 [76];
  longlong *local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  cVar1 = FUN_1801de2e0();
  if (cVar1 == '\0') {
    plVar4 = (longlong *)FUN_1801d6710(0,&DAT_180205c47,0x18);
    return plVar4;
  }
  FUN_1801da000(&local_560,param_1,param_2);
  local_2e8 = local_558;
  local_2f0 = CONCAT44(uStack_55c,local_560);
  if (local_2f0 != 2) {
    memcpy(local_2e0,&local_550,0x260);
    while (FUN_1801e4ce0(&local_560,&local_2f0), plVar3 = local_550, plVar4 = local_558,
          local_560 == 1) {
      if (local_558 == (longlong *)0x0) {
LAB_18002c6f3:
        if (local_2f0 != 0) {
          FUN_1801e5800(&local_2e8);
        }
        LOCK();
        *local_2e0[0] = *local_2e0[0] + -1;
        UNLOCK();
        if (*local_2e0[0] == 0) {
          FUN_18002d110(local_2e0[0]);
          return plVar3;
        }
        return plVar3;
      }
      memcpy(local_7a8,local_548,0x248);
      local_50 = plVar4;
      local_7b8 = plVar4;
      local_7b0 = plVar3;
      FUN_1801d5660(&local_70,&local_7b8);
      cVar1 = FUN_1801de520(local_68,local_60);
      if (((cVar1 != '\0') &&
          (lVar5 = local_60, psVar2 = (short *)FUN_1801de640(local_68),
          lVar5 == 3 && psVar2 != (short *)0x0)) && ((char)psVar2[1] == 'd' && *psVar2 == 0x6c6f)) {
        local_78 = &LAB_1801e3450;
        local_80 = &local_70;
        FUN_1801d72f0(&DAT_180205c5f,&local_80);
        plVar3 = (longlong *)FUN_1801d8b90(local_68,local_60);
        if (plVar3 != (longlong *)0x0) {
          if (local_70 != 0) {
            thunk_FUN_1801d3330(local_68,local_70,1);
          }
          LOCK();
          *local_50 = *local_50 + -1;
          UNLOCK();
          if (*local_50 == 0) {
            FUN_18002d110();
          }
          goto LAB_18002c6f3;
        }
      }
      if (local_70 != 0) {
        thunk_FUN_1801d3330(local_68,local_70,1);
      }
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 == 0) {
        FUN_18002d110();
      }
    }
    if (local_2f0 != 0) {
      FUN_1801e5800(&local_2e8);
    }
    LOCK();
    *local_2e0[0] = *local_2e0[0] + -1;
    UNLOCK();
    if (*local_2e0[0] == 0) {
      FUN_18002d110(local_2e0[0]);
    }
    local_558 = (longlong *)0x0;
  }
  return local_558;
}


