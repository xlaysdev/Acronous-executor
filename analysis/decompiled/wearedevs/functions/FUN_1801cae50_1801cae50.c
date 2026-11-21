/* FUN_1801cae50 @ 1801cae50 */

undefined8 FUN_1801cae50(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_48 [3];
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  if (uVar2 < uVar4) {
    lVar5 = *param_1;
    uVar1 = *(undefined1 *)(lVar5 + uVar2);
    lVar3 = uVar2 + 1;
    param_1[2] = lVar3;
    switch(uVar1) {
    case 0x22:
      lVar3 = param_3[2];
      if (lVar3 == *param_3) {
        FUN_180201770(param_3);
      }
      *(undefined1 *)(param_3[1] + lVar3) = 0x22;
      break;
    default:
      local_48[0] = 0xc;
      if (uVar4 <= uVar2) {
        local_2a = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,lVar3,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180289040);
      }
      local_2a = 1;
      lVar7 = lVar5;
      uVar4 = (**(code **)PTR_PTR_1802fd598)(10,lVar5,lVar5 + lVar3);
      if ((uVar4 & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (lVar7 - lVar5) + 1;
      }
      local_2a = 1;
      lVar5 = (**(code **)PTR_PTR_1802fd590)(10,lVar5,lVar5 + lVar7);
      local_2a = 0;
      uVar6 = FUN_1801ff730(local_48,lVar5 + 1,lVar3 - lVar7);
      return uVar6;
    case 0x2f:
      lVar3 = param_3[2];
      if (lVar3 == *param_3) {
        FUN_180201770(param_3);
      }
      *(undefined1 *)(param_3[1] + lVar3) = 0x2f;
      break;
    case 0x5c:
      lVar3 = param_3[2];
      if (lVar3 == *param_3) {
        FUN_180201770(param_3);
      }
      *(undefined1 *)(param_3[1] + lVar3) = 0x5c;
      break;
    case 0x62:
      lVar3 = param_3[2];
      if (lVar3 == *param_3) {
        FUN_180201770(param_3);
      }
      *(undefined1 *)(param_3[1] + lVar3) = 8;
      break;
    case 0x66:
      lVar3 = param_3[2];
      if (lVar3 == *param_3) {
        FUN_180201770(param_3);
      }
      *(undefined1 *)(param_3[1] + lVar3) = 0xc;
      break;
    case 0x6e:
      lVar3 = param_3[2];
      if (lVar3 == *param_3) {
        FUN_180201770(param_3);
      }
      *(undefined1 *)(param_3[1] + lVar3) = 10;
      break;
    case 0x72:
      lVar3 = param_3[2];
      if (lVar3 == *param_3) {
        FUN_180201770(param_3);
      }
      *(undefined1 *)(param_3[1] + lVar3) = 0xd;
      break;
    case 0x74:
      lVar3 = param_3[2];
      if (lVar3 == *param_3) {
        FUN_180201770(param_3);
      }
      *(undefined1 *)(param_3[1] + lVar3) = 9;
      break;
    case 0x75:
      uVar6 = FUN_1801fee80();
      return uVar6;
    }
    param_3[2] = lVar3 + 1;
    uVar6 = 0;
  }
  else {
    local_48[0] = 4;
    if (uVar4 < uVar2) {
      local_29 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar2,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180289040);
    }
    lVar3 = *param_1;
    local_29 = 1;
    lVar5 = lVar3;
    uVar4 = (**(code **)PTR_PTR_1802fd598)(10,lVar3,lVar3 + uVar2);
    if ((uVar4 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (lVar5 - lVar3) + 1;
    }
    local_29 = 1;
    lVar3 = (**(code **)PTR_PTR_1802fd590)(10,lVar3,lVar3 + lVar5);
    local_29 = 0;
    uVar6 = FUN_1801ff730(local_48,lVar3 + 1,uVar2 - lVar5);
  }
  return uVar6;
}


