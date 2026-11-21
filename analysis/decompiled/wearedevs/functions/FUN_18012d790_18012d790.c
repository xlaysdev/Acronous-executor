/* FUN_18012d790 @ 18012d790 */

ulonglong FUN_18012d790(longlong *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong unaff_RSI;
  undefined7 uVar7;
  bool bVar8;
  char ***local_78;
  char **local_70;
  char **local_68;
  code *local_60;
  undefined8 local_58;
  char ****local_50;
  undefined8 local_48;
  undefined *local_40;
  char local_31;
  longlong local_30;
  longlong *local_28;
  char ***local_20;
  undefined *local_18;
  
  if ((char)param_1[1] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.pending_pong.is_none()",0x2d,
                  &PTR_s_C__Users_burne__cargo_registry_s_180243a60);
  }
  if (*param_2 == '\0') {
    uVar3 = *(undefined8 *)(param_2 + 1);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined8 *)((longlong)param_1 + 9) = uVar3;
    unaff_RSI = 0;
    goto LAB_18012da51;
  }
  cVar4 = *(char *)((longlong)param_1 + 0x11);
  lVar1 = *(longlong *)((longlong)param_1 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x11) = 2;
  uVar7 = (undefined7)(unaff_RSI >> 8);
  if (cVar4 == '\x02') {
    lVar2 = *(longlong *)(param_2 + 1);
    lVar1 = *param_1;
joined_r0x00018012d889:
    if ((lVar1 != 0) && (lVar2 == -0x4be978f4852483c5)) {
      LOCK();
      bVar8 = *(longlong *)(lVar1 + 0x10) == 2;
      if (bVar8) {
        *(longlong *)(lVar1 + 0x10) = 3;
      }
      UNLOCK();
      if (bVar8) {
        FUN_180162080(lVar1 + 0x30);
        unaff_RSI = CONCAT71(uVar7,1);
        if (*(longlong *)PTR_DAT_1802fd448 != 0) goto LAB_18012da51;
        uVar5 = (uint)DAT_1802fb6a0;
        if (1 < uVar5 - 1) {
          if (uVar5 == 0) goto LAB_18012da51;
          goto LAB_18012daa7;
        }
LAB_18012d8ee:
        cVar4 = FUN_1801601d0(PTR_DAT_1802fb690,uVar5);
        if (cVar4 == '\0') goto LAB_18012da51;
        local_68 = (char **)&DAT_180243af8;
        local_60 = (code *)0x25;
        puVar6 = PTR_DAT_1802fb690;
        goto LAB_18012d922;
      }
    }
    unaff_RSI = CONCAT71(uVar7,1);
    if (((3 < *(ulonglong *)PTR_DAT_1802fd448) ||
        ((uVar5 = (uint)DAT_1802fb6b8, 1 < uVar5 - 1 &&
         ((uVar5 == 0 || (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fb6a8), (char)uVar5 == '\0')))))) ||
       (cVar4 = FUN_1801601d0(PTR_DAT_1802fb6a8,uVar5), cVar4 == '\0')) goto LAB_18012da51;
    local_60 = FUN_18012e160;
    local_78 = (char ***)&DAT_180243b0a;
    local_70 = (char **)&local_68;
    local_20 = (char ***)&local_78;
    local_18 = &DAT_180243ad8;
    local_50 = &local_20;
    puVar6 = PTR_DAT_1802fb6a8;
    local_68 = (char **)param_2;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 1);
    local_31 = cVar4;
    local_30 = lVar1;
    if (lVar1 != lVar2) {
      *(char *)((longlong)param_1 + 0x11) = cVar4;
      lVar1 = *param_1;
      goto joined_r0x00018012d889;
    }
    local_28 = &local_30;
    if (lVar1 != 0x54fe9b8bf0a27b0b) {
      FUN_1801fa3da(0,&local_28,&PTR_DAT_180243a78,"pending_ping should be for shutdown",0x47,
                    &PTR_s_C__Users_burne__cargo_registry_s_180243aa8);
LAB_18012daa7:
      uVar5 = FUN_1801faaf0(&PTR_DAT_1802fb690);
      if ((char)uVar5 == '\0') goto LAB_18012da51;
      goto LAB_18012d8ee;
    }
    unaff_RSI = CONCAT71(uVar7,2);
    if ((*(longlong *)PTR_DAT_1802fd448 != 0) ||
       (((uVar5 = (uint)DAT_1802fb688, 1 < uVar5 - 1 &&
         ((uVar5 == 0 || (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fb678), (char)uVar5 == '\0')))) ||
        (cVar4 = FUN_1801601d0(PTR_DAT_1802fb678,uVar5), cVar4 == '\0')))) goto LAB_18012da51;
    local_68 = (char **)0x180243ac0;
    local_60 = (code *)0x2d;
    puVar6 = PTR_DAT_1802fb678;
LAB_18012d922:
    local_78 = &local_68;
    local_70 = (char **)&DAT_180243ad8;
    local_50 = &local_78;
  }
  local_58 = 1;
  local_40 = puVar6 + 0x30;
  local_48 = 1;
  FUN_180160ae0(puVar6,&local_58);
LAB_18012da51:
  return unaff_RSI & 0xffffffff;
}


