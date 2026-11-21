/* FUN_180166110 @ 180166110 */

void FUN_180166110(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  bool bVar13;
  
  if (*(char *)param_1[1] != '\x01') {
    return;
  }
  puVar2 = (ulonglong *)*param_1;
  puVar11 = (ulonglong *)param_1[3];
  puVar1 = puVar2 + 1;
  LOCK();
  bVar13 = (char)puVar2[1] == '\0';
  if (bVar13) {
    *(char *)(puVar2 + 1) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_180200390(puVar1);
  }
  puVar7 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = FUN_180200a50();
    bVar8 = bVar8 ^ 1;
  }
  uVar3 = *puVar2;
  switch(puVar11[4]) {
  case 0:
    bVar6 = 1;
    bVar5 = 0;
    break;
  case 1:
    goto LAB_18016619f;
  case 2:
    bVar5 = 1;
    bVar6 = 0;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\blocking\\schedule.rs"
                  ,0x28,&PTR_s_C__Users_burne__cargo_registry_s_1802607e8);
  case 5:
LAB_18016619f:
    bVar6 = 0;
    bVar5 = 0;
    uVar4 = *puVar11;
    goto joined_r0x0001801661ae;
  }
  uVar4 = *puVar11;
joined_r0x0001801661ae:
  if (uVar4 == 0) {
    puVar12 = (ulonglong *)puVar2[2];
    if (puVar12 != puVar11) goto LAB_1801661fd;
    puVar12 = (ulonglong *)puVar11[1];
    puVar2[2] = (ulonglong)puVar12;
    if (puVar12 != (ulonglong *)0x0) goto LAB_1801661bd;
LAB_1801661f0:
    if ((ulonglong *)puVar2[3] == puVar11) {
      puVar2[3] = *puVar11;
      goto LAB_1801661c3;
    }
  }
  else {
    puVar12 = (ulonglong *)puVar11[1];
    *(ulonglong **)(uVar4 + 8) = puVar12;
    if (puVar12 == (ulonglong *)0x0) goto LAB_1801661f0;
LAB_1801661bd:
    *puVar12 = *puVar11;
LAB_1801661c3:
    *puVar11 = 0;
    puVar11[1] = 0;
  }
  puVar12 = (ulonglong *)puVar2[2];
LAB_1801661fd:
  if (puVar12 == (ulonglong *)0x0) {
    if (puVar2[3] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: self.tail.is_none()",0x25,
                    &PTR_s_C__Users_burne__cargo_registry_s_180260760);
    }
    if (((uint)uVar3 & 3) == 1) {
      LOCK();
      *puVar2 = uVar3 & 0xfffffffffffffffc;
      UNLOCK();
    }
  }
  if (((bool)(bVar6 | bVar5)) || (puVar11 = puVar2, lVar10 = FUN_180165f30(), lVar10 == 0)) {
    if ((bVar8 == 0) &&
       (((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0 &&
        (cVar9 = FUN_180200a50(), cVar9 == '\0')))) {
      *(undefined1 *)((longlong)puVar2 + 9) = 1;
    }
    LOCK();
    uVar3 = *puVar1;
    *(char *)puVar1 = '\0';
    UNLOCK();
    if ((char)uVar3 == '\x02') {
      WakeByAddressSingle(puVar1);
      return;
    }
  }
  else {
    if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = FUN_180200a50(), cVar9 == '\0')) {
      *(undefined1 *)((longlong)puVar2 + 9) = 1;
    }
    LOCK();
    uVar3 = *puVar1;
    *(char *)puVar1 = '\0';
    UNLOCK();
    if ((char)uVar3 == '\x02') {
      WakeByAddressSingle(puVar1);
    }
    (**(code **)(lVar10 + 8))(puVar11);
  }
  return;
}


