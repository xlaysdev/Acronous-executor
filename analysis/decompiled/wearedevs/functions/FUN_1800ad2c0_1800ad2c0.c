/* FUN_1800ad2c0 @ 1800ad2c0 */

undefined8 FUN_1800ad2c0(undefined8 *param_1,ulonglong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 auStack_468 [2];
  undefined *puStack_460;
  undefined4 auStack_458 [2];
  undefined8 uStack_450;
  undefined4 auStack_448 [2];
  undefined8 uStack_440;
  undefined4 auStack_438 [2];
  undefined8 local_430 [128];
  
  plVar1 = (longlong *)*param_3;
  plVar2 = (longlong *)param_3[1];
  if (*plVar2 == 0) {
    uVar6 = plVar2[3];
  }
  else if ((int)*plVar2 == 1) {
    uVar6 = 0;
    if ((ulonglong)plVar2[3] <= (ulonglong)plVar2[2]) {
      uVar6 = plVar2[2] - plVar2[3];
    }
  }
  else {
    uVar6 = 0;
  }
  lVar7 = plVar1[1] - plVar1[4];
  if ((ulonglong)plVar1[1] < (ulonglong)plVar1[4]) {
    lVar7 = 0;
  }
  if ((ulonglong)plVar2[5] < uVar6) {
    uVar6 = plVar2[5];
  }
  if (uVar6 == 0 && lVar7 == 0) {
    return 0;
  }
  uVar3 = *param_1;
  lVar7 = param_1[1];
  puStack_460 = (undefined *)0x1800ad338;
  cVar4 = (**(code **)(lVar7 + 0x38))(uVar3);
  if (cVar4 == '\0') {
    uVar6 = plVar1[4];
    uVar9 = plVar1[1] - uVar6;
    if ((ulonglong)plVar1[1] < uVar6 || uVar9 == 0) {
      if (*plVar2 == 2) {
        lVar5 = 1;
        uVar9 = 0;
      }
      else if ((int)*plVar2 == 1) {
        uVar9 = plVar2[2];
        uVar6 = plVar2[3];
        if (uVar9 < (ulonglong)plVar2[3]) {
          uVar6 = uVar9;
        }
        uVar9 = uVar9 - uVar6;
        lVar5 = uVar6 + plVar2[1];
      }
      else {
        lVar5 = plVar2[2];
        uVar9 = plVar2[3];
      }
      if ((ulonglong)plVar2[5] < uVar9) {
        uVar9 = plVar2[5];
      }
    }
    else {
      lVar5 = uVar6 + *plVar1;
    }
    puStack_460 = (undefined *)0x1800ad453;
    uVar6 = (**(code **)(lVar7 + 0x20))(uVar3,param_2,lVar5,uVar9);
    if (uVar6 == 2) {
      return 2;
    }
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  else {
    lVar5 = 0x38;
    do {
      *(undefined4 *)((longlong)auStack_468 + lVar5) = 0;
      *(undefined8 *)((longlong)auStack_468 + lVar5 + 8) = 1;
      *(undefined4 *)((longlong)auStack_458 + lVar5) = 0;
      *(undefined8 *)((longlong)auStack_458 + lVar5 + 8) = 1;
      *(undefined4 *)((longlong)auStack_448 + lVar5) = 0;
      *(undefined8 *)((longlong)auStack_448 + lVar5 + 8) = 1;
      *(undefined4 *)((longlong)auStack_438 + lVar5) = 0;
      *(undefined8 *)((longlong)local_430 + lVar5) = 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != 0x438);
    puStack_460 = (undefined *)0x1800ad3b2;
    uVar6 = FUN_180066f70(param_3,local_430,0x40);
    if (0x40 < uVar6) {
                    /* WARNING: Subroutine does not return */
      puStack_460 = &UNK_1800ad4da;
      FUN_180201a30(0,uVar6,0x40,&PTR_s_C__Users_burne__cargo_registry_s_180210e78);
    }
    puStack_460 = (undefined *)0x1800ad3cf;
    uVar6 = (**(code **)(lVar7 + 0x40))(uVar3,param_2,local_430,uVar6);
    if (uVar6 == 2) {
      return 2;
    }
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  uVar6 = plVar1[1];
  uVar9 = plVar1[4];
  uVar8 = 0;
  if (uVar9 <= uVar6) {
    uVar8 = uVar6 - uVar9;
  }
  if (uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
    if (param_2 <= uVar8) {
      plVar1[4] = uVar9 + param_2;
      return 0;
    }
    plVar1[4] = uVar9 + uVar8;
    param_2 = param_2 - uVar8;
  }
  puStack_460 = (undefined *)0x1800ad4a4;
  FUN_180067590(plVar2,param_2);
  return 0;
}


