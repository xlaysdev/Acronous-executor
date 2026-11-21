/* FUN_1801fecc0 @ 1801fecc0 */

void * FUN_1801fecc0(ulonglong *param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  code *pcVar5;
  void *pvVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uStack_870;
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  void *local_850 [2];
  undefined4 auStack_840 [508];
  ulonglong local_50;
  
  pvVar6 = (void *)FUN_1801febc0();
  lVar2 = *param_2;
  lVar8 = 0;
  pvVar7 = pvVar6;
  while( true ) {
    do {
      pvVar3 = (void *)*param_1;
      uVar4 = *(ulonglong *)(((ulonglong)pvVar3 & 0xfffffffffffffff8) + 0x810);
      plVar10 = (longlong *)(uVar4 & 0xfffffffffffffff8);
      if (plVar10 == (longlong *)0x0) {
        return pvVar7;
      }
      if ((longlong)pvVar6 - (longlong)(plVar10[0x101] & 0xfffffffffffffffeU) < 4) {
        return (void *)(plVar10[0x101] & 0xfffffffffffffffeU);
      }
      LOCK();
      pvVar1 = (void *)*param_1;
      if (pvVar3 == pvVar1) {
        *param_1 = uVar4;
        pvVar7 = pvVar3;
      }
      else {
        pvVar7 = pvVar1;
      }
      UNLOCK();
    } while (pvVar3 != pvVar1);
    if (pvVar3 == (void *)param_1[0x10]) {
      LOCK();
      if (pvVar3 == (void *)param_1[0x10]) {
        param_1[0x10] = uVar4;
      }
      UNLOCK();
    }
    if (lVar2 == 0) {
      thunk_FUN_1801d3330((ulonglong)pvVar3 & 0xfffffffffffffff8,0x818,8);
      local_850[0] = (void *)*plVar10;
      if (local_850[0] == (void *)0x0) {
        return (void *)0x0;
      }
    }
    else {
      local_850[0] = &LAB_1801c87d0;
      local_850[1] = pvVar3;
      FUN_1801c87f0(lVar2,local_850);
      local_850[0] = (void *)*plVar10;
      if (local_850[0] == (void *)0x0) {
        return (void *)0x0;
      }
    }
    pvVar7 = memcpy(local_850 + 1,plVar10 + 1,0x808);
    if (0x40 < local_50) break;
    if (local_50 != 0) {
      lVar11 = local_50 * 0x20;
      lVar9 = 0;
      do {
        pcVar5 = *(code **)((longlong)auStack_840 + lVar9 + -0x10);
        uStack_870 = *(undefined8 *)((longlong)auStack_840 + lVar9 + -8);
        local_868 = *(undefined4 *)((longlong)auStack_840 + lVar9);
        uStack_864 = *(undefined4 *)((longlong)auStack_840 + lVar9 + 4);
        uStack_860 = *(undefined4 *)((longlong)auStack_840 + lVar9 + 8);
        uStack_85c = *(undefined4 *)((longlong)auStack_840 + lVar9 + 0xc);
        *(code **)((longlong)auStack_840 + lVar9 + -0x10) = FUN_180027490;
        *(undefined8 *)((longlong)auStack_840 + lVar9 + -8) = 0;
        *(undefined4 *)((longlong)auStack_840 + lVar9) = 0;
        *(undefined4 *)((longlong)auStack_840 + lVar9 + 4) = 0;
        *(undefined4 *)((longlong)auStack_840 + lVar9 + 8) = 0;
        *(undefined4 *)((longlong)auStack_840 + lVar9 + 0xc) = 0;
        pvVar7 = (void *)(*pcVar5)(&uStack_870);
        lVar9 = lVar9 + 0x20;
      } while (lVar11 != lVar9);
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 8) {
      return pvVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201a30(0,local_50,0x40,&PTR_s_C__Users_burne__cargo_registry_s_180288700);
}


