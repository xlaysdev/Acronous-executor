/* FUN_1801ae4c0 @ 1801ae4c0 */

undefined1 * FUN_1801ae4c0(undefined1 *param_1,char *param_2,ulonglong param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_3 == 5) {
    if ((((*param_2 == 'h') && (param_2[1] == 't')) && (param_2[2] == 't')) &&
       ((param_2[3] == 'p' && (uVar2 = 1, param_2[4] == 's')))) {
LAB_1801ae525:
      *param_1 = 1;
      param_1[1] = uVar2;
      return param_1;
    }
  }
  else if (param_3 == 4) {
    if (((*param_2 == 'h') && (param_2[1] == 't')) && ((param_2[2] == 't' && (param_2[3] == 'p'))))
    {
      uVar2 = 0;
      goto LAB_1801ae525;
    }
  }
  else {
    uVar2 = 0xb;
    if (0x40 < param_3) goto LAB_1801ae56f;
  }
  uVar3 = 0;
  do {
    if (param_3 == uVar3) {
      FUN_1801b3ac0(&local_88);
      FUN_180027490();
      puVar4 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
      if (puVar4 == (undefined8 *)0x0) {
        local_68 = local_88;
        uStack_60 = uStack_80;
        local_48 = local_70;
        local_50 = local_78;
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      *puVar4 = local_88;
      puVar4[1] = uStack_80;
      puVar4[2] = local_78;
      puVar4[3] = local_70;
      *param_1 = 2;
      *(undefined8 **)(param_1 + 8) = puVar4;
      return param_1;
    }
    pbVar1 = (byte *)(param_2 + uVar3);
  } while ((""[*pbVar1] != ':') && (uVar3 = uVar3 + 1, ""[*pbVar1] != '\0'));
  uVar2 = 1;
LAB_1801ae56f:
  param_1[1] = uVar2;
  *param_1 = 3;
  return param_1;
}


