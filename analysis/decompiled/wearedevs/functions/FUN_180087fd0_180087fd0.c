/* FUN_180087fd0 @ 180087fd0 */

undefined4 * FUN_180087fd0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  char *pcVar5;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined4 *local_70;
  char *local_68;
  char *local_58;
  uint local_50;
  uint local_4c;
  char *local_48;
  char local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  pcVar1 = (char *)*param_2;
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\0') {
    *pcVar1 = '\x01';
  }
  UNLOCK();
  if (cVar4 != '\0') {
    FUN_180200390(pcVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_50 = 0;
    cVar4 = pcVar1[1];
  }
  else {
    local_50 = FUN_180200a50();
    local_50 = local_50 ^ 1;
    cVar4 = pcVar1[1];
  }
  if (cVar4 != '\0') {
    uStack_90._1_7_ = (undefined7)((ulonglong)uStack_90 >> 8);
    uStack_90 = (char *)CONCAT71(uStack_90._1_7_,(char)local_50);
    local_98 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_98,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dc00);
  }
  pcVar5 = (char *)param_2[1];
  LOCK();
  cVar4 = *pcVar5;
  if (cVar4 == '\0') {
    *pcVar5 = '\x01';
  }
  UNLOCK();
  local_48 = pcVar1;
  if (cVar4 != '\0') {
    FUN_180200390(pcVar5);
  }
  if ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0) {
    local_4c = 0;
    cVar4 = pcVar5[1];
  }
  else {
    local_4c = FUN_180200a50();
    local_4c = local_4c ^ 1;
    cVar4 = pcVar5[1];
  }
  if (cVar4 != '\0') {
    uStack_90._1_7_ = (undefined7)((ulonglong)uStack_90 >> 8);
    uStack_90 = (char *)CONCAT71(uStack_90._1_7_,(char)local_4c);
    local_98 = pcVar5;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_98,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020df98);
  }
  local_9c = *(undefined4 *)(param_3 + 4);
  pcVar1 = local_48 + 0x118;
  local_58 = pcVar5;
  FUN_180137200(&local_98,pcVar1);
  pcVar5 = local_58;
  if ((char)local_98 == '\x03') {
    (**(code **)*param_3)(&local_98,param_3 + 3,param_3[1],param_3[2]);
    pcVar5 = local_48;
    local_68 = local_58 + 8;
    uStack_cc = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_b8 = (undefined4)local_88;
    uStack_b4 = local_88._4_4_;
    uStack_b0 = (undefined4)uStack_80;
    uStack_ac = uStack_80._4_4_;
    uStack_c8 = (undefined4)local_98;
    uStack_c4 = local_98._4_4_;
    uStack_c0 = (undefined4)uStack_90;
    uStack_bc = uStack_90._4_4_;
    local_d0 = CONCAT22(local_d0._2_2_,0x201);
    local_3a = local_48[0x70];
    local_98 = (char *)&local_9c;
    uStack_90 = &local_3a;
    local_70 = &local_d0;
    local_39 = 1;
    local_88 = local_48 + 8;
    uStack_80 = local_48 + 0x78;
    local_78 = pcVar1;
    FUN_1800ecde0(local_48 + 0x1c8,&local_98);
    local_78 = (char *)CONCAT44(uStack_ac,uStack_b0);
    local_88 = (char *)CONCAT44(uStack_bc,uStack_c0);
    uStack_80 = (char *)CONCAT44(uStack_b4,uStack_b8);
    local_98 = (char *)CONCAT44(uStack_cc,local_d0);
    uStack_90 = (char *)CONCAT44(uStack_c4,uStack_c8);
    local_a8 = pcVar5 + 400;
    cVar4 = pcVar5[400];
    if ((cVar4 != '\x03') && (cVar4 != '\0')) {
      if (cVar4 == '\x01') {
        (**(code **)(*(longlong *)(local_48 + 0x198) + 0x20))
                  (*(undefined8 *)(local_48 + 0x1b0),*(undefined8 *)(local_48 + 0x1a0),
                   *(undefined8 *)(local_48 + 0x1a8));
      }
      else {
        lVar2 = *(longlong *)(local_48 + 0x198);
        if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
          thunk_FUN_1801d3330(*(undefined8 *)(local_48 + 0x1a0),lVar2,1);
        }
      }
    }
    pcVar5 = local_58;
    *(char **)(local_a8 + 0x20) = local_78;
    *(undefined4 *)(local_a8 + 0x10) = (undefined4)local_88;
    *(undefined4 *)(local_a8 + 0x14) = local_88._4_4_;
    *(undefined4 *)(local_a8 + 0x18) = (undefined4)uStack_80;
    *(undefined4 *)(local_a8 + 0x1c) = uStack_80._4_4_;
    *(undefined4 *)local_a8 = (undefined4)local_98;
    *(undefined4 *)(local_a8 + 4) = local_98._4_4_;
    *(undefined4 *)(local_a8 + 8) = (undefined4)uStack_90;
    *(undefined4 *)(local_a8 + 0xc) = uStack_90._4_4_;
    *(undefined1 *)param_1 = 3;
    if (((char)local_4c != '\0') || ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0))
    goto LAB_180088219;
    cVar4 = FUN_180200a50();
  }
  else {
    *(char **)(param_1 + 8) = local_78;
    param_1[4] = (undefined4)local_88;
    param_1[5] = local_88._4_4_;
    param_1[6] = (undefined4)uStack_80;
    param_1[7] = uStack_80._4_4_;
    *param_1 = (undefined4)local_98;
    param_1[1] = local_98._4_4_;
    param_1[2] = (undefined4)uStack_90;
    param_1[3] = uStack_90._4_4_;
    if (((char)local_4c != '\0') || ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0))
    goto LAB_180088219;
    cVar4 = FUN_180200a50();
  }
  if (cVar4 == '\0') {
    pcVar5[1] = '\x01';
  }
LAB_180088219:
  LOCK();
  cVar4 = *pcVar5;
  *pcVar5 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(pcVar5);
  }
  pcVar1 = local_48;
  if ((((char)local_50 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    pcVar1[1] = '\x01';
  }
  LOCK();
  cVar4 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  return param_1;
}


