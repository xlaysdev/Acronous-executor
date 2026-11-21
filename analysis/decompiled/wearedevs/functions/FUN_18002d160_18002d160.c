/* FUN_18002d160 @ 18002d160 */

ulonglong FUN_18002d160(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = *param_1;
  *param_1 = param_2;
  uVar2 = *param_3;
  uVar7 = param_3[1];
  plVar3 = (longlong *)param_3[2];
  local_41 = 1;
  local_60 = param_1;
  local_50 = uVar7;
  local_80 = FUN_18016a820(plVar3);
  local_a0 = &local_80;
  local_90 = 0;
  local_70 = &local_68;
  local_41 = 1;
  local_98 = local_a0;
  local_78 = param_2;
  local_68 = uVar2;
  local_50 = uVar7;
  FUN_180164f60();
LAB_18002d1eb:
  do {
    LOCK();
    cVar4 = *(char *)(*plVar3 + 0x1d0);
    *(char *)(*plVar3 + 0x1d0) = '\0';
    UNLOCK();
    uVar5 = uVar7;
    if (cVar4 != '\0') {
      local_41 = 0;
      local_50 = uVar7;
      uVar5 = FUN_1800354e0(plVar3,uVar7,&local_70,&local_a0);
      if ((uVar7 & 1) == 0) {
LAB_18002d352:
        *local_60 = local_58;
        return uVar5;
      }
    }
    uVar1 = *(uint *)(*plVar3 + 0x148);
    for (uVar8 = 0; local_50 = uVar5, uVar8 < uVar1; uVar8 = uVar8 + 1) {
      if (*(char *)(uVar5 + 0x90) != '\0') goto LAB_18002d352;
      *(int *)(uVar5 + 0x88) = *(int *)(uVar5 + 0x88) + 1;
      local_41 = 1;
      lVar6 = FUN_18016a720(uVar5,*plVar3 + 0x80);
      if (lVar6 == 0) {
        local_41 = 1;
        local_50 = uVar5;
        FUN_180164f00(uVar5 + 0x60);
        local_41 = 1;
        local_50 = uVar5;
        cVar4 = FUN_18016ad00(plVar3,uVar5);
        if (cVar4 == '\0') {
          local_41 = 0;
          local_50 = uVar5;
          uVar7 = FUN_18016ad50(plVar3,uVar5,*plVar3 + 0x80);
        }
        else {
          local_41 = 0;
          local_50 = uVar5;
          uVar7 = FUN_18016a840(plVar3,uVar5);
        }
        local_41 = 1;
        local_50 = uVar7;
        FUN_180164f60();
        goto LAB_18002d1eb;
      }
      local_41 = 0;
      local_50 = uVar5;
      uVar5 = FUN_18016b4b0(plVar3,lVar6,uVar5);
    }
    local_41 = 1;
    FUN_180164f00(uVar5 + 0x60);
    local_41 = 0;
    local_50 = uVar5;
    uVar7 = FUN_18016a840(plVar3,uVar5,*plVar3 + 0x80);
    local_41 = 1;
    local_50 = uVar7;
    FUN_180164f60();
  } while( true );
}


