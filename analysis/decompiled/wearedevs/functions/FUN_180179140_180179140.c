/* FUN_180179140 @ 180179140 */

undefined8 FUN_180179140(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  longlong *local_70;
  char local_68;
  char local_67;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *param_4;
  lVar4 = param_4[1];
  lVar5 = param_4[2];
  local_49 = (undefined1)param_3;
  FUN_180178d90(&local_70,lVar2,param_2,param_3);
  if (local_67 != '\x03') {
    do {
      cVar7 = local_68;
      plVar6 = local_70;
      if (local_67 == '\x02') {
        return 1;
      }
      if (*(longlong *)(lVar3 + 0x18) == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180263838);
      }
      lVar10 = lVar4;
      local_70 = (longlong *)(lVar3 + 0x18);
      uVar9 = FUN_18018c780(&local_70,lVar4,lVar5);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      cVar8 = FUN_180178460(lVar10);
      if (cVar8 != '\r') {
        return 1;
      }
      uVar9 = *(ulonglong *)(lVar2 + 0x90);
      do {
        if (cVar7 != (char)(uVar9 >> 0x10)) break;
        LOCK();
        uVar1 = *(ulonglong *)(lVar2 + 0x90);
        bVar11 = uVar9 == uVar1;
        if (bVar11) {
          *(ulonglong *)(lVar2 + 0x90) = (ulonglong)((uint)uVar9 & ((uint)plVar6 & 0x23 ^ 0xff002f))
          ;
        }
        else {
          uVar9 = uVar1;
        }
        UNLOCK();
      } while (!bVar11);
      if (((uint)lVar10 & 3) == 1) {
        local_60 = *(undefined8 *)(lVar10 + -1);
        local_58 = *(undefined8 **)(lVar10 + 7);
        if ((code *)*local_58 != (code *)0x0) {
          (*(code *)*local_58)(local_60);
        }
        if (local_58[1] != 0) {
          thunk_FUN_1801d3330(local_60,local_58[1],local_58[2]);
        }
        thunk_FUN_1801d3330(lVar10 + -1,0x18,8);
      }
      FUN_180178d90(&local_70,lVar2,param_2,local_49);
    } while (local_67 != '\x03');
  }
  return 2;
}


