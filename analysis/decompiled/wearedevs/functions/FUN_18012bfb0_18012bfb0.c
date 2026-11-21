/* FUN_18012bfb0 @ 18012bfb0 */

ulonglong FUN_18012bfb0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  undefined7 uVar8;
  bool bVar9;
  longlong *local_40;
  code *local_38;
  longlong local_30;
  longlong local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *param_1;
LAB_18012bfd3:
  local_30 = *(longlong *)(local_28 + 0x10);
  uVar8 = (undefined7)((ulonglong)unaff_RSI >> 8);
  switch(local_30) {
  case 0:
  case 2:
    break;
  case 1:
    uVar7 = 0;
LAB_18012c012:
    return uVar7 & 0xffffffff;
  case 3:
    uVar7 = CONCAT71(uVar8,1);
    goto LAB_18012c012;
  default:
    local_40 = &local_30;
    local_38 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180243130,&local_40,&PTR_s_C__Users_burne__cargo_registry_s_1802431c8);
  }
  LOCK();
  cVar1 = *(char *)(local_28 + 0x28);
  *(char *)(local_28 + 0x28) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    LOCK();
    bVar9 = local_30 == *(longlong *)(local_28 + 0x10);
    if (bVar9) {
      *(longlong *)(local_28 + 0x10) = 2;
    }
    UNLOCK();
    if (bVar9) {
      plVar2 = (longlong *)*param_2;
      if (*(undefined8 **)(local_28 + 0x18) == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*plVar2;
        uVar7 = plVar2[1];
      }
      else {
        puVar5 = (undefined8 *)*plVar2;
        uVar7 = plVar2[1];
        param_2 = (longlong *)(*(ulonglong *)(local_28 + 0x20) ^ uVar7);
        if (*(undefined8 **)(local_28 + 0x18) == puVar5 && param_2 == (longlong *)0x0) {
          LOCK();
          *(undefined1 *)(local_28 + 0x28) = 0;
          UNLOCK();
          uVar7 = CONCAT71(uVar8,2);
          goto LAB_18012c012;
        }
      }
      local_19 = 1;
      uVar6 = (*(code *)*puVar5)(uVar7);
      lVar3 = *(longlong *)(local_28 + 0x18);
      uVar4 = *(undefined8 *)(local_28 + 0x20);
      *(undefined8 *)(local_28 + 0x18) = uVar6;
      *(longlong **)(local_28 + 0x20) = param_2;
      LOCK();
      *(undefined1 *)(local_28 + 0x28) = 0;
      UNLOCK();
      uVar7 = CONCAT71(uVar8,2);
      if (lVar3 != 0) {
        local_19 = 0;
        (**(code **)(lVar3 + 8))(uVar4);
      }
      goto LAB_18012c012;
    }
    LOCK();
    *(undefined1 *)(local_28 + 0x28) = 0;
    UNLOCK();
  }
  goto LAB_18012bfd3;
}


