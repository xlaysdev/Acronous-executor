/* FUN_1801c8b90 @ 1801c8b90 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_1801c8b90(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *_Dst;
  bool bVar5;
  undefined8 auStack_11e0 [268];
  undefined8 local_980;
  longlong *local_978;
  undefined1 local_970 [2048];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_100;
  undefined8 *local_38;
  undefined8 local_28;
  
  local_38 = auStack_11e0 + 0xd;
  local_28 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_1;
  LOCK();
  lVar4 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar4,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar4 = 0x60;
  do {
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x10) = 0;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x18) = 0;
    *(code **)((longlong)auStack_11e0 + lVar4) = FUN_180027490;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 8) = 0;
    *(code **)((longlong)auStack_11e0 + lVar4 + 0x20) = FUN_180027490;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x28) = 0;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x30) = 0;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x38) = 0;
    *(code **)((longlong)auStack_11e0 + lVar4 + 0x40) = FUN_180027490;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x48) = 0;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x50) = 0;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x58) = 0;
    *(code **)((longlong)auStack_11e0 + lVar4 + 0x60) = FUN_180027490;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x68) = 0;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x70) = 0;
    *(undefined8 *)((longlong)auStack_11e0 + lVar4 + 0x78) = 0;
    lVar4 = lVar4 + 0x80;
  } while (lVar4 != 0x860);
  local_980 = 0;
  local_978 = plVar2;
  memcpy(local_970,auStack_11e0 + 0xc,0x800);
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 1;
  local_158 = 0;
  local_100 = 0;
  FUN_180027490();
  _Dst = (longlong *)thunk_FUN_1801d32d0(0x900,0x80);
  if (_Dst == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x900);
  }
  memcpy(_Dst,&local_980,0x900);
  lVar4 = plVar2[0x40];
  do {
    *_Dst = lVar4;
    LOCK();
    lVar1 = plVar2[0x40];
    bVar5 = lVar4 == lVar1;
    if (bVar5) {
      plVar2[0x40] = (longlong)_Dst;
    }
    else {
      lVar4 = lVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return _Dst;
}


