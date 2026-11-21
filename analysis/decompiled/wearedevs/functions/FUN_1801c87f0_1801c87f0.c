/* FUN_1801c87f0 @ 1801c87f0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801c87f0(longlong param_1,longlong *param_2)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *_Dst;
  ulonglong uVar7;
  bool bVar8;
  longlong *aplStack_10a8 [268];
  undefined1 local_848 [2048];
  undefined8 uStack_48;
  
  uStack_48 = 0x1801c8806;
  _Src = (void *)(param_1 + 0x10);
  uVar7 = *(ulonglong *)(param_1 + 0x810);
  aplStack_10a8[0xb] = param_2;
  if (0x3f < uVar7) {
    lVar2 = *param_2;
    do {
      if (lVar2 == 0) {
        return;
      }
      lVar3 = *(longlong *)(param_1 + 8);
      lVar6 = 0x60;
      do {
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x10) = 0;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x18) = 0;
        *(code **)((longlong)aplStack_10a8 + lVar6) = FUN_180027490;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 8) = 0;
        *(code **)((longlong)aplStack_10a8 + lVar6 + 0x20) = FUN_180027490;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x28) = 0;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x30) = 0;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x38) = 0;
        *(code **)((longlong)aplStack_10a8 + lVar6 + 0x40) = FUN_180027490;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x48) = 0;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x50) = 0;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x58) = 0;
        *(code **)((longlong)aplStack_10a8 + lVar6 + 0x60) = FUN_180027490;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x68) = 0;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x70) = 0;
        *(undefined8 *)((longlong)aplStack_10a8 + lVar6 + 0x78) = 0;
        lVar6 = lVar6 + 0x80;
      } while (lVar6 != 0x860);
      aplStack_10a8[5] = (longlong *)0x1801c88b2;
      memcpy(local_848,_Src,0x808);
      aplStack_10a8[5] = (longlong *)0x1801c88c3;
      memcpy(_Src,aplStack_10a8 + 0xc,0x800);
      *(undefined8 *)(param_1 + 0x810) = 0;
      LOCK();
      UNLOCK();
      uVar4 = *(undefined8 *)(lVar3 + 0x180);
      aplStack_10a8[5] = (longlong *)0x1801c88df;
      FUN_180027490();
      aplStack_10a8[5] = (longlong *)0x1801c88ee;
      _Dst = (void *)thunk_FUN_1801d32d0(0x818,8);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        aplStack_10a8[5] = (longlong *)&UNK_1801c89c4;
        FUN_180201705(8,0x818);
      }
      aplStack_10a8[5] = (longlong *)0x1801c890b;
      memcpy(_Dst,local_848,0x808);
      *(undefined8 *)((longlong)_Dst + 0x808) = uVar4;
      *(undefined8 *)((longlong)_Dst + 0x810) = 0;
      do {
        while( true ) {
          uVar7 = *(ulonglong *)(lVar3 + 0x100);
          uVar5 = *(ulonglong *)((uVar7 & 0xfffffffffffffff8) + 0x810);
          if (uVar5 < 8) break;
          LOCK();
          if (uVar7 == *(ulonglong *)(lVar3 + 0x100)) {
            *(ulonglong *)(lVar3 + 0x100) = uVar5;
          }
          UNLOCK();
        }
        plVar1 = (longlong *)((uVar7 & 0xfffffffffffffff8) + 0x810);
        LOCK();
        bVar8 = *plVar1 == 0;
        if (bVar8) {
          *plVar1 = (longlong)_Dst;
        }
        UNLOCK();
      } while (!bVar8);
      LOCK();
      if (uVar7 == *(ulonglong *)(lVar3 + 0x100)) {
        *(ulonglong *)(lVar3 + 0x100) = (ulonglong)_Dst;
      }
      UNLOCK();
      uVar7 = *(ulonglong *)(param_1 + 0x810);
    } while (0x3f < uVar7);
  }
  lVar2 = *aplStack_10a8[0xb];
  lVar3 = aplStack_10a8[0xb][1];
  lVar6 = aplStack_10a8[0xb][3];
  plVar1 = (longlong *)(param_1 + 0x20 + uVar7 * 0x20);
  *plVar1 = aplStack_10a8[0xb][2];
  plVar1[1] = lVar6;
  plVar1 = (longlong *)((longlong)_Src + uVar7 * 0x20);
  *plVar1 = lVar2;
  plVar1[1] = lVar3;
  *(longlong *)(param_1 + 0x810) = *(longlong *)(param_1 + 0x810) + 1;
  return;
}


