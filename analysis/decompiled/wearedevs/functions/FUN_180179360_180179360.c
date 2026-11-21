/* FUN_180179360 @ 180179360 */

undefined8 FUN_180179360(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  longlong *local_68;
  char local_60;
  char local_5f;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = *param_3;
  lVar3 = param_3[1];
  lVar4 = param_3[2];
  FUN_180178d90(&local_68,param_1,param_2,1);
  if (local_5f != '\x03') {
    do {
      cVar6 = local_60;
      plVar5 = local_68;
      if (local_5f == '\x02') {
        return 1;
      }
      if (*(longlong *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180263838);
      }
      lVar8 = 0;
      do {
        if (lVar4 * 0x10 == lVar8) {
          lVar8 = 1;
          iVar10 = 0;
          goto LAB_180179468;
        }
        iVar10 = *(int *)(lVar3 + lVar8);
        lVar8 = lVar8 + 0x10;
      } while (iVar10 == 0);
      lVar8 = *(longlong *)(lVar3 + -8 + lVar8);
LAB_180179468:
      local_68 = (longlong *)(lVar2 + 0x18);
      uVar9 = FUN_18018b9e0(&local_68,lVar8,iVar10);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      cVar7 = FUN_180178460(lVar8);
      if (cVar7 != '\r') {
        return 1;
      }
      uVar9 = *(ulonglong *)(param_1 + 0x90);
      do {
        if (cVar6 != (char)(uVar9 >> 0x10)) break;
        LOCK();
        uVar1 = *(ulonglong *)(param_1 + 0x90);
        bVar11 = uVar9 == uVar1;
        if (bVar11) {
          *(ulonglong *)(param_1 + 0x90) =
               (ulonglong)((uint)uVar9 & ((uint)plVar5 & 0x23 ^ 0xff002f));
        }
        else {
          uVar9 = uVar1;
        }
        UNLOCK();
      } while (!bVar11);
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
      FUN_180178d90(&local_68,param_1,param_2,1);
    } while (local_5f != '\x03');
  }
  return 2;
}


