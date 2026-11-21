/* FUN_180180730 @ 180180730 */

ulonglong * FUN_180180730(ulonglong *param_1,longlong param_2,longlong *param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  ulonglong local_70;
  undefined8 local_68;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = (uint)param_4 * 5 + 5;
  uVar9 = (uint)uVar1;
  local_70 = (ulonglong)(uVar9 & 0x80000000);
  if ((uVar9 & (uVar10 | 0x80000000)) != 0) {
    *param_1 = (ulonglong)(uVar10 & uVar9);
    *(char *)(param_1 + 1) = (char)((ulonglong)uVar1 >> 0x10);
    *(byte *)((longlong)param_1 + 9) = (byte)((uVar9 & 0x80000000) >> 0x1f);
    return param_1;
  }
  LOCK();
  bVar13 = *(char *)(param_2 + 0x18) == '\0';
  if (bVar13) {
    *(char *)(param_2 + 0x18) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_180200390(param_2 + 0x18);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_180200a50();
    bVar7 = bVar7 ^ 1;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x30 + (ulonglong)param_4 * 0x10);
  lVar12 = (ulonglong)param_4 * 0x10 + 0x18;
  param_3 = (longlong *)*param_3;
  puVar3 = (undefined8 *)*param_3;
  if (puVar2 == (undefined8 *)0x0) {
    local_68 = (*(code *)*puVar3)(param_3[1]);
    lVar5 = *(longlong *)(param_2 + 0x18 + lVar12);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(param_2 + 0x20 + lVar12));
    }
LAB_180180841:
    *(undefined8 *)(param_2 + 0x18 + lVar12) = local_68;
    *(ulonglong *)(param_2 + 0x20 + lVar12) = local_70;
  }
  else {
    uVar4 = *(ulonglong *)(param_2 + 0x20 + lVar12);
    local_70 = uVar4 ^ param_3[1];
    if (puVar2 != puVar3 || local_70 != 0) {
      local_68 = (*(code *)*puVar3)();
      (*(code *)puVar2[3])(uVar4);
      goto LAB_180180841;
    }
  }
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  if (param_4 == 0) {
    uVar11 = 5;
    if ((uVar4 & 0x80000000) == 0) {
      uVar10 = (uint)uVar4 & 5;
      goto joined_r0x000180180892;
    }
  }
  else {
    uVar11 = 10;
    if ((uVar4 & 0x80000000) == 0) {
      uVar10 = (uint)uVar4 & 10;
joined_r0x000180180892:
      uVar11 = (ulonglong)uVar10;
      if (uVar11 == 0) {
        *(undefined1 *)((longlong)param_1 + 9) = 2;
        goto joined_r0x0001801808dd;
      }
    }
  }
  *param_1 = uVar11;
  *(char *)(param_1 + 1) = (char)(uVar4 >> 0x10);
  *(byte *)((longlong)param_1 + 9) = (byte)(uVar4 >> 0x1f) & 1;
joined_r0x0001801808dd:
  if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
    *(undefined1 *)(param_2 + 0x19) = 1;
  }
  LOCK();
  cVar8 = *(char *)(param_2 + 0x18);
  *(char *)(param_2 + 0x18) = '\0';
  UNLOCK();
  if (cVar8 == '\x02') {
    WakeByAddressSingle(param_2 + 0x18);
  }
  return param_1;
}


