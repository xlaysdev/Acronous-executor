/* FUN_18017e660 @ 18017e660 */

void FUN_18017e660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_70 = *param_2;
  local_80 = (undefined8 *)param_2[1];
  lVar4 = param_2[2];
  *param_2 = 0;
  param_2[1] = 8;
  param_2[2] = 0;
  puVar3 = local_80 + lVar4;
  puVar6 = local_80;
  local_78 = local_80;
  local_68 = puVar3;
  do {
    if (puVar6 == puVar3) {
      FUN_18016ead0(&local_80);
      *param_1 = 0;
      return;
    }
    puVar1 = puVar6 + 1;
    local_58 = (longlong *)*puVar6;
    plVar2 = local_58 + 0x10;
    local_78 = puVar1;
    if (local_58[0x10] == 0) {
      if ((longlong *)param_2[3] == plVar2) {
        plVar5 = (longlong *)local_58[0x11];
        param_2[3] = plVar5;
        goto joined_r0x00018017e744;
      }
    }
    else {
      plVar5 = (longlong *)local_58[0x11];
      *(longlong **)(local_58[0x10] + 8) = plVar5;
joined_r0x00018017e744:
      if (plVar5 == (longlong *)0x0) {
        if ((longlong *)param_2[4] != plVar2) goto LAB_18017e770;
        param_2[4] = *plVar2;
        *plVar2 = 0;
        local_58[0x11] = 0;
        LOCK();
        *local_58 = *local_58 + -1;
        lVar4 = *local_58;
        UNLOCK();
      }
      else {
        *plVar5 = *plVar2;
        *plVar2 = 0;
        local_58[0x11] = 0;
        LOCK();
        *local_58 = *local_58 + -1;
        lVar4 = *local_58;
        UNLOCK();
      }
      local_60 = local_58;
      if (lVar4 == 0) {
        FUN_180162e30(&local_60);
      }
    }
LAB_18017e770:
    LOCK();
    *local_58 = *local_58 + -1;
    UNLOCK();
    if (*local_58 == 0) {
      FUN_180162e30(&local_58);
    }
    puVar6 = puVar1;
  } while( true );
}


