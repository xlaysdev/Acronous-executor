/* FUN_180126150 @ 180126150 */

longlong * FUN_180126150(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int local_178 [2];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_148 [52];
  int local_114;
  undefined1 local_100 [52];
  int local_cc;
  undefined8 ****local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 *puStack_a0;
  longlong local_98;
  int *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_90 = param_2 + 0x30;
  local_b0 = param_1;
  if (param_2[0x19] != 0x110000) {
    FUN_180126550(local_178,&local_90,param_2 + 0xc);
    if ((char)local_178[0] != '\0') goto LAB_18012620e;
  }
  param_2[0x19] = 0x110000;
  if (*param_2 != 3) {
    FUN_180118fd0(local_178,param_2,&local_90,param_2 + 0xc);
    if ((char)local_178[0] != '\0') goto LAB_18012620e;
  }
  param_2[0x19] = 0x110000;
  if ((param_2[0x2b] == 0x110000) ||
     (FUN_180126550(local_178,&local_90,param_2 + 0x1e), local_178[0] != 1)) {
    *local_b0 = 0;
    local_b0[1] = 8;
    local_b0[2] = 0;
    return local_b0;
  }
LAB_18012620e:
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x80,8);
  if (puVar1 == (undefined8 *)0x0) {
    local_58 = local_158;
    local_60 = local_160;
    local_68 = local_168;
    local_50 = local_170;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,0x80);
  }
  *puVar1 = local_170;
  puVar1[1] = local_168;
  puVar1[2] = local_160;
  puVar1[3] = local_158;
  local_a8 = 4;
  local_98 = 1;
  puStack_a0 = puVar1;
  memcpy(local_178,param_2,0xc0);
  lVar2 = 1;
  do {
    local_b8 = &local_b8;
    if (local_114 == 0x110000) {
LAB_180126304:
      local_114 = 0x110000;
      if (local_178[0] != 3) {
        FUN_180118fd0(&local_90,local_178,&local_b8,local_148);
        if ((char)local_90 != '\0') goto LAB_180126357;
      }
      local_114 = 0x110000;
      if (local_cc == 0x110000) {
LAB_1801263cc:
        local_b0[2] = local_98;
        *local_b0 = local_a8;
        local_b0[1] = (longlong)puStack_a0;
        return local_b0;
      }
      FUN_180126550(&local_90,&local_b8,local_100);
      if ((int)local_90 != 1) goto LAB_1801263cc;
    }
    else {
      FUN_180126550(&local_90,&local_b8,local_148);
      if ((char)local_90 == '\0') goto LAB_180126304;
    }
LAB_180126357:
    local_50 = local_88;
    local_68 = local_80;
    local_60 = local_78;
    local_58 = local_70;
    if (lVar2 == local_a8) {
      FUN_1801f6a80(&local_a8,lVar2,1,8,0x20);
      puVar1 = puStack_a0;
    }
    puVar1[lVar2 * 4] = local_50;
    puVar1[lVar2 * 4 + 1] = local_68;
    puVar1[lVar2 * 4 + 2] = local_60;
    puVar1[lVar2 * 4 + 3] = local_58;
    lVar2 = lVar2 + 1;
    local_98 = lVar2;
  } while( true );
}


