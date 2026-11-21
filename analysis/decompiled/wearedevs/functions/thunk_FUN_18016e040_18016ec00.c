/* thunk_FUN_18016e040 @ 18016ec00 */

undefined8 thunk_FUN_18016e040(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  longlong lStack_68;
  char cStack_60;
  char cStack_5f;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar10 = param_3[1];
  uVar2 = param_3[2];
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar5 = *param_3;
  FUN_180178d90(&lStack_68,lVar3,param_2,0);
  if (cStack_5f != '\x03') {
    do {
      cVar7 = cStack_60;
      lVar6 = lStack_68;
      if (cStack_5f == '\x02') {
        return 0;
      }
      if (uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar2,uVar10,uVar10,&PTR_s_C__Users_burne__cargo_registry_s_180261878);
      }
      if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802617e0);
      }
      lVar11 = lVar5 + uVar2;
      lStack_68 = param_1 + 0x18;
      uVar9 = FUN_18018c770(&lStack_68,lVar5 + uVar2,uVar10 - uVar2);
      if ((uVar9 & 1) == 0) {
        uVar9 = lVar11 + uVar2;
        uVar10 = param_3[3];
        if ((ulonglong)param_3[3] < uVar9) {
          param_3[3] = uVar9;
          uVar10 = uVar9;
        }
        if (uVar9 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("filled overflow",0xf,&PTR_s_C__Users_burne__cargo_registry_s_1802617f8);
        }
        if (uVar10 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0("filled must not become larger than initialized",0x5d,
                        &PTR_s_C__Users_burne__cargo_registry_s_1802617f8);
        }
        param_3[2] = uVar9;
        return 0;
      }
      cVar8 = FUN_18016cf30(lVar11);
      if (cVar8 != '\r') {
        return 0;
      }
      uVar9 = *(ulonglong *)(lVar3 + 0x90);
      do {
        if (cVar7 != (char)(uVar9 >> 0x10)) break;
        LOCK();
        uVar1 = *(ulonglong *)(lVar3 + 0x90);
        bVar12 = uVar9 == uVar1;
        if (bVar12) {
          *(ulonglong *)(lVar3 + 0x90) = (ulonglong)((uint)uVar9 & ((uint)lVar6 & 0x23 ^ 0xff002f));
        }
        else {
          uVar9 = uVar1;
        }
        UNLOCK();
      } while (!bVar12);
      if (((uint)lVar11 & 3) == 1) {
        uStack_58 = *(undefined8 *)(lVar11 + -1);
        puStack_50 = *(undefined8 **)(lVar11 + 7);
        if ((code *)*puStack_50 != (code *)0x0) {
          (*(code *)*puStack_50)(uStack_58);
        }
        if (puStack_50[1] != 0) {
          thunk_FUN_1801d3330(uStack_58,puStack_50[1],puStack_50[2]);
        }
        thunk_FUN_1801d3330(lVar11 + -1,0x18,8);
      }
      FUN_180178d90(&lStack_68,lVar3,param_2,0);
    } while (cStack_5f != '\x03');
  }
  return 1;
}


