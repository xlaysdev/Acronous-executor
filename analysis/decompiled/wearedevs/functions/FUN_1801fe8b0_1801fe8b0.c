/* FUN_1801fe8b0 @ 1801fe8b0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801fe8b0(ulonglong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  void *_Dst;
  bool bVar8;
  undefined1 local_1048 [1960];
  ulonglong *apuStack_8a0 [268];
  ulonglong *local_40;
  ulonglong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  param_1[0x104] = 1;
  uVar2 = param_1[0x103];
  apuStack_8a0[0xc] = param_1;
  local_38 = param_1;
  if (uVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180288610);
  }
  param_1[0x103] = uVar2 + 1;
  if (uVar2 == 0) {
    LOCK();
    if (param_1[0x110] == 0) {
      param_1[0x110] = *(ulonglong *)(param_1[1] + 0x180) | 1;
    }
    UNLOCK();
    uVar2 = param_1[0x105];
    param_1[0x105] = uVar2 + 1;
    if ((uVar2 & 0x7f) == 0) {
      FUN_1801fecc0(param_1[1] + 0x80,apuStack_8a0 + 0xc);
    }
  }
  puVar6 = local_38;
  local_40 = local_38;
  uVar2 = local_38[1];
  lVar7 = 0x60;
  do {
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x10) = 0;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x18) = 0;
    *(code **)((longlong)apuStack_8a0 + lVar7) = FUN_180027490;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 8) = 0;
    *(code **)((longlong)apuStack_8a0 + lVar7 + 0x20) = FUN_180027490;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x28) = 0;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x30) = 0;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x38) = 0;
    *(code **)((longlong)apuStack_8a0 + lVar7 + 0x40) = FUN_180027490;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x48) = 0;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x50) = 0;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x58) = 0;
    *(code **)((longlong)apuStack_8a0 + lVar7 + 0x60) = FUN_180027490;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x68) = 0;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x70) = 0;
    *(undefined8 *)((longlong)apuStack_8a0 + lVar7 + 0x78) = 0;
    lVar7 = lVar7 + 0x80;
  } while (lVar7 != 0x860);
  memcpy(local_1048,puVar6 + 2,0x808);
  memcpy(puVar6 + 2,apuStack_8a0 + 0xc,0x800);
  puVar6[0x102] = 0;
  LOCK();
  UNLOCK();
  uVar3 = *(undefined8 *)(uVar2 + 0x180);
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x818,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x818);
  }
  memcpy(_Dst,local_1048,0x808);
  *(undefined8 *)((longlong)_Dst + 0x808) = uVar3;
  *(undefined8 *)((longlong)_Dst + 0x810) = 0;
  do {
    while( true ) {
      uVar4 = *(ulonglong *)(uVar2 + 0x100);
      uVar5 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) + 0x810);
      if (uVar5 < 8) break;
      LOCK();
      if (uVar4 == *(ulonglong *)(uVar2 + 0x100)) {
        *(ulonglong *)(uVar2 + 0x100) = uVar5;
      }
      UNLOCK();
    }
    plVar1 = (longlong *)((uVar4 & 0xfffffffffffffff8) + 0x810);
    LOCK();
    bVar8 = *plVar1 == 0;
    if (bVar8) {
      *plVar1 = (longlong)_Dst;
    }
    UNLOCK();
  } while (!bVar8);
  LOCK();
  if (uVar4 == *(ulonglong *)(uVar2 + 0x100)) {
    *(ulonglong *)(uVar2 + 0x100) = (ulonglong)_Dst;
  }
  UNLOCK();
  uVar2 = puVar6[0x103];
  puVar6[0x103] = uVar2 - 1;
  if ((uVar2 == 1) && (puVar6[0x110] = 0, puVar6[0x104] == 0)) {
    FUN_1801fe8b0(puVar6);
  }
  puVar6[0x104] = 0;
  apuStack_8a0[0xc] = (ulonglong *)puVar6[1];
  LOCK();
  *puVar6 = *puVar6 | 1;
  UNLOCK();
  LOCK();
  *apuStack_8a0[0xc] = *apuStack_8a0[0xc] + -1;
  UNLOCK();
  if (*apuStack_8a0[0xc] == 0) {
    FUN_1801c8fe0(apuStack_8a0 + 0xc);
  }
  return;
}


