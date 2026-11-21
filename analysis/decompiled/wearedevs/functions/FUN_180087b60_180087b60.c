/* FUN_180087b60 @ 180087b60 */

undefined4 FUN_180087b60(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 *local_80;
  char *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char *local_48;
  uint local_40;
  uint local_3c;
  char *local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  pcVar2 = (char *)*param_1;
  LOCK();
  cVar6 = *pcVar2;
  if (cVar6 == '\0') {
    *pcVar2 = '\x01';
  }
  UNLOCK();
  local_80 = param_2;
  if (cVar6 != '\0') {
    local_29 = 1;
    FUN_180200390(pcVar2);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_40 = 0;
    cVar6 = pcVar2[1];
  }
  else {
    local_29 = 1;
    local_40 = FUN_180200a50();
    local_40 = local_40 ^ 1;
    cVar6 = pcVar2[1];
  }
  if (cVar6 != '\0') {
    uStack_60._1_7_ = (undefined7)((ulonglong)uStack_60 >> 8);
    uStack_60 = (char *)CONCAT71(uStack_60._1_7_,(char)local_40);
    local_68 = pcVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dbe8);
  }
  pcVar3 = (char *)param_1[1];
  local_88 = *(undefined8 *)(local_80 + 8);
  local_a8 = *local_80;
  uStack_a4 = local_80[1];
  uStack_a0 = local_80[2];
  uStack_9c = local_80[3];
  local_98 = local_80[4];
  uStack_94 = local_80[5];
  uStack_90 = local_80[6];
  uStack_8c = local_80[7];
  LOCK();
  cVar6 = *pcVar3;
  if (cVar6 == '\0') {
    *pcVar3 = '\x01';
  }
  UNLOCK();
  local_38 = pcVar2;
  if (cVar6 != '\0') {
    local_2a = 1;
    FUN_180200390(pcVar3);
  }
  if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) == 0) {
    local_3c = 0;
    cVar6 = pcVar3[1];
    pcVar2 = local_38;
  }
  else {
    local_2a = 1;
    local_3c = FUN_180200a50();
    local_3c = local_3c ^ 1;
    cVar6 = pcVar3[1];
    pcVar2 = local_38;
  }
  local_38 = pcVar2;
  if (cVar6 != '\0') {
    uStack_60._1_7_ = (undefined7)((ulonglong)uStack_60 >> 8);
    uStack_60 = (char *)CONCAT71(uStack_60._1_7_,(char)local_3c);
    local_68 = pcVar3;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020df80);
  }
  local_68 = pcVar2 + 8;
  local_48 = pcVar3 + 8;
  uStack_60 = pcVar2 + 0x78;
  uVar1 = *(undefined4 *)(pcVar2 + 0x10c);
  local_58 = pcVar2 + 0x118;
  uStack_50 = &local_a8;
  local_2b = 1;
  local_78 = pcVar3;
  FUN_1800ecf70(pcVar2 + 0x1c8,&local_68);
  local_48 = (char *)local_88;
  local_58._0_4_ = local_98;
  local_58._4_4_ = uStack_94;
  uStack_50._0_4_ = uStack_90;
  uStack_50._4_4_ = uStack_8c;
  local_68._0_4_ = local_a8;
  local_68._4_4_ = uStack_a4;
  uStack_60._0_4_ = uStack_a0;
  uStack_60._4_4_ = uStack_9c;
  local_70 = pcVar2 + 400;
  cVar6 = pcVar2[400];
  if ((cVar6 != '\x03') && (cVar6 != '\0')) {
    if (cVar6 == '\x01') {
      (**(code **)(*(longlong *)(local_38 + 0x198) + 0x20))
                (*(undefined8 *)(local_38 + 0x1b0),*(undefined8 *)(local_38 + 0x1a0),
                 *(undefined8 *)(local_38 + 0x1a8));
    }
    else {
      lVar4 = *(longlong *)(local_38 + 0x198);
      if ((!SBORROW8(0,lVar4)) && (lVar4 != 0)) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_38 + 0x1a0),lVar4,1);
      }
    }
  }
  pcVar2 = local_78;
  *(char **)(local_70 + 0x20) = local_48;
  *(undefined4 *)(local_70 + 0x10) = (undefined4)local_58;
  *(undefined4 *)(local_70 + 0x14) = local_58._4_4_;
  *(undefined4 *)(local_70 + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)(local_70 + 0x1c) = uStack_50._4_4_;
  *(undefined4 *)local_70 = (undefined4)local_68;
  *(undefined4 *)(local_70 + 4) = local_68._4_4_;
  *(undefined4 *)(local_70 + 8) = (undefined4)uStack_60;
  *(undefined4 *)(local_70 + 0xc) = uStack_60._4_4_;
  if (((char)local_3c == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) {
    local_2a = 0;
    cVar6 = FUN_180200a50();
    if (cVar6 == '\0') {
      pcVar2[1] = '\x01';
    }
  }
  LOCK();
  cVar6 = *pcVar2;
  *pcVar2 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    local_2a = 0;
    WakeByAddressSingle(pcVar2);
  }
  pcVar2 = local_38;
  if (((char)local_40 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) {
    local_29 = 0;
    cVar6 = FUN_180200a50();
    if (cVar6 == '\0') {
      pcVar2[1] = '\x01';
    }
  }
  LOCK();
  cVar6 = *pcVar2;
  *pcVar2 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    local_29 = 0;
    WakeByAddressSingle(pcVar2);
  }
  return uVar1;
}


