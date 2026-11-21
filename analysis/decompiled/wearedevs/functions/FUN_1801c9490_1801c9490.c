/* FUN_1801c9490 @ 1801c9490 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c9490(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  void *_Dst;
  bool bVar8;
  undefined *apuStack_1090 [268];
  undefined1 auStack_830 [2048];
  undefined8 uStack_30;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  uStack_30 = 0x1801c89e1;
  if (*(longlong *)(lVar6 + 0x810) != 0) {
    lVar2 = *(longlong *)(lVar6 + 8);
    lVar7 = 0x60;
    do {
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x10) = 0;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x18) = 0;
      *(code **)((longlong)apuStack_1090 + lVar7) = FUN_180027490;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 8) = 0;
      *(code **)((longlong)apuStack_1090 + lVar7 + 0x20) = FUN_180027490;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x28) = 0;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x30) = 0;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x38) = 0;
      *(code **)((longlong)apuStack_1090 + lVar7 + 0x40) = FUN_180027490;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x48) = 0;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x50) = 0;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x58) = 0;
      *(code **)((longlong)apuStack_1090 + lVar7 + 0x60) = FUN_180027490;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x68) = 0;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x70) = 0;
      *(undefined8 *)((longlong)apuStack_1090 + lVar7 + 0x78) = 0;
      lVar7 = lVar7 + 0x80;
    } while (lVar7 != 0x860);
    apuStack_1090[6] = (undefined *)0x1801c8a5e;
    memcpy(auStack_830,(void *)(lVar6 + 0x10),0x808);
    apuStack_1090[6] = (undefined *)0x1801c8a71;
    memcpy((void *)(lVar6 + 0x10),apuStack_1090 + 0xc,0x800);
    *(undefined8 *)(lVar6 + 0x810) = 0;
    LOCK();
    UNLOCK();
    uVar3 = *(undefined8 *)(lVar2 + 0x180);
    apuStack_1090[6] = (undefined *)0x1801c8a8d;
    FUN_180027490();
    apuStack_1090[6] = (undefined *)0x1801c8a9c;
    _Dst = (void *)thunk_FUN_1801d32d0(0x818,8);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack_1090[6] = &UNK_1801c8b4a;
      FUN_180201705(8,0x818);
    }
    apuStack_1090[6] = (undefined *)0x1801c8abe;
    memcpy(_Dst,auStack_830,0x808);
    *(undefined8 *)((longlong)_Dst + 0x808) = uVar3;
    *(undefined8 *)((longlong)_Dst + 0x810) = 0;
    do {
      while( true ) {
        uVar4 = *(ulonglong *)(lVar2 + 0x100);
        uVar5 = *(ulonglong *)((uVar4 & 0xfffffffffffffff8) + 0x810);
        if (uVar5 < 8) break;
        LOCK();
        if (uVar4 == *(ulonglong *)(lVar2 + 0x100)) {
          *(ulonglong *)(lVar2 + 0x100) = uVar5;
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
    if (uVar4 == *(ulonglong *)(lVar2 + 0x100)) {
      *(ulonglong *)(lVar2 + 0x100) = (ulonglong)_Dst;
    }
    UNLOCK();
  }
  FUN_1801fecc0(*(longlong *)(lVar6 + 8) + 0x80,param_1);
  return;
}


