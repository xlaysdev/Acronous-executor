/* FUN_1801cb540 @ 1801cb540 */

undefined8 * FUN_1801cb540(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 local_70 [3];
  longlong local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  while( true ) {
    uVar4 = param_2[2];
    FUN_1801cb310(param_2);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    if (uVar2 == uVar1) {
      local_70[0] = 4;
      lVar3 = *param_2;
      local_49 = 1;
      lVar5 = lVar3;
      uVar4 = (**(code **)PTR_PTR_1802fd598)(10,lVar3,lVar3 + uVar2);
      if ((uVar4 & 1) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (lVar5 - lVar3) + 1;
      }
      local_49 = 1;
      lVar3 = (**(code **)PTR_PTR_1802fd590)(10,lVar3,lVar3 + lVar5);
      local_49 = 0;
      lVar3 = FUN_1801ff730(local_70,lVar3 + 1,uVar2 - lVar5);
      goto LAB_1801cb761;
    }
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar2,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180288fe0);
    }
    lVar3 = *param_2;
    if (*(char *)(lVar3 + uVar2) != '\\') break;
    uVar6 = uVar2 - uVar4;
    if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar4,uVar2,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180289028);
    }
    lVar5 = param_3[2];
    if ((ulonglong)(*param_3 - lVar5) < uVar6) {
      local_58 = lVar3;
      FUN_1801f6a80(param_3,lVar5,uVar6,1,1);
      lVar5 = param_3[2];
      lVar3 = local_58;
    }
    memcpy((void *)(param_3[1] + lVar5),(void *)(lVar3 + uVar4),uVar6);
    param_3[2] = lVar5 + uVar6;
    param_2[2] = uVar2 + 1;
    lVar3 = FUN_1801cae50(param_2,1,param_3);
    if (lVar3 != 0) {
LAB_1801cb761:
      param_1[1] = lVar3;
      *param_1 = 2;
      return param_1;
    }
  }
  if (*(char *)(lVar3 + uVar2) == '\"') {
    lVar5 = param_3[2];
    if (lVar5 == 0) {
      if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar4,uVar2,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180289010);
      }
      param_2[2] = uVar2 + 1;
      *param_1 = 0;
      param_1[1] = lVar3 + uVar4;
      param_1[2] = uVar2 - uVar4;
      return param_1;
    }
    uVar6 = uVar2 - uVar4;
    if (uVar2 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar4,uVar2,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180288ff8);
    }
    if ((ulonglong)(*param_3 - lVar5) < uVar6) {
      FUN_1801f6a80(param_3,lVar5,uVar6,1,1);
      lVar5 = param_3[2];
    }
    memcpy((void *)(param_3[1] + lVar5),(void *)(lVar3 + uVar4),uVar6);
    param_3[2] = lVar5 + uVar6;
    param_2[2] = uVar2 + 1;
    lVar3 = param_3[1];
    *param_1 = 1;
    param_1[1] = lVar3;
    param_1[2] = lVar5 + uVar6;
    return param_1;
  }
  param_2[2] = uVar2 + 1;
  local_70[0] = 0x10;
  local_4a = 1;
  lVar5 = lVar3;
  uVar4 = (**(code **)PTR_PTR_1802fd598)(10,lVar3,lVar3 + uVar2 + 1);
  if ((uVar4 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (lVar5 - lVar3) + 1;
  }
  local_4a = 1;
  lVar3 = (**(code **)PTR_PTR_1802fd590)(10,lVar3,lVar3 + lVar5);
  local_4a = 0;
  lVar3 = FUN_1801ff730(local_70,lVar3 + 1,(uVar2 + 1) - lVar5);
  goto LAB_1801cb761;
}


