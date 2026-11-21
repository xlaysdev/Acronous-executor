/* FUN_18012e390 @ 18012e390 */

void FUN_18012e390(uint *param_1,ulonglong param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Src;
  undefined8 *puVar8;
  size_t local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = param_2 >> 0x38 | (param_2 & 0xff000000000000) >> 0x28 |
             (param_2 & 0xff0000000000) >> 0x18 | (param_2 & 0xff00000000) >> 8 |
             (param_2 & 0xff000000) << 8 | (param_2 & 0xff0000) << 0x18 | (param_2 & 0xff00) << 0x28
             | param_2 << 0x38;
  plVar2 = (longlong *)*param_3;
  uVar7 = param_3[1];
  uVar5 = plVar2[1];
  local_50 = uVar5 ^ 0x7fffffffffffffff;
  if (uVar7 < (uVar5 ^ 0x7fffffffffffffff)) {
    local_50 = uVar7;
  }
  if (local_50 < 3) {
    local_58 = 3;
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_58);
  }
  _Src = (void *)((longlong)&local_48 + 5);
  uVar3 = plVar2[2];
  uVar6 = 3;
  do {
    if (uVar3 == uVar5) {
      FUN_1801b2210(plVar2,0x40,1);
      uVar5 = plVar2[1];
      uVar3 = plVar2[2];
    }
    uVar4 = uVar3 - uVar5;
    if (uVar7 < uVar3 - uVar5) {
      uVar4 = uVar7;
    }
    if (uVar6 <= uVar4) {
      uVar4 = uVar6;
    }
    memcpy((void *)(uVar5 + *plVar2),_Src,uVar4);
    uVar3 = plVar2[2];
    local_50 = uVar3 - plVar2[1];
    if (local_50 < uVar4) goto LAB_18012e649;
    _Src = (void *)((longlong)_Src + uVar4);
    uVar5 = plVar2[1] + uVar4;
    uVar7 = uVar7 - uVar4;
    plVar2[1] = uVar5;
    param_3[1] = uVar7;
    uVar6 = uVar6 - uVar4;
  } while (uVar6 != 0);
  local_48 = CONCAT71(local_48._1_7_,*(undefined1 *)((longlong)param_1 + 5));
  uVar6 = uVar5 ^ 0x7fffffffffffffff;
  if (uVar7 < (uVar5 ^ 0x7fffffffffffffff)) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    uVar6 = 1;
    puVar8 = &local_48;
    do {
      if (uVar3 == uVar5) {
        FUN_1801b2210(plVar2,0x40,1);
        uVar5 = plVar2[1];
        uVar3 = plVar2[2];
      }
      uVar4 = uVar3 - uVar5;
      if (uVar7 < uVar3 - uVar5) {
        uVar4 = uVar7;
      }
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      memcpy((void *)(uVar5 + *plVar2),puVar8,uVar4);
      uVar3 = plVar2[2];
      local_50 = uVar3 - plVar2[1];
      if (local_50 < uVar4) goto LAB_18012e649;
      puVar8 = (undefined8 *)((longlong)puVar8 + uVar4);
      uVar5 = plVar2[1] + uVar4;
      uVar7 = uVar7 - uVar4;
      plVar2[1] = uVar5;
      param_3[1] = uVar7;
      uVar6 = uVar6 - uVar4;
    } while (uVar6 != 0);
    local_48 = CONCAT71(local_48._1_7_,(char)param_1[1]);
    uVar6 = uVar5 ^ 0x7fffffffffffffff;
    if (uVar7 < (uVar5 ^ 0x7fffffffffffffff)) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      uVar6 = 1;
      puVar8 = &local_48;
      while( true ) {
        if (uVar3 == uVar5) {
          FUN_1801b2210(plVar2,0x40,1);
          uVar5 = plVar2[1];
          uVar3 = plVar2[2];
        }
        uVar4 = uVar3 - uVar5;
        if (uVar7 < uVar3 - uVar5) {
          uVar4 = uVar7;
        }
        if (uVar6 <= uVar4) {
          uVar4 = uVar6;
        }
        memcpy((void *)(uVar5 + *plVar2),puVar8,uVar4);
        uVar3 = plVar2[2];
        local_50 = uVar3 - plVar2[1];
        if (local_50 < uVar4) break;
        puVar8 = (undefined8 *)((longlong)puVar8 + uVar4);
        uVar5 = plVar2[1] + uVar4;
        uVar7 = uVar7 - uVar4;
        plVar2[1] = uVar5;
        param_3[1] = uVar7;
        uVar6 = uVar6 - uVar4;
        if (uVar6 == 0) {
          uVar1 = *param_1;
          local_48 = CONCAT44(local_48._4_4_,
                              uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                              uVar1 << 0x18);
          local_50 = uVar5 ^ 0x7fffffffffffffff;
          if (uVar7 < (uVar5 ^ 0x7fffffffffffffff)) {
            local_50 = uVar7;
          }
          if (local_50 < 4) {
            local_58 = 4;
                    /* WARNING: Subroutine does not return */
            FUN_1801fc980(&local_58);
          }
          uVar6 = 4;
          puVar8 = &local_48;
          while( true ) {
            if (uVar3 == uVar5) {
              FUN_1801b2210(plVar2,0x40,1);
              uVar5 = plVar2[1];
              uVar3 = plVar2[2];
            }
            uVar4 = uVar3 - uVar5;
            if (uVar7 < uVar3 - uVar5) {
              uVar4 = uVar7;
            }
            if (uVar6 <= uVar4) {
              uVar4 = uVar6;
            }
            memcpy((void *)(uVar5 + *plVar2),puVar8,uVar4);
            uVar3 = plVar2[2];
            local_50 = uVar3 - plVar2[1];
            if (local_50 < uVar4) break;
            puVar8 = (undefined8 *)((longlong)puVar8 + uVar4);
            uVar5 = plVar2[1] + uVar4;
            uVar7 = uVar7 - uVar4;
            plVar2[1] = uVar5;
            param_3[1] = uVar7;
            uVar6 = uVar6 - uVar4;
            if (uVar6 == 0) {
              return;
            }
          }
          local_58 = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_58);
        }
      }
LAB_18012e649:
      local_58 = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_58);
    }
  }
  local_58 = 1;
  local_50 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_1801fc980(&local_58);
}


