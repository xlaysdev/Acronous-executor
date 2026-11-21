/* FUN_1801575e0 @ 1801575e0 */

undefined8 * FUN_1801575e0(undefined8 *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char local_238;
  byte bStack_237;
  undefined6 uStack_236;
  undefined2 uStack_230;
  undefined8 uStack_22e;
  undefined8 local_226;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 uStack_216;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_18014a500(&local_140,(int *)(param_4 + 0x18),param_2);
  if (local_140 == 2) {
    param_1[10] = local_e8;
    param_1[0xb] = uStack_e0;
    param_1[8] = local_f8;
    param_1[9] = uStack_f0;
    param_1[6] = local_108;
    param_1[7] = uStack_100;
    param_1[4] = local_118;
    param_1[5] = uStack_110;
    param_1[2] = local_128;
    param_1[3] = uStack_120;
    *param_1 = local_138;
    param_1[1] = uStack_130;
    return param_1;
  }
  local_48 = param_4;
  if ((int)local_140 == 4) {
    puVar1 = (undefined8 *)*param_3;
    puVar4 = (undefined8 *)(param_4 + 0x40);
    FUN_1801385e0(&local_238);
    if (local_238 != '\x03') {
      param_1[5] = CONCAT62(uStack_216,uStack_218);
      *(undefined8 *)((longlong)param_1 + 0x1a) = local_226;
      *(ulonglong *)((longlong)param_1 + 0x22) = CONCAT26(uStack_218,uStack_21e);
      *(ulonglong *)((longlong)param_1 + 10) = CONCAT26(uStack_230,uStack_236);
      *(undefined8 *)((longlong)param_1 + 0x12) = uStack_22e;
      *param_1 = 3;
      *(char *)(param_1 + 1) = local_238;
      *(byte *)((longlong)param_1 + 9) = bStack_237;
      return param_1;
    }
    if ((bStack_237 & 1) == 0) {
      *param_1 = 4;
      return param_1;
    }
    local_50 = (**(code **)*puVar1)(puVar1[1]);
    local_58 = puVar4;
    if (*(longlong *)(param_4 + 0xb0) != 0) {
      (**(code **)(*(longlong *)(param_4 + 0xb0) + 0x18))(*(undefined8 *)(param_4 + 0xb8));
    }
  }
  else {
    memcpy((void *)((longlong)&uStack_22e + 6),&local_140,0xe8);
    local_238 = '\0';
    bStack_237 = 0;
    uStack_236 = 0;
    uVar2 = *(ulonglong *)(param_2 + 0x20);
    FUN_18015fbf0(param_2,uVar2,&local_238);
    if (*(int *)(param_4 + 0x18) == 1) {
      if (*(ulonglong *)(param_2 + 0x10) <= uVar2) {
LAB_180157822:
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_180254f60);
      }
      if (*(int *)(*(longlong *)(param_2 + 8) + uVar2 * 0xf8) == 2) goto LAB_180157822;
      uVar3 = *(undefined8 *)(param_4 + 0x20);
      puVar4 = (undefined8 *)(*(longlong *)(param_2 + 8) + uVar2 * 0xf8);
      *puVar4 = 1;
      puVar4[1] = uVar3;
      *(ulonglong *)(param_4 + 0x20) = uVar2;
    }
    else {
      *(undefined8 *)(param_4 + 0x18) = 1;
      *(ulonglong *)(param_4 + 0x20) = uVar2;
      *(ulonglong *)(param_4 + 0x28) = uVar2;
    }
    puVar4 = *(undefined8 **)*param_3;
    local_50 = (*(code *)*puVar4)(((longlong *)*param_3)[1]);
    local_58 = puVar4;
    if (*(longlong *)(param_4 + 0xb0) != 0) {
      (**(code **)(*(longlong *)(param_4 + 0xb0) + 0x18))(*(undefined8 *)(param_4 + 0xb8));
    }
  }
  *(undefined8 *)(local_48 + 0xb0) = local_50;
  *(undefined8 **)(local_48 + 0xb8) = local_58;
  *param_1 = 5;
  return param_1;
}


