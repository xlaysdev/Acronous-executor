/* FUN_1800eb390 @ 1800eb390 */

undefined8 FUN_1800eb390(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_40;
  undefined4 local_34;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x138) = param_2;
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    if (*(char *)(param_1 + 0x1d3) == '\0') goto LAB_1800eb3cc;
  }
  else {
    if (*(char *)(param_1 + 0x1d0) != '\x01') goto LAB_1800eb484;
LAB_1800eb3cc:
    local_34 = 1;
    local_68 = 0x200000004;
    local_60 = &local_34;
    local_58 = 0x100000000;
    local_50 = &local_68;
    uVar2 = ApplyControlToken(param_1 + 0x1f0,&local_58);
    if (uVar2 != 0) {
      puVar3 = (undefined8 *)((ulonglong)uVar2 << 0x20 | 2);
      goto LAB_1800eb45a;
    }
    *(undefined4 *)(param_1 + 0x1d0) = 0x1010000;
    *(undefined1 *)(param_1 + 0x1d4) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  local_28 = param_1;
  FUN_1800bfb10(&local_58,param_1);
  param_1 = local_28;
  if ((int)local_58 != 2) {
LAB_1800eb484:
    *(undefined8 *)(param_1 + 0x138) = 0;
    return 0;
  }
  puVar3 = local_50;
LAB_1800eb45a:
  cVar1 = FUN_1800ed360(puVar3);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (cVar1 != '\r') {
    return 0;
  }
  if (((uint)puVar3 & 3) != 1) {
    return 1;
  }
  local_40 = (longlong)puVar3 + -1;
  local_28 = *(undefined8 *)((longlong)puVar3 + -1);
  local_30 = *(undefined8 **)((longlong)puVar3 + 7);
  if ((code *)*local_30 != (code *)0x0) {
    (*(code *)*local_30)(local_28);
  }
  if (local_30[1] != 0) {
    thunk_FUN_1801d3330(local_28,local_30[1],local_30[2]);
  }
  thunk_FUN_1801d3330(local_40,0x18,8);
  return 1;
}


