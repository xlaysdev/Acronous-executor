/* FUN_18017ea30 @ 18017ea30 */

longlong * FUN_18017ea30(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*(char *)(param_3 + 0x28) == '\0') {
    *(undefined1 *)(param_3 + 0x28) = 1;
    local_58 = *(undefined8 **)(param_3 + 8);
    lVar3 = *(longlong *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = 0;
    if (lVar3 != 0) {
      lVar3 = 1 - lVar3;
      do {
        plVar1 = (longlong *)*local_58;
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        local_60 = lVar3;
        if (*plVar1 == 0) {
          FUN_180162e30(local_58);
        }
        local_58 = local_58 + 1;
        lVar3 = local_60 + 1;
      } while (lVar3 != 1);
    }
    local_78 = 0;
    local_70 = 8;
    local_68 = 0;
    if (*(undefined8 **)(param_3 + 0x20) != (undefined8 *)0x0) {
      local_58 = *(undefined8 **)(param_3 + 0x20);
      do {
        lVar3 = local_68;
        puVar2 = (undefined8 *)*local_58;
        *(undefined8 **)(param_3 + 0x20) = puVar2;
        if (puVar2 == (undefined8 *)0x0) {
          *(undefined8 *)(param_3 + 0x18) = 0;
        }
        else {
          puVar2[1] = 0;
        }
        *local_58 = 0;
        local_58[1] = 0;
        local_58 = local_58 + -0x10;
        if (local_68 == local_78) {
          FUN_1801fb290(&local_78);
        }
        local_68 = lVar3 + 1;
        *(undefined8 **)(local_70 + lVar3 * 8) = local_58;
        local_58 = puVar2;
      } while (puVar2 != (undefined8 *)0x0);
    }
    param_1[2] = local_68;
    *param_1 = local_78;
    param_1[1] = local_70;
  }
  else {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  return param_1;
}


