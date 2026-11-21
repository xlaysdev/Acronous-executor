/* FUN_180181d30 @ 180181d30 */

longlong FUN_180181d30(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar8 = param_1[4] & *(ulonglong *)(param_2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48))
  ;
  pcVar1 = (char *)(*param_1 + uVar8 * 0x18);
  pcVar2 = (char *)(*param_1 + uVar8 * 0x18);
  LOCK();
  bVar9 = *pcVar2 == '\0';
  if (bVar9) {
    *pcVar2 = '\x01';
  }
  UNLOCK();
  if (!bVar9) {
    FUN_180200390(pcVar1);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = FUN_180200a50();
    bVar5 = bVar5 ^ 1;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38);
  lVar3 = *(longlong *)(param_2 + lVar7);
  if (lVar3 == 0) {
    if (*(longlong *)(pcVar1 + 8) == param_2) {
      lVar3 = *(longlong *)(param_2 + 8 + lVar7);
      *(longlong *)(pcVar1 + 8) = lVar3;
      goto joined_r0x000180181e07;
    }
LAB_180181e0f:
    param_2 = 0;
  }
  else {
    *(undefined8 *)(lVar3 + 8 + *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x38)) =
         *(undefined8 *)(param_2 + 8 + lVar7);
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38);
    lVar3 = *(longlong *)(param_2 + 8 + lVar7);
joined_r0x000180181e07:
    if (lVar3 == 0) {
      if (*(longlong *)(pcVar1 + 0x10) != param_2) goto LAB_180181e0f;
      *(undefined8 *)(pcVar1 + 0x10) = *(undefined8 *)(param_2 + lVar7);
    }
    else {
      *(undefined8 *)(lVar3 + *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x38)) =
           *(undefined8 *)(param_2 + lVar7);
      lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38);
    }
    *(undefined8 *)(param_2 + 8 + lVar7) = 0;
    *(undefined8 *)(param_2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38)) = 0;
    LOCK();
    param_1[3] = param_1[3] + -1;
    UNLOCK();
  }
  if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    pcVar1[1] = '\x01';
  }
  LOCK();
  cVar6 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  return param_2;
}


