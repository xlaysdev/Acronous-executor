/* FUN_180123580 @ 180123580 */

undefined8 * FUN_180123580(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  char **local_60;
  undefined1 *local_58;
  char *local_50;
  char *local_48;
  char local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    pcVar1 = (char *)(lVar2 + 0x10);
    LOCK();
    bVar8 = *(char *)(lVar2 + 0x10) == '\0';
    if (bVar8) {
      *(char *)(lVar2 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar8) {
      FUN_180200390();
    }
    puVar3 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      uVar5 = 0;
      cVar4 = *(char *)(lVar2 + 0x11);
    }
    else {
      uVar5 = FUN_180200a50();
      uVar5 = uVar5 ^ 1;
      cVar4 = *(char *)(lVar2 + 0x11);
    }
    cVar7 = (char)uVar5;
    if (cVar4 != '\0') {
      local_60 = &local_48;
      local_58 = &LAB_180118f90;
      local_48 = pcVar1;
      local_40 = cVar7;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180241e10,&local_60,&PTR_s_C__Users_burne__cargo_registry_s_180242240);
    }
    if (*(char *)(lVar2 + 0x70) == '\0') {
      if (((cVar7 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      puVar6 = (undefined8 *)0x0;
      LOCK();
      cVar4 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
    }
    else {
      FUN_180027490();
      puVar6 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
      if (puVar6 == (undefined8 *)0x0) {
        local_50 = pcVar1;
        local_34 = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x18);
      }
      *(undefined1 *)(puVar6 + 2) = 10;
      *puVar6 = 1;
      puVar6[1] = &DAT_18023f788;
      if (((cVar7 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)(lVar2 + 0x11) = 1;
      }
      LOCK();
      cVar4 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
    }
    if (cVar4 == '\x02') {
      WakeByAddressSingle(pcVar1);
    }
  }
  return puVar6;
}


