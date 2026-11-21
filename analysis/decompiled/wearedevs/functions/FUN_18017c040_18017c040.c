/* FUN_18017c040 @ 18017c040 */

ulonglong FUN_18017c040(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  char cVar2;
  longlong *unaff_RDI;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  byte local_3c;
  
  LOCK();
  bVar5 = *(char *)(param_2 + 0xe0) == '\0';
  if (bVar5) {
    *(char *)(param_2 + 0xe0) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_180200390(param_2 + 0xe0);
    unaff_RDI = param_1;
  }
  puVar1 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_3c = 0;
    if (param_4 == '\0') goto LAB_18017c0fe;
LAB_18017c094:
    LOCK();
    lVar4 = *param_1;
    *param_1 = *param_1 + -0x10001;
    UNLOCK();
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(short)lVar4 == 1);
    lVar4 = *(longlong *)(param_2 + 0xf8);
    if (lVar4 != *(longlong *)(param_2 + 0xe8)) goto LAB_18017c12c;
  }
  else {
    local_3c = FUN_180200a50();
    local_3c = local_3c ^ 1;
    unaff_RDI = param_1;
    if (param_4 != '\0') goto LAB_18017c094;
LAB_18017c0fe:
    LOCK();
    *param_1 = *param_1 + -0x10000;
    UNLOCK();
    uVar3 = 0;
    lVar4 = *(longlong *)(param_2 + 0xf8);
    if (lVar4 != *(longlong *)(param_2 + 0xe8)) goto LAB_18017c12c;
  }
  FUN_1801fb290(param_2 + 0xe8);
LAB_18017c12c:
  *(undefined8 *)(*(longlong *)(param_2 + 0xf0) + lVar4 * 8) = param_3;
  *(longlong *)(param_2 + 0xf8) = lVar4 + 1;
  if (((local_3c == 0) && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
     (cVar2 = FUN_180200a50(), cVar2 == '\0')) {
    *(undefined1 *)(param_2 + 0xe1) = 1;
  }
  LOCK();
  cVar2 = *(char *)(param_2 + 0xe0);
  *(char *)(param_2 + 0xe0) = '\0';
  UNLOCK();
  if (cVar2 == '\x02') {
    WakeByAddressSingle(param_2 + 0xe0);
  }
  return uVar3 & 0xffffffff;
}


