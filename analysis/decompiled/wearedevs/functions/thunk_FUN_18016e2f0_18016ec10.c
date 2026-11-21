/* thunk_FUN_18016e2f0 @ 18016ec10 */

undefined8
thunk_FUN_18016e2f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  longlong lStack_68;
  char cStack_60;
  char cStack_5f;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x18);
  FUN_180178d90(&lStack_68,lVar2,param_2,1);
  if (cStack_5f != '\x03') {
    do {
      cVar5 = cStack_60;
      lVar4 = lStack_68;
      if (cStack_5f == '\x02') {
        return 1;
      }
      if (lVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802617c8);
      }
      lVar8 = param_3;
      lStack_68 = param_1 + 0x18;
      uVar7 = FUN_18018c790(&lStack_68,param_3,param_4);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      cVar6 = FUN_18016cf30(lVar8);
      if (cVar6 != '\r') {
        return 1;
      }
      uVar7 = *(ulonglong *)(lVar2 + 0x90);
      do {
        if (cVar5 != (char)(uVar7 >> 0x10)) break;
        LOCK();
        uVar1 = *(ulonglong *)(lVar2 + 0x90);
        bVar9 = uVar7 == uVar1;
        if (bVar9) {
          *(ulonglong *)(lVar2 + 0x90) = (ulonglong)((uint)uVar7 & ((uint)lVar4 & 0x23 ^ 0xff002f));
        }
        else {
          uVar7 = uVar1;
        }
        UNLOCK();
      } while (!bVar9);
      if (((uint)lVar8 & 3) == 1) {
        uStack_58 = *(undefined8 *)(lVar8 + -1);
        puStack_50 = *(undefined8 **)(lVar8 + 7);
        if ((code *)*puStack_50 != (code *)0x0) {
          (*(code *)*puStack_50)(uStack_58);
        }
        if (puStack_50[1] != 0) {
          thunk_FUN_1801d3330(uStack_58,puStack_50[1],puStack_50[2]);
        }
        thunk_FUN_1801d3330(lVar8 + -1,0x18,8);
      }
      FUN_180178d90(&lStack_68,lVar2,param_2,1);
    } while (cStack_5f != '\x03');
  }
  return 2;
}


