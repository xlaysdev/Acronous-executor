/* FUN_1800876c0 @ 1800876c0 */

undefined8 FUN_1800876c0(undefined8 param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  char cVar7;
  char *pcVar8;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  undefined4 *local_90;
  char *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_74;
  char *local_70;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  char *local_58;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pcVar2 = (char *)*param_2;
  LOCK();
  cVar7 = *pcVar2;
  if (cVar7 == '\0') {
    *pcVar2 = '\x01';
  }
  UNLOCK();
  if (cVar7 != '\0') {
    FUN_180200390(pcVar2);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_60 = 0;
    cVar7 = pcVar2[1];
  }
  else {
    local_60 = FUN_180200a50();
    local_60 = local_60 ^ 1;
    cVar7 = pcVar2[1];
  }
  if (cVar7 != '\0') {
    uVar4 = (uint)uStack_210 >> 8;
    uStack_210 = CONCAT31((int3)uVar4,(char)local_60);
    local_218 = pcVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_218,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dbd0);
  }
  pcVar3 = (char *)param_2[1];
  pcVar1 = pcVar2 + 0x1c8;
  pcVar8 = pcVar1;
  local_58 = pcVar2;
  FUN_1801525c0(&local_d0,pcVar1,param_3);
  local_74 = SUB84(pcVar8,0);
  if (local_d0 == 0) {
    local_208 = local_b8;
    local_218 = (char *)CONCAT44(uStack_c4,local_c8);
    uStack_210 = uStack_c0;
    uStack_20c = uStack_bc;
    local_78 = FUN_18014fda0(&local_218);
  }
  else {
    local_218 = (char *)CONCAT71(local_218._1_7_,local_58[0x70]);
    cVar7 = FUN_18014a2e0(&local_218,param_3);
    if (cVar7 == '\0') {
      if ((local_58[0xa0] == '\0') && (*(uint *)(local_58 + 0xa4) <= param_3)) {
        *(uint *)(local_58 + 0xa0) = param_3 + 2 >> 0x1f;
        *(uint *)(local_58 + 0xa4) = param_3 + 2;
      }
    }
    else if ((local_58[0x118] == '\0') && (*(uint *)(local_58 + 0x11c) <= param_3)) {
      *(uint *)(local_58 + 0x118) = param_3 + 2 >> 0x1f;
      *(uint *)(local_58 + 0x11c) = param_3 + 2;
    }
    FUN_180132460(&local_218,param_3,0,0);
    local_74 = SUB84(&local_218,0);
    local_78 = FUN_18014fd50(&local_d0);
  }
  LOCK();
  cVar7 = *pcVar3;
  if (cVar7 == '\0') {
    *pcVar3 = '\x01';
  }
  UNLOCK();
  local_80 = pcVar1;
  if (cVar7 != '\0') {
    FUN_180200390(pcVar3);
  }
  if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) {
    local_5c = 0;
    cVar7 = pcVar3[1];
  }
  else {
    local_5c = FUN_180200a50();
    local_5c = local_5c ^ 1;
    cVar7 = pcVar3[1];
  }
  if (cVar7 != '\0') {
    uVar5 = (ulonglong)local_a8 >> 8;
    local_a8 = (char *)CONCAT71((int7)uVar5,(char)local_5c);
    local_b0 = pcVar3;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_b0,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020df68);
  }
  local_88 = pcVar3 + 8;
  local_49 = '\x01';
  local_a8 = local_58 + 0x78;
  local_a0 = local_58 + 0x118;
  local_98 = local_58 + 0x1b8;
  local_b0 = &local_49;
  local_90 = &local_64;
  local_70 = pcVar3;
  local_64 = param_4;
  FUN_1800854a0(param_1,local_58 + 8,&local_80,&local_b0);
  pcVar2 = local_70;
  if ((((char)local_5c == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
    pcVar2[1] = '\x01';
  }
  LOCK();
  cVar7 = *pcVar2;
  *pcVar2 = '\0';
  UNLOCK();
  if (cVar7 == '\x02') {
    WakeByAddressSingle(pcVar2);
  }
  pcVar2 = local_58;
  if ((((char)local_60 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
    pcVar2[1] = '\x01';
  }
  LOCK();
  cVar7 = *pcVar2;
  *pcVar2 = '\0';
  UNLOCK();
  if (cVar7 == '\x02') {
    WakeByAddressSingle(pcVar2);
  }
  return param_1;
}


