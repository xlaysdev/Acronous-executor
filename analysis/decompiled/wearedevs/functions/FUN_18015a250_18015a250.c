/* FUN_18015a250 @ 18015a250 */

undefined8 * FUN_18015a250(undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  char local_148;
  byte bStack_147;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined8 uStack_13e;
  undefined8 local_136;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_18014a500(&local_230,(int *)(param_4 + 0x18),param_2);
  if (local_230 == 1) {
    param_1[5] = local_208;
    param_1[3] = local_218;
    param_1[4] = uStack_210;
    param_1[1] = local_228;
    param_1[2] = uStack_220;
    *param_1 = 0;
    return param_1;
  }
  if ((int)local_230 == 4) {
    puVar3 = (undefined8 *)*param_3;
    lVar4 = param_4 + 0x40;
    FUN_1801385e0(&local_148);
    if (local_148 != '\x03') {
      param_1[5] = CONCAT62(uStack_126,uStack_128);
      *(undefined8 *)((longlong)param_1 + 0x1a) = local_136;
      *(ulonglong *)((longlong)param_1 + 0x22) = CONCAT26(uStack_128,uStack_12e);
      *(ulonglong *)((longlong)param_1 + 10) = CONCAT26(uStack_140,uStack_146);
      *(undefined8 *)((longlong)param_1 + 0x12) = uStack_13e;
      *param_1 = 1;
      *(char *)(param_1 + 1) = local_148;
      *(byte *)((longlong)param_1 + 9) = bStack_147;
      return param_1;
    }
    if ((bStack_147 & 1) != 0) {
      local_48 = (**(code **)*puVar3)(puVar3[1]);
      local_50 = lVar4;
      local_40 = param_4;
      if (*(longlong *)(param_4 + 0xb0) != 0) {
        (**(code **)(*(longlong *)(param_4 + 0xb0) + 0x18))(*(undefined8 *)(param_4 + 0xb8));
      }
      *(undefined8 *)(local_40 + 0xb0) = local_48;
      *(longlong *)(local_40 + 0xb8) = local_50;
      *param_1 = 3;
      return param_1;
    }
  }
  else {
    memcpy((void *)((longlong)&uStack_13e + 6),&local_230,0xe8);
    local_148 = '\0';
    bStack_147 = 0;
    uStack_146 = 0;
    uVar1 = *(ulonglong *)(param_2 + 0x20);
    FUN_18015fbf0(param_2,uVar1,&local_148);
    if (*(int *)(param_4 + 0x18) == 1) {
      if (*(ulonglong *)(param_2 + 0x10) <= uVar1) {
LAB_18015a456:
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_180254f60);
      }
      if (*(int *)(*(longlong *)(param_2 + 8) + uVar1 * 0xf8) == 2) goto LAB_18015a456;
      uVar2 = *(undefined8 *)(param_4 + 0x20);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 8) + uVar1 * 0xf8);
      *puVar3 = 1;
      puVar3[1] = uVar2;
      *(ulonglong *)(param_4 + 0x20) = uVar1;
    }
    else {
      *(undefined8 *)(param_4 + 0x18) = 1;
      *(ulonglong *)(param_4 + 0x20) = uVar1;
      *(ulonglong *)(param_4 + 0x28) = uVar1;
    }
    lVar4 = *(longlong *)(param_4 + 0xb0);
    *(undefined8 *)(param_4 + 0xb0) = 0;
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 8))(*(undefined8 *)(param_4 + 0xb8));
    }
  }
  *param_1 = 2;
  return param_1;
}


