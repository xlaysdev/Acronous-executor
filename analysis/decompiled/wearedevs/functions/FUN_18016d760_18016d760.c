/* FUN_18016d760 @ 18016d760 */

undefined8 FUN_18016d760(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

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
  longlong local_68;
  char local_60;
  char local_5f;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x18);
  FUN_180178d90(&local_68,lVar2,param_2,1);
  if (local_5f != '\x03') {
    do {
      cVar5 = local_60;
      lVar4 = local_68;
      if (local_5f == '\x02') {
        return 1;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802617c8);
      }
      lVar8 = param_3;
      local_68 = param_1 + 0x18;
      uVar7 = FUN_18018b9e0(&local_68,param_3,param_4);
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
        local_58 = *(undefined8 *)(lVar8 + -1);
        local_50 = *(undefined8 **)(lVar8 + 7);
        if ((code *)*local_50 != (code *)0x0) {
          (*(code *)*local_50)(local_58);
        }
        if (local_50[1] != 0) {
          thunk_FUN_1801d3330(local_58,local_50[1],local_50[2]);
        }
        thunk_FUN_1801d3330(lVar8 + -1,0x18,8);
      }
      FUN_180178d90(&local_68,lVar2,param_2,1);
    } while (local_5f != '\x03');
  }
  return 2;
}


